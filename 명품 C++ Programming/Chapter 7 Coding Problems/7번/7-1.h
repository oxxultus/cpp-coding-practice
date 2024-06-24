#pragma once

#include <iostream>
#include <string>

using namespace std;

class Matrix {
    int number[2][2];

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        number[0][0] = a;
        number[0][1] = b;
        number[1][0] = c;
        number[1][1] = d;
    }
    void show(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            cout << number[i][j];
        }
    }
    cout << endl;
    }
    Matrix operator+(const Matrix& m) const {
        return Matrix(number[0][0]+m.number[0][0],number[0][1]+m.number[0][1],number[1][0]+m.number[1][0],number[1][1]+m.number[1][1]);
    }

    Matrix& operator+=(const Matrix& m){
        number[0][0] += m.number[0][0];
        number[0][1] += m.number[0][1];
        number[1][0] += m.number[1][0];
        number[1][1] += m.number[1][1];
        return *this;
    }
    
    bool operator==(const Matrix& m)const{
        return number[0][0] == m.number[0][0] && number[0][1] == m.number[0][1] &&number[1][0] == m.number[1][0] &&number[1][1] == m.number[1][1];
    }

    void operator>>(int *x) const {
        x[0] = number[0][0];
        x[1] = number[0][1];
        x[2] = number[1][0];
        x[3] = number[1][1];
    }

    Matrix& operator<<(const int *y){
        number[0][0] = y[0];
        number[0][1] = y[1];
        number[1][0] = y[2];
        number[1][1] = y[3];
        return *this;
    }
};