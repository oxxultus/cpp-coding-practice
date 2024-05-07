#include <cstdlib> // rand 함수 사용을 위한 헤더 파일
#include <ctime> // 시드 설정을 위한 헤더 파일

using namespace std;

class SelectableRandom {
    int start; // 범위의 시작 값
    int end; // 범위의 끝 값

public:
    // 기본 생성자: 시작과 끝을 기본값으로 설정
    SelectableRandom();
    
    // 주어진 even_or_odd에 따라 짝수 또는 홀수 값을 반환하는 메서드
    int next(int even_or_odd);
    
    // 주어진 범위 내에서 주어진 even_or_odd에 따라 짝수 또는 홀수 값을 반환하는 메서드
    int nextInRange(int start, int end, int even_or_odd);
};

// 기본 생성자 구현
SelectableRandom::SelectableRandom() {
    srand((unsigned int)time(NULL)); // 현재 시간을 시드로 사용하여 난수 생성기 초기화
    start = 0; // 기본 시작값을 0으로 설정
    end = RAND_MAX; // 기본 끝값을 RAND_MAX로 설정
}

// even_or_odd에 따라 짝수 또는 홀수 값을 반환하는 메서드 구현
int SelectableRandom::next(int even_or_odd) {
    int result;
    while (true) {
        result = rand() % (RAND_MAX + 1); // 0부터 RAND_MAX 사이의 난수를 생성
        if (result % 2 == even_or_odd) { // 생성된 난수가 even_or_odd와 일치하는지 확인
            return result; // 일치하는 경우 반환
        }
    }
}

// 주어진 범위 내에서 even_or_odd에 따라 짝수 또는 홀수 값을 반환하는 메서드 구현
int SelectableRandom::nextInRange(int start, int end, int even_or_odd) {
    int result;
    // 무한 루프를 통해 주어진 범위 내에서 지정된 짝수 또는 홀수를 생성합니다.
    while (true) {
        // 주어진 범위 내의 난수를 생성합니다.
        result = rand() % (end - start + 1) + start;
        // 생성된 난수를 2로나눈 나머지가 even_or_odd와 일치하는지 확인하여 짝수 또는 홀수를 선택합니다.
        if (result % 2 == even_or_odd) {
            // 생성된 난수가 even_or_odd와 일치하면 해당 값을 반환합니다.
            return result;
        }
    }
}


#include <iostream>
#include "SelectableRandom.h"

int main() {
    SelectableRandom random;

    std::cout << "Random Odd Numbers (2 to 9):\n";
    for (int i = 0; i < 7; ++i) {
        int odd = random.nextInRange(2, 9, 1); // 1은 홀수를 의미합니다.
        std::cout << odd << std::endl;
    }

    return 0;
}
