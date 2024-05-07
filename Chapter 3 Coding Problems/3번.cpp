#include <string> // string 헤더 파일 포함

using namespace std;

// 계좌 정보를 담는 클래스 정의
class Account {
    std::string name; // 계좌 소유주의 이름
    int id; // 계좌 고유 식별번호
    int balance; // 계좌 잔액

public:
    // 생성자: 계좌 소유주의 이름, 고유 식별번호, 초기 잔액을 받아 초기화
    Account(string name, int id, int balance);
    
    // 출금 메서드: 지정된 금액을 계좌에서 출금하고 출금한 금액을 반환
    int withdraw(int money);
    
    // 저금 메서드: 지정된 금액을 계좌에 입금
    void deposit(int money);
    
    // 계좌 소유주의 이름을 반환하는 메서드
    std::string getOwner();
    
    // 계좌의 잔액을 조회하는 메서드
    int inquiry();
};

// 생성자 구현
Account::Account(string name, int id, int balance) {
    
    // this->이건 클래스의 맴버함수와 매개변수 이름이 같이서 구별하기 위해 사용함
    // this->name이면 이부분은 멤버함수를 가리키고 = name; 부분은 매개변수의 변수를 가리킴
    this->name = name; // 소유주 이름 초기화
    this->id = id; // 계좌 고유 식별번호 초기화
    this->balance = balance; // 초기 잔액 설정
}

// 출금 메서드 구현
int Account::withdraw(int money) {
    balance -= money; // 잔액에서 출금 금액을 차감
    return money; // 출금한 금액 반환
}

// 저금 메서드 구현
void Account::deposit(int money) {
    balance += money; // 잔액에 입금 금액을 추가
}

// 계좌 소유주의 이름을 반환하는 메서드 구현
std::string Account::getOwner() {
    return name; // 소유주 이름 반환
}

// 계좌의 잔액을 조회하는 메서드 구현
int Account::inquiry() {
    return balance; // 잔액 반환
}
