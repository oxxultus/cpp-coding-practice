#include <cstdlib> // rand 함수 사용을 위한 헤더 파일
#include <ctime> // 시드 설정을 위한 헤더 파일

//5번의 클래스를 이용해서 작성

class EvenRandom {
    int start; // 범위의 시작 값
    int end; // 범위의 끝 값

public:
    // 기본 생성자: 시작과 끝을 기본값으로 설정
    EvenRandom();
    
    // 랜덤한 짝수 값을 반환하는 메서드
    int next();
    
    // 주어진 범위 내에서 랜덤한 짝수 값을 반환하는 메서드
    int nextInRange(int start, int end);
};

// 기본 생성자 구현
EvenRandom::EvenRandom() {
    srand((unsigned int)time(NULL)); // 현재 시간을 시드로 사용하여 난수 생성기 초기화
    start = 0; // 기본 시작값을 0으로 설정
    end = RAND_MAX; // 기본 끝값을 RAND_MAX로 설정
}

// 랜덤한 짝수 값을 반환하는 메서드 구현
int EvenRandom::next() {
    while (true) {
        int even = rand() % (RAND_MAX + 1); // 0부터 RAND_MAX 사이의 난수를 생성
        if (even % 2 == 0) { // 생성된 난수가 짝수인지 확인
            return even; // 짝수일 경우 반환
        }
    }
}
