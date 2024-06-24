#pragma once

#include <iostream>
#include <string>

using namespace std;

class Matrix {
    int number[2][2]; // 2x2 행렬을 표현하는 배열

public:
    // 생성자. 매개변수로 네 개의 정수를 받아 각 원소를 초기화한다.
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        number[0][0] = a;
        number[0][1] = b;
        number[1][0] = c;
        number[1][1] = d;
    }

    // 두 Matrix 객체를 더하는 연산자 오버로딩 함수
    Matrix operator+(const Matrix& m) const {
        return Matrix(number[0][0] + m.number[0][0], number[0][1] + m.number[0][1],
                      number[1][0] + m.number[1][0], number[1][1] + m.number[1][1]);
    }

    // 현재 Matrix 객체에 다른 Matrix 객체를 더하는 연산자 오버로딩 함수
    Matrix& operator+=(const Matrix& m) {
        number[0][0] += m.number[0][0];
        number[0][1] += m.number[0][1];
        number[1][0] += m.number[1][0];
        number[1][1] += m.number[1][1];
        return *this;
    }
    
    // 두 Matrix 객체가 동일한지 여부를 확인하는 연산자 오버로딩 함수
    bool operator==(const Matrix& m) const {
        return number[0][0] == m.number[0][0] && number[0][1] == m.number[0][1] &&
               number[1][0] == m.number[1][0] && number[1][1] == m.number[1][1];
    }
};
