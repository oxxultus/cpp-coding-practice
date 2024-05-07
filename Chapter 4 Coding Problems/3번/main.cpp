#include "STR.h" // STR 클래스의 헤더 파일을 포함합니다.

int main() {
    STR obj; // STR 클래스의 객체를 생성합니다.
    string str; // 사용자로부터 문자열을 입력 받을 변수를 선언합니다.
    char targetChar; // 특정 문자를 입력 받을 변수를 선언합니다.

    cout << "문자열 입력: "; // 사용자에게 문자열 입력을 요청하는 메시지를 출력합니다.
    getline(cin, str); // 사용자로부터 한 줄의 문자열을 입력 받습니다.

    obj.setStr(str); // 입력 받은 문자열을 STR 클래스의 객체에 설정합니다.

    obj.checkC('a'); // STR 클래스의 checkA() 함수를 호출하여 'a' 문자가 등장하는 횟수를 출력합니다.

    return 0; // 프로그램을 종료합니다.
}
