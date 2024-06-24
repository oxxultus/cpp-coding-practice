#pragma once // 이 헤더 파일이 중복 포함되지 않도록 하는 헤더 가드입니다.

#include <iostream> // 표준 입력과 출력을 위한 라이브러리를 포함합니다.
#include <string> // 문자열 관련 라이브러리를 포함합니다.

using namespace std; // 표준 네임스페이스를 사용합니다.

class Player{
    int numbers[3]; // 플레이어가 가지고 있는 3개의 숫자를 저장하는 배열입니다.
    string name; // 플레이어의 이름을 저장하는 문자열 변수입니다.

public:
    // 기본 생성자: 이름을 "NULL"로 초기화합니다.
    Player() : Player("NULL"){}

    // 생성자: 주어진 이름으로 플레이어를 초기화합니다.
    Player(string name){this->name = name;}

    // 이름을 설정하는 함수
    void setName(string name){this->name = name;}

    // 이름을 반환하는 함수
    string getName(){return name;}

    // 랜덤한 정수 3개를 할당하고 3개의 수가 같은지 확인하는 함수
    bool playGambling() {
        // 랜덤한 정수 3개 할당
        for (int i = 0; i < 3; i++) {
            numbers[i] = rand() % 3; // 0부터 2까지의 랜덤한 숫자를 할당합니다.
            cout << "\t" << numbers[i]; // 할당된 숫자를 출력합니다.
        }

        // 3가지가 중 하나라도 다르면 false를 반환합니다.
        for (int i = 0; i < 2; i++) {
            if (numbers[i] != numbers[i + 1]) {
                return false;
            }
        }
        // 모두 같으면 true를 반환합니다.
	    return true;
    }
    
}; 
