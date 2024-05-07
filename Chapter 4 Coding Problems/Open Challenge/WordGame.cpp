#include "WordGame.h"

// WordGame 클래스의 생성자
WordGame::WordGame(string title, string startWord) {
    this->title = title;            // 게임 제목을 설정합니다.
    this->startWord = startWord;    // 시작 단어를 설정합니다.
    this->players = nullptr;        // 플레이어 목록을 초기화합니다.
}

// WordGame 클래스의 소멸자
WordGame::~WordGame() {
    if (players != nullptr) {       // 플레이어 목록이 할당되어 있는 경우
        delete[] players;           // 동적으로 할당된 메모리를 해제합니다.
        players = nullptr;          // 해제된 메모리에 다시 접근하는 것을 방지하기 위해 nullptr로 설정합니다.
    }
}

// 게임 참가자를 생성하는 함수
bool WordGame::createPlayers() {
    // 인원을 입력받습니다.
    cout << title << " 게임을 시작합니다." << endl;
    do {
        cout << "게임에 참가하는 인원은 몇 명입니까? (2명 이상)" << endl;
        cin >> PlayerList;
    } while (PlayerList <= 2);  // 최소한 2명 이상이어야 합니다.

    // PlayerList 크기의 동적 메모리를 할당합니다.
    players = new Player[PlayerList];

    // 할당이 실패한 경우 함수를 종료합니다.
    if (!players) {
        return false;
    }

    // 각 참가자의 이름을 입력받습니다.
    for (int i = 0; i < PlayerList; i++) {
        cout << i << "번 참가자의 이름을 입력하세요" << endl;
        string Name;
        cin >> Name;
        players[i].set_PlayerName(Name);
    }
    return true;
}

// 게임을 실행하는 함수
void WordGame::run() {
    if (!createPlayers()) {  // 게임 참가자 생성에 실패한 경우 해당코드가 없으면 오류가 난다
        return;              // 함수를 종료합니다.
    }

    string lastWord = startWord;  // 시작하는 단어를 설정합니다.
    cout << "시작하는 단어는 " + lastWord + "입니다" << endl;

    int index = 0;
    while (1) {
        string newWord = players[index].sayWord();  // 현재 차례의 플레이어가 단어를 말합니다.

        if (!players[index].succeed(lastWord)) {    // 이전 단어에 이어지지 않는 경우
            cout << players[index].get_PlayerName() << "이 졌습니다." << endl;  // 플레이어의 패배를 알립니다.
            break;  // 게임을 종료합니다.
        }

        index++;           // 다음 차례로 넘어갑니다.
        index %= PlayerList;  // 차례가 플레이어 목록을 순환하도록 합니다.
        lastWord = newWord;   // 이전 단어를 현재 단어로 갱신합니다.
    }
}
