#pragma once

#include <iostream>
#include <string>

using namespace std;

class Color;

// 두 개의 Color 객체가 동일한지 확인하는 연산자 오버로딩 함수 선언
bool operator==(const Color &color1, const Color &color2);

// 두 개의 Color 객체를 더하는 연산자 오버로딩 함수 선언
Color operator+(const Color &color1, const Color &color2);

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
    friend Color operator+(const Color &color1, const Color &color2){
        return Color(color1.red + color2.red, color1.green + color2.green, color1.blue + color2.blue);
    }

    // 두 색상이 동일한지 여부를 확인하는 연산자 오버로딩 함수
    friend bool operator==(const Color &color1, const Color &color2) {
        return color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue;
    }
};
