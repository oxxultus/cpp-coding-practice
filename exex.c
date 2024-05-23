문제
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

// Product 클래스 정의
class Product {
    int type;             // 제품 종류
    int productID;        // 제품 ID
    int price;            // 제품 가격
    string description;   // 제품 설명
    string maker;         // 제조사

public:
    // 생성자
    Product(int type, int productID, string description, string maker, int price);

    // 메소드들
    void showProduct();       // 제품 정보 출력
    int getProductID();       // 제품 ID 반환
    string getDescription();  // 제품 설명 반환
    string getMaker();        // 제조사 반환
    int getPrice();           // 가격 반환
    int getType();            // 제품 종류 반환
};

#endif

#include "Product.h"
#include <iostream>

// 생성자 정의
Product::Product(int type, int productID, string description, string maker, int price) {
    this->type = type;
    this->productID = productID;
    this->description = description;
    this->maker = maker;
    this->price = price;
}

// 제품 정보 출력 메소드
void Product::showProduct() {
    cout << "ID: " << productID << endl;
    cout << "상품설명: " << description << endl;
    cout << "생산자: " << maker << endl;
    cout << "가격: " << price << endl;
}

// 제품 ID 반환 메소드
int Product::getProductID() {
    return productID;
}

// 제품 설명 반환 메소드
string Product::getDescription() {
    return description;
}

// 제조사 반환 메소드
string Product::getMaker() {
    return maker;
}

// 가격 반환 메소드
int Product::getPrice() {
    return price;
}

// 제품 종류 반환 메소드
int Product::getType() {
    return type;
}

#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

// Book 클래스 정의 (Product 클래스 상속)
class Book : public Product {
    int ISBN;         // ISBN 번호
    string title;     // 책 제목
    string author;    // 저자

public:
    // 생성자
    Book(int type, int productID, string description, string maker, int price, int ISBN, string title, string author);

    // 메소드들
    void showBook();         // 책 정보 출력
    void setTitle(string title);  // 책 제목 설정
    string getAuthor();          // 저자 반환
    int getISBN();               // ISBN 번호 반환
};

#endif

#include "Book.h"
#include <iostream>

// 생성자 정의
Book::Book(int type, int productID, string description, string maker, int price, int ISBN, string title, string author)
    : Product(type, productID, description, maker, price) {
    this->ISBN = ISBN;
    this->title = title;
    this->author = author;
}

// 책 정보 출력 메소드
void Book::showBook() {
    showProduct();
    cout << "ISBN: " << ISBN << endl;
    cout << "제목: " << title << endl;
    cout << "저자: " << author << endl;
}

// 책 제목 설정 메소드
void Book::setTitle(string title) {
    this->title = title;
}

// 저자 반환 메소드
string Book::getAuthor() {
    return author;
}

// ISBN 번호 반환 메소드
int Book::getISBN() {
    return ISBN;
}

#ifndef CONVERSATIONBOOK_H
#define CONVERSATIONBOOK_H

#include "Book.h"

// ConversationBook 클래스 정의 (Book 클래스 상속)
class ConversationBook : public Book {
    string language;   // 언어

public:
    // 생성자
    ConversationBook(int type, int productID, string description, string maker, int price, int ISBN, string title, string author, string language);

    // 메소드들
    void showConversationBook();   // 회화책 정보 출력
    string getLanguage();          // 언어 반환
};

#endif

#include "ConversationBook.h"
#include <iostream>

// 생성자 정의
ConversationBook::ConversationBook(int type, int productID, string description, string maker, int price, int ISBN, string title, string author, string language)
    : Book(type, productID, description, maker, price, ISBN, title, author) {
    this->language = language;
}

// 회화책 정보 출력 메소드
void ConversationBook::showConversationBook() {
    showBook();
    cout << "언어: " << language << endl;
}

// 언어 반환 메소드
string ConversationBook::getLanguage() {
    return language;
}

#ifndef COMPACTDISC_H
#define COMPACTDISC_H

#include "Product.h"

// CompactDisc 클래스 정의 (Product 클래스 상속)
class CompactDisc : public Product {
    string albumTitle;   // 앨범 제목
    string artist;       // 아티스트

public:
    // 생성자
    CompactDisc(int type, int productID, string description, string maker, int price, string albumTitle, string artist);

    // 메소드들
    void showCompactDisc();    // CD 정보 출력
    string getAlbumTitle();    // 앨범 제목 반환
    string getArtist();        // 아티스트 반환
};

#endif

#include "CompactDisc.h"
#include <iostream>

// 생성자 정의
CompactDisc::CompactDisc(int type, int productID, string description, string maker, int price, string albumTitle, string artist)
    : Product(type, productID, description, maker, price) {
    this->albumTitle = albumTitle;
    this->artist = artist;
}

