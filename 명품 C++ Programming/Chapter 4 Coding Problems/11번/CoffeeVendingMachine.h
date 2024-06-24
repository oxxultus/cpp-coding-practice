#pragma once

#include "Container.h" // Container 클래스를 포함합니다.

class CoffeeVendingMachine {

    Container tong[3]; // 3개의 Container 객체를 포함하는 배열입니다. 각각 커피, 물, 설탕을 저장합니다.
    void fill(); // 컨테이너를 채우는 함수입니다.

    // 각각의 커피 종류를 선택하는 함수들입니다.
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();

    // 현재 상태를 보여주는 함수입니다.
    void show();

    // 입력 오류를 확인하는 함수입니다.
    bool checkInputError();

public:
    // 커피 자판기를 실행하는 함수입니다.
    void run();
};
