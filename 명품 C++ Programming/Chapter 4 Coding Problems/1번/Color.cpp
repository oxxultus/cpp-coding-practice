#include "Color.h"

Color::Color() {
    red = green = blue = 0;
}

Color::Color(int red, int green, int blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Color::~Color() {
    // 소멸자 구현
}

void Color::setColor(int red, int green, int blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void Color::show() {
    cout << red << " " << green << " " << blue << endl;
}
