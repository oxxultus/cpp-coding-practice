#include <iostream>

using namespace std;

int main(void) {
    int *p = new int[5]; // int 형 배열 동적 할당
    int sum = 0; // 배열 요소들의 합을 저장할 변수

    // 배열 요소 입력 받기
    cout << "정수 5개 입력:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> p[i]; // 배열 요소에 입력 받음
        sum += p[i]; // 입력된 숫자들의 총합 계산
    }

    // 평균 계산하여 출력하기
    cout << "평균: " << (sum /= 5) << endl;

    delete[] p; // 동적으로 할당한 배열 해제
    return 0;
}
