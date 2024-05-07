#include "CircleManager.h"

// CircleManager 클래스의 생성자입니다.
CircleManager::CircleManager(int size){
    p = new Circle[size]; // Circle 객체 배열을 동적으로 할당합니다.
    this-> size = size; // 배열의 크기를 설정합니다.
}

// CircleManager 클래스의 소멸자입니다.
CircleManager::~CircleManager(){
    delete[] p; // 동적으로 할당된 Circle 객체 배열을 해제합니다.
}

// 원의 이름으로 검색하는 함수입니다.
void CircleManager::searchByName(){
    string name;
    cout << "검색하고자 하는 원의 이름>> ";
    getline(cin, name); // 사용자로부터 원의 이름을 입력받습니다.
    cin.ignore(100, '\n'); // 입력 버퍼를 비웁니다.

    // 모든 Circle 객체를 순회하면서 원하는 이름을 가진 원을 찾습니다.
    for (int i = 0; i < size; i++){
        if(name.compare(p[i].getName()) == 0){ // 원의 이름이 일치하는 경우
            cout << p[i].getName() << "의 면적은 :" << p[i].getArea() << endl; // 해당 원의 면적을 출력합니다.
            return;
        }
    }
    // 원하는 이름을 가진 원을 찾지 못한 경우
    cout << "해당 이름을 가진 원이 존재하지 않습니다."<< endl;
    return;
}

// 면적으로 검색하는 함수입니다.
void CircleManager::searchByArea(){
    int Area = 0;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> Area; // 사용자로부터 최소 면적을 입력받습니다.

    cout << Area << "보다 큰 원을 검색합니다.\n";
    // 모든 Circle 객체를 순회하면서 최소 면적보다 큰 원을 찾습니다.
    for (int i = 0; i < size; i++){
        if(p[i].getArea() >= Area){ // 원의 면적이 최소 면적보다 큰 경우
            cout << ">> "<< p[i].getName()<< "면적은" << p[i].getArea() << endl; // 해당 원의 정보를 출력합니다.
        }
    }
}

// Circle 객체들을 설정하는 함수입니다.
void CircleManager::setCircles(){
    int radius = 0; // 사용자로부터 입력 받은 반지름을 저장하는 변수
    string name;    // 사용자로부터 입력 받은 이름을 저장하는 변수

    // 모든 Circle 객체를 설정합니다.
    for (int i = 0; i < size; i++){
        cout << "원" << (i+1) << "의 이름과 반지름 >> ";
        cin >> name >> radius; // 사용자로부터 원의 이름과 반지름을 입력받습니다.
        cin.ignore(100, '\n'); // 입력 버퍼를 비웁니다.
        
        p[i].setCircle(name, radius); // Circle 객체의 이름과 반지름을 설정합니다.
    }
} 
