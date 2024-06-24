#include "CoffeeVendingMachine.h"

// 컨테이너를 채우는 함수입니다.
void CoffeeVendingMachine::fill() {
    for (int i = 0; i < 3; i++) {
        tong[i].fill(10); // 각 컨테이너를 초기화된 크기로 채웁니다.
    }
    show(); // 현재 상태를 보여줍니다.
}

// 에스프레소를 선택하는 함수입니다.
void CoffeeVendingMachine::selectEspresso() {
    if (tong[0].getSize() > 0 && tong[1].getSize() > 0) { // 커피와 물이 충분한지 확인합니다.
        tong[0].consume(1); // 커피를 소비합니다.
        tong[1].consume(1); // 물을 소비합니다.
        cout << "에스프레소 드세요" << endl; // 에스프레소를 제공합니다.
        show(); // 현재 상태를 보여줍니다.
    }
    else {
        cout << "재료가 부족합니다." << endl; // 재료가 부족하면 메시지를 출력합니다.
    }
}

// 아메리카노를 선택하는 함수입니다.
void CoffeeVendingMachine::selectAmericano() {
    if (tong[0].getSize() > 0 && tong[1].getSize() > 1) { // 커피와 물이 충분한지 확인합니다.
        tong[0].consume(1); // 커피를 소비합니다.
        tong[1].consume(2); // 물을 소비합니다.
        cout << "아메리카노 드세요" << endl; // 아메리카노를 제공합니다.
        show(); // 현재 상태를 보여줍니다.
    }
    else {
        cout << "재료가 부족합니다." << endl; // 재료가 부족하면 메시지를 출력합니다.
    }
}

// 설탕커피를 선택하는 함수입니다.
void CoffeeVendingMachine::selectSugarCoffee() {
    if (tong[0].getSize() > 0 && tong[1].getSize() > 1 && tong[2].getSize() > 0) { // 커피, 물, 설탕이 충분한지 확인합니다.
        tong[0].consume(1); // 커피를 소비합니다.
        tong[1].consume(2); // 물을 소비합니다.
        tong[2].consume(1); // 설탕을 소비합니다.
        cout << "설탕커피 드세요" << endl; // 설탕커피를 제공합니다.
        show(); // 현재 상태를 보여줍니다.
    }
    else {
        cout << "재료가 부족합니다." << endl; // 재료가 부족하면 메시지를 출력합니다.
    }
}

// 현재 상태를 보여주는 함수입니다.
void CoffeeVendingMachine::show() {
    cout << "커피 : " << tong[0].getSize() << endl; // 커피의 양을 출력합니다.
    cout << "물 : " << tong[1].getSize() << endl; // 물의 양을 출력합니다.
    cout << "설탕 : " << tong[2].getSize() << endl; // 설탕의 양을 출력합니다.
}

// 입력 오류를 확인하는 함수입니다.
bool CoffeeVendingMachine::checkInputError() {
    if (cin.fail()) { // cin에 오류가 발생했는지 확인합니다.
        cin.clear(); // cin의 상태를 초기화합니다.
        cin.ignore(100, '\n'); // 버퍼를 비웁니다.
        cout << "입력 오류" << endl; // 오류 메시지를 출력합니다.
        return true; // 오류가 발생했으므로 true를 반환합니다.
    }
    else {
        return false; // 오류가 발생하지 않았으므로 false를 반환합니다.
    }
}

// 커피 자판기를 실행하는 함수입니다.
void CoffeeVendingMachine::run() {
    cout << "커피자판기를 작동합니다 " << endl; // 커피 자판기가 시작됨을 알리는 메시지를 출력합니다.

    while (1) { // 무한 루프를 실행합니다.
        cout << "메뉴를 눌러주세요" << endl; // 메뉴를 선택할 것을 요청하는 메시지를 출력합니다.
        cout << "1.에스프레소" << endl; // 에스프레소 메뉴를 출력합니다.
        cout << "2.아메리카노" << endl; // 아메리카노 메뉴를 출력합니다.
        cout << "3.설탕커피" << endl; // 설탕커피 메뉴를 출력합니다.
        cout << "4.잔량보기" << endl; // 커피 자판기의 현재 상태를 확인할 수 있는 메뉴를 출력합니다.
        cout << "5.채우기" << endl; // 커피 자판기의 컨테이너를 채울 수 있는 메뉴를 출력합니다.

        int menu;
        cin >> menu; // 사용자로부터 메뉴를 입력받습니다.
        if (checkInputError()) { // 입력 오류가 있는지 확인합니다.
            continue; // 입력 오류가 있으면 다시 반복문의 처음으로 돌아갑니다.
        }
        switch (menu) { // 입력받은 메뉴에 따라 분기합니다.
        case 1: selectEspresso(); break; // 1번 메뉴일 때 에스프레소를 선택합니다.
        case 2: selectAmericano(); break; // 2번 메뉴일 때 아메리카노를 선택합니다.
        case 3: selectSugarCoffee(); break; // 3번 메뉴일 때 설탕커피를 선택합니다.
        case 4: show(); break; // 4번 메뉴일 때 커피 자판기의 현재 상태를 보여줍니다.
        case 5: fill(); break; // 5번 메뉴일 때 컨테이너를 채웁니다.
        default:
            cout << "잘못된 입력입니다." << endl; // 잘못된 입력일 경우 메시지를 출력합니다.
        }
    }
}
