#include "Circle.h"
#include <iostream>

using namespace std;

int main() {
    int CircleList = 0; // 생성할 원의 개수를 저장하는 변수
    int countCircle = 0; // 면적이 100보다 큰 원의 개수를 저장하는 변수
    int radius = 0; // 사용자로부터 입력 받은 반지름을 저장하는 변수

    // 사용자로부터 생성할 원의 개수를 입력 받습니다.
    cout << "원의 개수 >> ";
    cin >> CircleList;

    // Circle 객체의 배열을 동적으로 할당합니다.
    Circle* p = new Circle[CircleList];

    // 각 원의 반지름을 입력 받고, 면적이 100보다 큰지 확인합니다.
    for (int i = 0; i < CircleList; i++) {
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> radius;

        p[i].setRadius(radius); // 원의 반지름을 설정합니다.

        // 면적이 100보다 큰지 확인하고, 크다면 countCircle을 증가시킵니다.
        if (p[i].getArea() > 100) {countCircle++;}
    }

    // 면적이 100보다 큰 원의 개수를 출력합니다.
    cout << "면적이 100보다 큰 원은 " << countCircle << "개 입니다." << endl;

    // 동적으로 할당한 메모리를 해제합니다.
    delete[] p;

    return 0;
}
