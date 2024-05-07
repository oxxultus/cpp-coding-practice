#include <string> // string 헤더 파일 포함

using namespace std;

// 정수를 나타내는 클래스 정의
class Integer {
    int num; // 정수 값
    
public:
    // 정수를 매개변수로 받아 초기화하는 생성자
    Integer(int num) {
        this->num = num; // 매개변수로 받은 정수로 멤버 변수 초기화
    }
    
    // 문자열을 정수로 변환하여 초기화하는 생성자
    Integer(string num) {
        this->num = stoi(num); // 문자열을 정수로 변환하여 멤버 변수 초기화
    }
    
    // 정수 값을 설정하는 메서드
    void set(int num) {
        this->num = num; // 멤버 변수 값을 주어진 정수로 설정
    }
    
    // 정수 값을 반환하는 메서드
    int get() {
        return num; // 멤버 변수의 값을 반환
    }
    
    // 짝수인지 판별하는 메서드
    bool isEven() {
        // 현재 정수가 짝수인지 판별하여 참 또는 거짓을 반환
        return num % 2 == 0;
    }
};
