#include "WordGame.h"

int main() {
    // WordGame 객체의 포인터를 선언합니다.
    WordGame* game;

    // 새로운 WordGame 객체를 동적으로 할당하여 생성합니다.
    // 생성자를 호출할 때 게임의 제목과 시작 단어를 전달합니다.
    game = new WordGame("끝말잇기", "아버지");

    // 생성된 게임 객체의 run() 함수를 호출하여 게임을 실행합니다.
    game->run();

    // 게임이 종료되면 동적으로 할당된 메모리를 해제합니다.
    delete game;

    // 메인 함수의 반환값을 반환합니다.
    return 0;
}
