#pragma once

#include <iostream>

using namespace std;

// Circle 클래스 정의
class Circle {
    int radious; // 원의 반지름을 나타내는 멤버 변수
    string name; // 원의 이름을 나타내는 멤버변수

public:

    // 기본 생성자
    Circle(){}

    // 생성자
    Circle(string name,int radious){ this->name = name; this->radious = radious;}

    // 이름과 반지름 설정 메서드
    void setCircle(string name,int radious) {this->name = name; this->radious = radious;}

    // 반지름 반환 메서드
    int getRadius() {return radious;}

    // 이름 반환 메서드
    string getName() {return name;}

    // 원의 면적을 계산하여 반환하는 메서드
    double getArea() {return radious * radious * 3.14;}
};
