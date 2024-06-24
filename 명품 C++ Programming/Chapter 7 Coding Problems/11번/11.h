#include <iostream>

using namespace std;

class Stack {
	int s[10]; // 정수 배열
	int top;   // 스택의 top을 나타내는 변수

public:
	// 생성자: top을 -1로 초기화
	Stack() : top(-1) {}

	// 스택이 비어있는지 검사하는 ! 연산자 오버로딩
	bool operator !() {
		if (top == -1) // top이 -1이면 스택이 비어있음을 의미
			return true;
		else
			return false;
	}

	// 스택에 요소를 추가하는 << 연산자 오버로딩
	Stack& operator<<(int x) {
		s[++top] = x; // top을 증가시키고 요소를 추가
		return *this;
	}

	// 스택에서 요소를 제거하여 반환하는 >> 연산자 오버로딩
	Stack& operator>>(int &x) {
		x = s[top--]; // top에 해당하는 요소를 반환하고 top을 감소시킴
		return *this;
	}
};