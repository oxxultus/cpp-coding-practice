#include <iostream>

using namespace std;

// Circle 클래스 정의
class Circle {
    int radious; // 원의 반지름을 나타내는 멤버 변수

public:
    // 반지름 설정 메서드
    void setRadius(int radious) {this->radious = radious;}

    // 반지름 반환 메서드
    int getRadius() {return radious;}

    // 원의 면적을 계산하여 반환하는 메서드
    double getArea() {return radious * radious * 3.14;}
};
