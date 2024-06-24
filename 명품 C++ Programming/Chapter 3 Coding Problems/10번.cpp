#ifndef CALCULATOR_H
#define CALCULATOR_H


//============================================================
// Add 클래스: 두 정수를 더하는 클래스
class Add {
	int x, y;
public:
	void setValue(int x, int y); // x와 y 값을 설정하는 함수
	int calculate(); // 덧셈을 수행하여 결과를 반환하는 함수
};
#include "Add.h" //합 
// Add 클래스의 setValue 함수 구현
void Add::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

// Add 클래스의 calculate 함수 구현
int Add::calculate() {
	return x + y;
}
//============================================================
// Sub 클래스: 두 정수를 빼는 클래스
class Sub {
	int x, y;
public:
	void setValue(int x, int y); // x와 y 값을 설정하는 함수
	int calculate(); // 뺄셈을 수행하여 결과를 반환하는 함수
};
#include "Sub.h" //차 
// Sub 클래스의 setValue 함수 구현
void Sub::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

// Sub 클래스의 calculate 함수 구현
int Sub::calculate() {
	return x - y;
}
//============================================================
// Mul 클래스: 두 정수를 곱하는 클래스
class Mul {
	int x, y;
public:
	void setValue(int x, int y); // x와 y 값을 설정하는 함수
	int calculate(); // 곱셈을 수행하여 결과를 반환하는 함수
};
#include "Mul.h" //곱 
// Mul 클래스의 setValue 함수 구현
void Mul::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

// Mul 클래스의 calculate 함수 구현
int Mul::calculate() {
	return x * y;
}
//============================================================
// Div 클래스: 두 정수를 나누는 클래스
class Div {
	int x, y;
public:
	void setValue(int x, int y); // x와 y 값을 설정하는 함수
	int calculate(); // 나눗셈을 수행하여 결과를 반환하는 함수
};
#include "Div.h" //분수
// Div 클래스의 setValue 함수 구현
void Div::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

// Div 클래스의 calculate 함수 구현
int Div::calculate() {
	return x / y;
}
//============================================================

#endif


#include <iostream>
#include <string>
#include "calculator.h" // 계산기 클래스 헤더 파일 포함

using namespace std;

// main 함수: 계산기 프로그램 실행
int main() {
	Add a; // 덧셈을 수행하는 Add 클래스 객체 생성
	Sub s; // 뺄셈을 수행하는 Sub 클래스 객체 생성
	Mul m; // 곱셈을 수행하는 Mul 클래스 객체 생성
	Div d; // 나눗셈을 수행하는 Div 클래스 객체 생성

	while (true) { // 무한 루프
		cout << "두 정수와 연산자를 입력하세요>>"; // 사용자에게 입력 안내 메시지 출력
		int x, y; // 입력받을 정수 변수 선언
		char op; // 입력받을 연산자 변수 선언
		cin >> x >> y >> op; // 정수와 연산자 입력받기

		switch (op) { // 입력받은 연산자에 따라 분기
		case '+': // 덧셈 연산자인 경우
			a.setValue(x, y); // Add 클래스 객체의 값 설정
			cout << a.calculate() << endl; // 덧셈 연산 결과 출력
			break;
		case '-': // 뺄셈 연산자인 경우
			s.setValue(x, y); // Sub 클래스 객체의 값 설정
			cout << s.calculate() << endl; // 뺄셈 연산 결과 출력
			break;
		case '*': // 곱셈 연산자인 경우
			m.setValue(x, y); // Mul 클래스 객체의 값 설정
			cout << m.calculate() << endl; // 곱셈 연산 결과 출력
			break;
		case '/': // 나눗셈 연산자인 경우
			d.setValue(x, y); // Div 클래스 객체의 값 설정
			cout << d.calculate() << endl; // 나눗셈 연산 결과 출력
			break;
		default: // 잘못된 연산자인 경우
			break; // 아무 작업도 수행하지 않고 종료
		}
	}
	return 0; // 프로그램 종료
}
