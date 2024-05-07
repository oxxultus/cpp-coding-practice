#include <cstdlib>  // rand(), srand() 함수를 사용하기 위한 헤더 파일
#include <ctime>    // time() 함수를 사용하기 위한 헤더 파일

class Random {
    int start;  // 범위의 시작 값
    int end;    // 범위의 끝 값

public:
    // 기본 생성자: 시작과 끝 값을 초기화하고 난수 발생을 위한 시드를 설정합니다.
    Random();

    // 다음 난수를 반환합니다.
    int next();

    // 주어진 범위 내에서 난수를 반환합니다.
    int nextInRange(int start, int end);
};

// 기본 생성자 정의
Random::Random() {
    // 현재 시간을 시드로 사용하여 랜덤 넘버 발생기를 초기화합니다.
    srand((unsigned int)time(NULL));
    // 기본적으로 전체 범위인 0부터 RAND_MAX까지의 값을 사용합니다.
    start = 0;
    end = RAND_MAX;
}

// 다음 난수를 반환하는 메서드 정의
int Random::next() {
    // 0부터 RAND_MAX까지의 난수를 생성하여 반환합니다.
    return rand() % (RAND_MAX + 1);
}

// 주어진 범위 내에서 난수를 반환하는 메서드 정의
int Random::nextInRange(int start, int end) {
    // 주어진 범위 내에서의 난수를 생성하여 반환합니다.
    return rand() % (end - start + 1) + start;
    // 예를 들어, start가 2이고 end가 7이라면, (end - start + 1)은 6이 됩니다. 
    // rand() % 6은 0부터 5까지의 랜덤한 값을 반환하게 됩니다. 
    // 이때 0에 start 값을 더하면 최소값인 2가 됩니다. 따라서 반환되는 값은 2부터 7 사이의 랜덤한 값이 됩니다.
}


