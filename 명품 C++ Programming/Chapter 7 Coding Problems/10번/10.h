#include <iostream>

using namespace std;

class Statistics {
    int *number; // 정수 배열 포인터
    int size;    // 배열 크기

public:
    // 생성자
    Statistics() : size(0), number(nullptr) {}

    // 소멸자
    ~Statistics() {
        delete[] number; // 동적으로 할당한 메모리 해제
    }

    // 배열 요소 출력 함수
    void show() {
        for (int i = 0; i < size; i++) {
            std::cout << number[i] << ' ';
        }
        std::cout << std::endl;
    }

    // 배열에 요소 추가하는 << 연산자 오버로딩
    Statistics& operator<<(int x) {
        int *temp = new int[size + 1]; // 새로운 배열 동적 할당
        for (int i = 0; i < size; i++) {
            temp[i] = number[i]; // 기존 데이터 복사
        }
        temp[size++] = x; // 새로운 데이터 추가
        delete[] number; // 이전 배열 삭제
        number = temp;   // 새로운 배열을 멤버 변수에 할당
        return *this;
    }

    // 배열 요소 출력하는 ~ 연산자 오버로딩
    Statistics& operator~() {
        for (int i = 0; i < size; i++)
            cout << number[i] << ' ';
        cout << endl;
        return *this;
    }

    // 배열의 평균값을 계산하여 반환하는 >> 연산자 오버로딩
    Statistics& operator>>(int &avg) {
        int sum = 0; // 배열 요소의 합 초기화
        for (int i = 0; i < size; i++)
            sum += number[i]; // 모든 요소를 더함
        avg = sum / size; // 평균값 계산
        return *this;
    }
};
