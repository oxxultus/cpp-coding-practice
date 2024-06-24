#pragma once // 헤더 파일의 중복 포함을 방지하는 전처리 지시문입니다.

#include <iostream> // 표준 입력과 출력을 위한 라이브러리를 포함합니다.
#include <algorithm>
#include <string> // 문자열 처리를 위한 라이브러리를 포함합니다.

using namespace std; // 표준 라이브러리의 요소들을 std 네임스페이스 안에서 사용할 수 있도록 합니다.


// STR 클래스의 정의가 시작됩니다.
class STR {
    
    // STR 클래스의 정의가 시작됩니다.
    string str; 
    
public:

    // 기본 생성자의 선언입니다.
    STR(); 

    // 특정 문자가 문자열에서 등장하는 횟수를 계산하는 함수 checkC의 선언입니다.
    int checkC(char c); 

    // 문자열을 반환하는 함수
    string getStr(){return str;}

    // 문자열을 설정하는 함수 setStr의 선언입니다.
    void setStr(string str) { this->str = str; }

    // 문자열중 단어 하나를 랜덤으로 바꾸는 함수의 선언입니다.
    void randomStr();

    // 문자열을 뒤집어서 반환하는 함수.
    string reverseStr();
}; 
