#include <iostream>
using namespace std;

// Oval 클래스 선언
class Oval {
    int width;  // 타원의 너비 멤버 변수
    int height; // 타원의 높이 멤버 변수
    
public:
    // 기본 생성자
    Oval();
    
    // 너비와 높이를 매개변수로 받는 생성자
    Oval(int width, int height);
    
    // 소멸자
    ~Oval();
    
    // 너비를 반환하는 함수
    int getWidth();
    
    // 높이를 반환하는 함수
    int getHeight();
    
    // 너비와 높이를 설정하는 함수
    void set(int w, int h);
    
    // 현재 타원의 너비와 높이를 출력하는 함수
    void show();
};

#include "Oval.h"

// 기본 생성자 구현
Oval::Oval() : width(1), height(1) {}

// 너비와 높이를 매개변수로 받는 생성자 구현
Oval::Oval(int width, int height) : width(width), height(height) {}

// 소멸자 구현
Oval::~Oval() {
    cout << "Oval 객체 소멸: width = " << width << ", height = " << height << endl;
}

// 너비를 반환하는 함수 구현
int Oval::getWidth() {
    return width;
}

// 높이를 반환하는 함수 구현
int Oval::getHeight() {
    return height;
}

// 너비와 높이를 설정하는 함수 구현
void Oval::set(int w, int h) {
    width = w;
    height = h;
}

// 현재 타원의 너비와 높이를 출력하는 함수 구현
void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}