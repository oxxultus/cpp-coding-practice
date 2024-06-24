#include "Person.h"

// Person 클래스의 생성자 정의입니다.
Person::Person() {
    // 기본적으로 string 멤버 변수들은 빈 문자열로 초기화됩니다.
}

// Person 클래스의 set 메서드 정의입니다.
// 이 메서드는 사용자가 입력한 이름과 전화번호를 받아서 객체의 이름(name)과 전화번호(tel)에 설정합니다.
void Person::set(string name, string tel) {
    // 객체의 이름(name) 멤버 변수에 사용자가 입력한 이름을 설정합니다.
    this->name = name;
    // 객체의 전화번호(tel) 멤버 변수에 사용자가 입력한 전화번호를 설정합니다.
    this->tel = tel;
}
