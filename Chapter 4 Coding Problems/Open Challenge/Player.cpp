#include "Player.h"

// 기본 생성자: Name 멤버 변수를 "Known"으로 초기화합니다.
Player::Player() {
    Name = "Known";
}

// 이름을 매개변수로 받는 생성자: Name 멤버 변수를 주어진 이름으로 초기화합니다.
Player::Player(string Name) {
    this->Name = Name;
}

// 소멸자: 플레이어 객체가 소멸될 때 호출되며, 객체의 이름을 출력합니다.
Player::~Player() {
    cout << Name << "객체 삭제" << endl;
}

// 플레이어의 이름을 설정하는 함수
void Player::set_PlayerName(string Name) {
    this->Name = Name;
}

// 플레이어가 단어를 말하고 입력한 단어를 반환하는 함수
string Player::sayWord() {
    cout << Name + ">>";  // 플레이어 이름을 출력합니다.
    cin >> Word;          // 플레이어가 단어를 입력합니다.

    return Word;          // 입력한 단어를 반환합니다.
}

// 플레이어가 이전 단어에 성공적으로 이어지는지 여부를 확인하는 함수
bool Player::succeed(string lastWord) {
    // lastWord의 길이에서 2를 뺀 값은 마지막 두 글자의 인덱스를 나타냅니다.
    int lastIndex = lastWord.length() - 2;

    // lastWord의 마지막 두 글자와 플레이어가 입력한 단어의 첫 두 글자를 비교합니다.
    if (lastWord.at(lastIndex) == Word.at(0) &&
        lastWord.at(lastIndex + 1) == Word.at(1)) {
        // 두 글자가 일치하면 true를 반환합니다.
        return true;
    }
    else {
        // 두 글자가 일치하지 않으면 false를 반환합니다.
        return false;
    }
}
