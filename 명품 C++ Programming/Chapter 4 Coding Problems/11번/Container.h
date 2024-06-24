#pragma once
#include <iostream>

//아래코드는 인라인 함수로 작성되었음
//cpp로 파일을 분해해도 무관

using namespace std;

class Container {
    int size; // 컨테이너의 크기를 나타내는 멤버 변수

public:
    // 기본 생성자: 크기를 10으로 초기화합니다.
    Container() {
        size = 10;
    }

    // 크기를 설정하는 함수
    void setSize(int n) {
        size = n;
    }

    // 현재 크기를 반환하는 함수
    int getSize() {
        return size;
    }

    // 컨테이너를 주어진 크기로 채우는 함수
    void fill(int n) {
        size = n;
    }

    // 주어진 양만큼 컨테이너에서 소비하는 함수
    // 소비에 성공하면 true를 반환하고, 크기가 부족하면 false를 반환합니다.
    bool consume(int n) {
        if (size < n) { // 컨테이너의 크기가 주어진 양보다 작을 때
            return false; // 소비에 실패한 것으로 간주하고 false 반환
        }
        else {
            size -= n; // 컨테이너에서 주어진 양만큼 소비
            return true; // 소비에 성공했으므로 true 반환
        }
    }
};
