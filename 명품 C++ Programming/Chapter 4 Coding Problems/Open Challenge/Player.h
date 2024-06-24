#pragma once  // 중복 포함 방지 지시문

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	string Name;  // 플레이어의 이름을 저장하는 멤버 변수
	string Word;  // 플레이어가 현재 말한 단어를 저장하는 멤버 변수

public:
	// 기본 생성자: 이름을 "Unknown"으로 초기화
	Player();

	// 이름을 매개변수로 받는 생성자
	Player(string Name);

	// 소멸자: 객체가 소멸될 때 호출되는 함수
	~Player();

	// 플레이어의 이름을 반환하는 함수
	string get_PlayerName() { return Name; };

	// 플레이어의 이름을 설정하는 함수
	void set_PlayerName(string Name);

	// 플레이어가 단어를 말하고 입력한 단어를 반환하는 함수
	string sayWord();

	// 플레이어가 이전 단어에 성공적으로 이어지는지 여부를 확인하는 함수
	bool succeed(string lastWord);
};