// CD 정보 출력 메소드
void CompactDisc::showCompactDisc() {
    showProduct();
    cout << "앨범제목: " << albumTitle << endl;
    cout << "아티스트: " << artist << endl;
}

// 앨범 제목 반환 메소드
string CompactDisc::getAlbumTitle() {
    return albumTitle;
}

// 아티스트 반환 메소드
string CompactDisc::getArtist() {
    return artist;
}

#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"

// ProductManager 클래스 정의
class ProductManager {
    int nextID;              // 다음 제품 ID
    int numberOfProducts;    // 제품 수
    Product* products[100];  // 제품 배열

public:
    // 생성자
    ProductManager();

    // 소멸자
    ~ProductManager();

    // 메소드들
    void operate();            // 운영 메소드 (구체적 구현 필요)
    void addProduct(int type); // 제품 추가 메소드 (구체적 구현 필요)
};

#endif

#include "ProductManager.h"
#include "CompactDisc.h"
#include "ConversationBook.h"
#include "Book.h"
#include "Product.h"
#include <iostream>

using namespace std;

// 생성자: 멤버 변수 초기화 및 제품 배열 초기화
ProductManager::ProductManager() {
    nextID = 0;  // 다음 제품 ID를 0으로 초기화
    numberOfProducts = 0;  // 제품 수를 0으로 초기화
    for (int i = 0; i < 100; i++) {
        products[i] = nullptr;  // 배열을 nullptr로 초기화
    }
}

// 소멸자: 동적으로 할당된 메모리 해제
ProductManager::~ProductManager() {
    for (int i = 0; i < numberOfProducts; i++) {
        delete products[i];  // 각 제품에 할당된 메모리 해제
    }
}

// 운영 메소드: 프로그램의 주요 기능을 실행
void ProductManager::operate() {
    cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
    int choice = 0;

    while (choice != 3) {  // 사용자가 종료(3)를 선택할 때까지 반복
        int type;
        cout << endl << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
        cin >> choice;  // 사용자로부터 선택 입력 받기
        cin.ignore();

        switch (choice) {
            case 1:  // 제품 추가
                if (numberOfProducts >= 100) {
                    cout << "더 이상 추가할 수 없다." << endl;
                    break;
                }
                cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
                cin >> type;
                cin.ignore();

                if (type < 1 || type > 3) {
                    cout << "잘못된 상품 종류입니다." << endl;
                    break;
                }

                addProduct(type);  // 사용자가 입력한 종류의 제품 추가
                numberOfProducts++;
                break;

            case 2:  // 모든 제품 조회
                for (int i = 0; i < numberOfProducts; i++) {
                    switch (products[i]->getType()) {
                        case 1:
                            static_cast<Book*>(products[i])->showBook();  // 책 정보 출력
                            break;
                        case 2:
                            static_cast<CompactDisc*>(products[i])->showCompactDisc();  // CD 정보 출력
                            break;
                        case 3:
                            static_cast<ConversationBook*>(products[i])->showConversationBook();  // 회화책 정보 출력
                            break;
                    }
                }
                break;

            case 3:  // 프로그램 종료
                break;

            default:
                cout << "잘못 입력하셨습니다." << endl;
                break;
        }
    }
}

// 제품 추가 메소드: 사용자가 입력한 정보를 바탕으로 새로운 제품 추가
void ProductManager::addProduct(int type) {
    string desc, maker, title, author, albumTitle, artist, language;
    int price, ISBN;

    cout << "상품설명>>";
    getline(cin, desc);
    cout << "생산자>>";
    getline(cin, maker);
    cout << "가격>>";
    cin >> price;
    cin.ignore();

    switch (type) {
        case 1:
            cout << "책 제목>>";
            getline(cin, title);
            cout << "저자>>";
            getline(cin, author);
            cout << "ISBN>>";
            cin >> ISBN;
            cin.ignore();
            products[nextID] = new Book(type, nextID, desc, maker, price, ISBN, title, author);  // 새로운 책 객체 생성
            break;

        case 2:
            cout << "앨범 제목>>";
            getline(cin, albumTitle);
            cout << "가수>>";
            getline(cin, artist);
            products[nextID] = new CompactDisc(type, nextID, desc, maker, price, albumTitle, artist);  // 새로운 CD 객체 생성
            break;

        case 3:
            cout << "책 제목>>";
            getline(cin, title);
            cout << "저자>>";
            getline(cin, author);
            cout << "언어>>";
            getline(cin, language);
            cout << "ISBN>>";
            cin >> ISBN;
            cin.ignore();
            products[nextID] = new ConversationBook(type, nextID, desc, maker, price, ISBN, title, author, language);  // 새로운 회화책 객체 생성
            break;

        default:
            cout << "잘못된 종류입니다." << endl;
            return;
    }

    nextID++;  // 다음 제품 ID 증가
}