#pragma once // 이 헤더 파일이 중복 포함되지 않도록 하는 헤더 가드입니다.

#include "Player.h" // Player 클래스의 선언이 포함된 헤더 파일을 포함합니다.

class GamblingGame{
    Player player[2]; // Player 객체 배열을 저장하는 멤버 변수입니다.
    bool isGameCompleted = false; // 게임이 완료되었는지 여부를 나타내는 멤버 변수입니다.

public:
    // 기본 생성자: Player 객체 배열의 크기를 2로 설정합니다.
    // Player 객체들은 기본 생성자를 통해 생성됩니다.
    GamblingGame();

    // 게임을 실행하는 메서드입니다.
    void play();
};
