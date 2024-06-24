#pragma once
#include <iostream>

using namespace std;

class Color
{
private:
    int red, green, blue;

public:
    Color();
    Color(int red, int green, int blue);
    ~Color();

    void setColor(int red, int green, int blue);
    void show();
};
