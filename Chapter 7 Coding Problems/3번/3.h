#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book{
    string title;   // 책의 제목
    int price;      // 책의 가격
    int pages;      // 책의 페이지 수

public:
    // 생성자. 매개변수로 제목, 가격, 페이지 수를 받아 초기화한다.
    Book(string title="", int price=0, int pages=0) : title(title), price(price), pages(pages) {}

    // 책 정보를 출력하는 함수
    void show() const {
        cout << title << " " << price << "원 " << pages << "페이지" << endl;
    }

    // 책의 제목을 반환하는 함수
    string getTitle() const {
        return title;
    }

    // 가격이 0원인지 확인하는 논리 부정 연산자 오버로딩 함수
    bool operator!(){
        return price == 0;
    }
};