#include "Color.h"

int main() {
    Color screenColor(255, 0, 0);
    Color *p;

    p = &screenColor;
    p->show();

    Color colors[3];
    p = colors;


    //1번 방법
    p[0].setColor(255, 0, 0); // 각 배열 요소의 색상 설정
    p[1].setColor(0, 255, 0);
    p[2].setColor(0, 0, 255);

    //2번 방법
    (p+0)->setColor(255, 0, 0); // 각 배열 요소의 색상 설정
    (p+1)->setColor(0, 255, 0);
    (p+2)->setColor(0, 0, 255);

    // 1번과 2번의 결과는 동일하다.
    // 다만 1번의 경우에는 해당 요소 자체가 객체를 나타내므로 . 연산자를 사용하여 객체의 멤버에 접근해야 합니다.
    // 2변의 경우인 p나 (p + 1)과 같은 형식은 포인터를 사용하는 것이기 때문에 -> 연산자를 사용하여 객체의 멤버에 접근합니다.


    for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); i++) {
        p[i].show(); // 각 배열 요소의 색상 출력
    }

    return 0;
}
