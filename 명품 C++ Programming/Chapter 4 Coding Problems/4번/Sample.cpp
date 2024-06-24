#include "Sample.h" // Sample 클래스의 정의가 들어있는 헤더 파일을 포함합니다.

// Sample 클래스의 생성자입니다. 배열의 크기를 n으로 설정하고 동적 할당을 수행합니다.
Sample::Sample(int n) {
    this->size = n; // 배열의 크기를 설정합니다.
    p = new int[n]; // 배열을 동적으로 할당합니다.
}

// Sample 클래스의 소멸자입니다. 동적으로 할당한 메모리를 해제합니다.
Sample::~Sample() {
    cout << "Sample 객체가 소멸합니다." << endl; // 객체가 소멸되는 메시지를 출력합니다.
    delete[] p; // 배열을 동적으로 해제합니다.
}

// 사용자로부터 정수를 입력받아 배열에 저장하는 함수입니다.
void Sample::read() {
    cout << "정수를 " << size << "개 만큼 입력하세요." << endl; // 사용자에게 입력 안내 메시지를 출력합니다.
    for (int i = 0; i < size; i++) {
        cin >> p[i]; // 사용자로부터 정수를 입력받아 배열에 저장합니다.
    }
}

// 배열에 저장된 정수를 출력하는 함수입니다.
void Sample::write() {
    for (int i = 0; i < size; i++) {
        cout << p[i] << " "; // 배열에 저장된 각 정수를 출력합니다.
    }
    cout << endl; // 줄 바꿈을 출력하여 가독성을 높입니다.
}

// 배열에서 가장 큰 값을 찾아 반환하는 함수입니다.
int Sample::big() {
    //========================================================================
    // 방법 1: 배열을 순회하면서 가장 큰 값을 찾습니다.
    int max = p[0]; // 배열의 첫 번째 원소를 최댓값으로 초기화합니다.
    for (int i = 0; i < size; i++) {
        if (p[i] > max) { // 현재 원소가 최댓값보다 크면
            max = p[i]; // 최댓값을 갱신합니다.
        }
    }
    return max; // 최댓값을 반환합니다.
    
    //========================================================================
    // 방법 2: max_element() 함수를 사용하여 배열에서 최댓값을 찾습니다.
    // max_element() 함수는 반환값이 가장 큰 요소를 가리키는 반복자(iterator)이므로
    // 포인터와 유사한 구조이다.
    // * 연산자를 사용하여 실제 최댓값을 반환합니다.
    return *max_element(p, p + size); // 
    //========================================================================
}
