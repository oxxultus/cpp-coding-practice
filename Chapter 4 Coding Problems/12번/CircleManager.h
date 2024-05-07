#pragma once // 이 헤더 파일이 중복 포함되지 않도록 하는 헤더 가드입니다.

#include "Circle.h" // Circle 클래스의 선언이 포함된 헤더 파일을 포함합니다.
#include <string> // 문자열 관련 헤더 파일을 포함합니다.

class CircleManager{
    Circle *p; // Circle 객체 배열을 가리키는 포인터 변수입니다.
    int size; // Circle 객체 배열의 크기를 저장하는 변수입니다.

public:
    // 생성자: CircleManager 객체를 생성할 때 Circle 객체 배열을 동적으로 할당합니다.
    CircleManager(int size);

    // 소멸자: CircleManager 객체가 소멸될 때 동적으로 할당된 메모리를 해제합니다.
    ~CircleManager();

    // Circle 객체들을 설정하는 메서드입니다.
    void setCircles();

    // 원의 이름으로 검색하여 해당하는 원의 면적을 출력하는 메서드입니다.
    void searchByName();

    // 원의 면적이 입력한 값보다 큰 경우를 검색하여 출력하는 메서드입니다.
    void searchByArea();
};

