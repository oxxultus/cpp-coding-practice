#pragma once  // 중복 포함 방지 지시문

#include <string>
#include "Player.h"  // Player 클래스를 포함하는 헤더 파일을 포함

class Player;  // 전방 선언: Player 클래스가 WordGame 클래스에 의존함을 나타냄

class WordGame {
private:
	Player* players;  // Player 클래스의 포인터 배열: 게임에 참가하는 플레이어 목록

	string title;       // 게임의 제목을 저장하는 문자열 멤버 변수
	string startWord;   // 게임의 시작 단어를 저장하는 문자열 멤버 변수

	int PlayerList;  // 게임에 참가하는 플레이어의 수를 나타내는 정수 멤버 변수

	bool createPlayers();  // 게임 참가자를 생성하는 함수

public:
	// 생성자: 게임의 제목과 시작 단어를 매개변수로 받아 초기화
	WordGame(string title, string startWord);

	// 소멸자: 동적으로 할당된 메모리를 해제
	~WordGame();

	// 게임을 실행하는 함수
	void run();
};
