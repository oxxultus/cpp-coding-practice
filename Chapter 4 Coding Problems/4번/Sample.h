#pragma once

#include <iostream> // 표준 입출력 헤더 파일을 포함합니다.
#include <algorithm> // 알고리즘 헤더 파일을 포함합니다. (max_element 함수를 사용하기 위해)

using namespace std; // 표준 네임스페이스를 사용합니다.

class Sample {
    int *p; // 동적으로 할당된 배열을 가리키는 포인터입니다.
    int size; // 배열의 크기를 저장하는 변수입니다.

public:
    Sample(int n); // 생성자 선언입니다. 배열의 크기를 받아와서 동적 할당을 수행합니다.
    ~Sample(); // 소멸자 선언입니다. 동적으로 할당된 메모리를 해제합니다.

    void read(); // 배열에 값을 입력받는 함수의 선언입니다.
    void write(); // 배열에 저장된 값을 출력하는 함수의 선언입니다.
    int big(); // 배열에서 가장 큰 값을 찾아 반환하는 함수의 선언입니다.
};
