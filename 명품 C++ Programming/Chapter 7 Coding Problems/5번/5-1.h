#pragma once

#include <iostream>
#include <string>

using namespace std;

class Color{
    int red, green, blue; // 빨간색, 초록색, 파란색 값을 저장하는 변수

public:
    // 생성자. 매개변수로 빨간색, 초록색, 파란색 값을 받아 초기화한다.
    Color(int red = 0, int green = 0, int blue = 0) : red(red), green(green), blue(blue) {}
    
    // 색상을 설정하는 함수
    void setColor(int red, int green, int blue) {
        this->red = red;
        this->green = green;
        this->blue = blue;
    }

    // 색상을 출력하는 함수
    void show() const {
        std::cout << red << ' ' << green << ' ' << blue << std::endl;
    }

    // 두 색상을 더하는 연산자 오버로딩 함수
    Color operator+(const Color &c) const {
        return Color(this->red + c.red, this->green + c.green, this->blue + c.blue);
    }

    // 두 색상이 동일한지 여부를 확인하는 연산자 오버로딩 함수
    bool operator==(const Color &c) const {
        return this->red == c.red && this->green == c.green && this->blue == c.blue;
    }
};
