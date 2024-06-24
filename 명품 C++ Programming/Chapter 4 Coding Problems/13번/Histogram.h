#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Histogram 클래스 선언
class Histogram {
    string str;                 // 문자열을 저장하기 위한 멤버 변수
    int alphabet[26] = { 0 };   // 알파벳 빈도수를 저장하기 위한 배열 (알파벳 개수는 26개)

public:
    // 생성자: 주어진 문자열로 Histogram 객체를 초기화한다.
    Histogram(string str){ this->str = str; }

    // 문자열을 기존 문자열 뒤에 추가한다.
    void put(string new_str){ this->str.append(new_str); }

    // 문자를 기존 문자열 뒤에 추가한다.
    void putc(char ch){ this->str.append(ch); }

    // 알파벳 빈도수를 출력한다.
    void print();

    // 현재 문자열에 있는 알파벳의 개수를 반환한다.
    int getAlphabetSize();

    // 현재 문자열에서 알파벳 빈도수를 계산한다.
    void countAlphabet();
};

