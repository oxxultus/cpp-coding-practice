#include <iostream>
using namespace std;

// 커피 머신 클래스 정의
class CoffeeMachine {
    int coffee; // 커피 재고
    int water;  // 물 재고
    int sugar;  // 설탕 재고

public:
    
    CoffeeMachine() : CoffeeMachine(0, 0, 0) {} // 기본생성자

    // 생성자: 초기 커피, 물, 설탕 재고를 설정
    CoffeeMachine(int coffee, int water, int sugar);

    // 에스프레소를 마시는 메서드: 커피 1잔과 물 1잔을 소비
    void drinkEspresso();

    // 아메리카노를 마시는 메서드: 커피 1잔과 물 2잔을 소비
    void drinkAmericano();

    // 설탕 커피를 마시는 메서드: 커피 1잔, 물 2잔, 설탕 1큐브를 소비
    void drinkSugarCoffee();

    // 커피 머신의 재고를 채우는 메서드: 커피, 물, 설탕 재고를 10으로 설정
    void fill();

    // 현재 커피 머신의 재고 상태를 출력하는 메서드
    void show();
};

// 생성자 구현
CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
    this->coffee = coffee; // 커피 재고 설정
    this->water = water;   // 물 재고 설정
    this->sugar = sugar;   // 설탕 재고 설정
}

// 에스프레소를 마시는 메서드 구현
void CoffeeMachine::drinkEspresso() {
    coffee -= 1; // 커피 재고 감소
    water -= 1;  // 물 재고 감소
}

// 아메리카노를 마시는 메서드 구현
void CoffeeMachine::drinkAmericano() {
    coffee -= 1; // 커피 재고 감소
    water -= 2;  // 물 재고 감소
}

// 설탕 커피를 마시는 메서드 구현
void CoffeeMachine::drinkSugarCoffee() {
    coffee -= 1; // 커피 재고 감소
    water -= 2;  // 물 재고 감소
    sugar -= 1;  // 설탕 재고 감소
}

// 커피 머신의 재고를 채우는 메서드 구현
void CoffeeMachine::fill() {
    coffee = 10; // 커피 재고를 10으로 설정
    water = 10;  // 물 재고를 10으로 설정
    sugar = 10;  // 설탕 재고를 10으로 설정
}

// 현재 커피 머신의 재고 상태를 출력하는 메서드 구현
void CoffeeMachine::show() {
    // 현재 커피, 물, 설탕 재고를 출력
    cout << "커피 머신 상태, 커피: " << coffee << " \t물: " << water << "\t설탕: " << sugar << endl;
}

int main() {
    // 커피 머신 객체 생성 및 초기 재고 설정
    CoffeeMachine java(5, 5, 5);
    
    // 현재 상태 출력
    java.show();

    // 에스프레소 마시기
    java.drinkEspresso();
    // 아메리카노 마시기
    java.drinkAmericano();
    // 설탕 커피 마시기
    java.drinkSugarCoffee();

    // 현재 상태 출력
    java.show();

    // 재고 채우기
    java.fill();

    // 채운 후 상태 출력
    java.show();

    return 0;
}