#include <iostream>
#include <string>

using namespace std;

// 전위 증가 연산자를 오버로딩하는 함수의 프로토타입
Circle& operator++(Circle &c);

// 후위 증가 연산자를 오버로딩하는 함수의 프로토타입
Circle operator++(Circle &c, int);

class Circle {
    int radius; // 원의 반지름

public:
    // 생성자. 반지름을 매개변수로 받아 초기화한다.
    Circle(int radius = 0) : radius(radius) {}

    // 원의 반지름을 출력하는 함수
    void show() {
        cout << "radius = " << radius << " 인 원" << endl;
    }

    // friend 키워드를 사용하여 외부에서 접근 가능한 후위 증가 연산자 오버로딩 함수 정의
    friend Circle operator++(Circle &c, int) {
        Circle tmp = c;
        c.radius++;
        return tmp;
    }

    // friend 키워드를 사용하여 외부에서 접근 가능한 전위 증가 연산자 오버로딩 함수 정의
    friend Circle& operator++(Circle &c) {
        c.radius++;
        return c;
    }
};