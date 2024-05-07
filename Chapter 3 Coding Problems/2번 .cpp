#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Date {
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d);
    Date(string s);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string s) {
    
    //스트링 객체를 옴겨담을 배열 생성
    char ch[100];
    

    //스트링 객체의 문자열을 C스타일 문자열로 변환 해서
    //ch라는 문자배열에 넣음
    //해당 strtok함수는 c스타일 문자에만 사용가능 해서 변환하는 것
    //책에도 변환방법있음
    strcpy(ch, s.c_str());
    
    // 문자 배열을 / 기호를 구분자로 사용하여 토큰으로 분리
    // 이 때, 처음 호출될 때는 ch 문자열을 가리키고, 이후 호출될 때는 NULL 포인터를 사용하여 이전 호출에서 남은 문자열을 이어서 처리 
    // 첫 번째 호출에서는 ch 문자열에서 첫 번째 토큰인 연도를 추출.
    year = stoi(strtok(ch, "/"));

    // 아래 두 코드에서 문자열을 가리키는부분이 NULL로 되어있는 이유는 
    // 앞에서 읽어온 코드 뒤에서 부터 자동으로 읽어오기 때문
    month = stoi(strtok(NULL, "/"));
    day = stoi(strtok(NULL, "/"));
}
/* 다른방법
Date::Date(string s) {
    // "/" 문자의 위치를 찾아서 연도, 월, 일을 추출하는 부분

    // 첫 번째 "/" 문자의 위치를 찾음
    int index1 = s.find("/");

    // 연도 부분을 추출합니다. "/" 이전까지의 부분을 추출
    string y = s.substr(0, index1);

    // 두 번째 "/" 문자의 위치를 찾습니다. 이때 index1 이후부터 검색
    int index2 = s.find("/", index1 + 1);
    
    // 월 부분을 추출합니다. index1 이후부터 index2 - index1 - 1 길이만큼을 추출
    string m = s.substr(index1 + 1, index2 - index1 - 1);

    // 세 번째 "/" 이후의 문자열은 일 부분입니다. 따라서 index2 이후부터 문자열의 끝까지를 추출
    string d = s.substr(index2 + 1, s.length());
}
*/

void Date::show() {
    cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}
