#include <iostream>
#include <string>

using namespace std;

class Matrix;
Matrix operator+(const Matrix& m1,const Matrix& m2);
Matrix& operator+=(const Matrix& m1,const Matrix& m2);
bool operator==(const Matrix& m1,const Matrix& m2);
void operator>>(Matrix &m,int *x);
void operator<<(Matrix &m,const int *y);


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

    friend void operator>>(Matrix &m,int *x){
        x[0] = m.number[0][0];
        x[1] = m.number[0][1];
        x[2] = m.number[1][0];
        x[3] = m.number[1][1];
    }

    friend void operator<<(Matrix &m,const int *y){
        m.number[0][0] = y[0];
        m.number[0][1] = y[1];
        m.number[1][0] = y[2];
        m.number[1][1] = y[3];
    }
};