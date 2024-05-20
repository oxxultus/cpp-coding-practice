#pragma once

#include <iostream>
#include <string>

using namespace std;

class Matrix;
Matrix operator+(const Matrix& m1,const Matrix& m2);
Matrix& operator+=(const Matrix& m1,const Matrix& m2);
bool operator==(const Matrix& m1,const Matrix& m2);


class Matrix {
    int number[2][2];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        number[0][0] = a;
        number[0][1] = b;
        number[1][0] = c;
        number[1][1] = d;
    }
    
    friend Matrix operator+(const Matrix& m1,const Matrix& m2){
        return Matrix(m1.number[0][0]+m2.number[0][0],m1.number[0][1]+m2.number[0][1],m1.number[1][0]+m2.number[1][0],m1.number[1][1]+m2.number[1][1]);
    }

    friend Matrix& operator+=(Matrix& m1,const Matrix& m2){
        m1.number[0][0] += m2.number[0][0];
        m1.number[0][1] += m2.number[0][1];
        m1.number[1][0] += m2.number[1][0];
        m1.number[1][1] += m2.number[1][1];
        return m1;
    }
    
    friend bool operator==(const Matrix& m1,const Matrix& m2){
        return m1.number[0][0] == m2.number[0][0] && m1.number[0][1] == m2.number[0][1] && m1.number[1][0] == m2.number[1][0] && m1.number[1][1] == m2.number[1][1];
    }
};