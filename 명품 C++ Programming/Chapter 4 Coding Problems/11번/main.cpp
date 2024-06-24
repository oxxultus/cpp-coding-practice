#include "CoffeeVendingMachine.h" // CoffeeVendingMachine 클래스 헤더 파일을 포함합니다.

int main() {
    CoffeeVendingMachine* name; // CoffeeVendingMachine 객체의 포인터를 선언합니다.

    name = new CoffeeVendingMachine; // 동적으로 CoffeeVendingMachine 객체를 생성합니다.

    name->run(); // CoffeeVendingMachine 객체의 run() 함수를 호출하여 커피 자판기를 실행합니다.

    delete name; // 동적으로 할당한 메모리를 해제합니다.
    
    return 0; // 종료
}
