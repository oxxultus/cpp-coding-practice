#include "STR.h"

int main(){
    STR sample; // STR 클래스의 객체 sample을 생성합니다.
    string str; // 사용자 입력을 저장할 string 변수 str을 선언합니다.

    while (true){ // 무한 루프를 시작합니다.
        cout << "아래에 한 줄을 입력하세요." << endl; // 사용자에게 입력 메시지를 출력합니다.
        getline(cin, str); // 사용자로부터 한 줄을 입력받아 str에 저장합니다.

        // 문자열이 "exit"과 동일하면 루프를 탈출합니다.
        //if (str == "exit") break; 과 동일합니다.
        if (str.compare("exit") == 0){
            break; // 무한 루프를 종료합니다.
        }
        else{ // "exit"이 아닌 경우
            sample.setStr(str); // sample 객체의 문자열을 사용자가 입력한 문자열로 설정합니다.
            sample.reverseStr(); // sample 객체의 문자열을 반대로 변경하는 함수를 호출합니다.
            cout << "변경 후 :" << sample.getStr() << endl; // 변경된 문자열을 출력합니다.
        }
    }
    return 0; // 프로그램을 종료합니다.
}
