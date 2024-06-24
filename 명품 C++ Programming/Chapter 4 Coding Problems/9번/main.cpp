#include "Person.h" // Person 클래스 헤더 파일을 포함합니다.

int main() {

    Person example[3]; // Person 클래스의 객체 배열을 생성합니다.
    string name, tell; // 이름과 전화번호를 저장할 변수를 선언합니다.

    cout << "이름과 전화번호를 입력해주세요." << endl; // 사용자에게 입력 요청 메시지를 출력합니다.
    for (int i = 0; i < 3; i++) { // 3명의 사람에 대해 반복합니다.
        cout << "사람" << i + 1 << ">> "; // 현재 입력할 사람의 번호를 출력합니다.
        cin >> name >> tell; // 사용자로부터 이름과 전화번호를 입력받습니다.

        example[i].set(name, tell); // Person 객체의 set 메서드를 사용하여 이름과 전화번호를 설정합니다.
    }

    cout << "모든 사람의 이름은"; // 모든 사람의 이름을 출력할 메시지를 출력합니다.
    for (int i = 0; i < 3; i++) { // 3명의 사람에 대해 반복합니다.
        cout << example[i].getName() << " "; // 각 사람의 이름을 출력합니다.
    }
    cout << endl; // 줄바꿈을 수행합니다.

    string Checkname; // 검색할 이름을 저장할 변수를 선언합니다.
    cout << "전화번호를 검색합니다. 이름을 입력하세요 >>"; // 검색할 이름을 입력받는 메시지를 출력합니다.
    cin.ignore(100, '\n'); // 입력 버퍼를 정리합니다.
    getline(cin, Checkname); // 사용자로부터 한 줄을 입력받아 Checkname 변수에 저장합니다.
    for (int i = 0; i < 3; i++) { // 3명의 사람에 대해 반복합니다.
        if (Checkname.compare(example[i].getName()) == 0) { // 사용자가 입력한 이름과 객체의 이름이 일치하는지 확인합니다.
            cout << "전화번호는 " << example[i].getTal() << endl; // 일치하는 경우 해당 사람의 전화번호를 출력합니다.
        }
    }

    return 0; // 프로그램을 종료합니다.
}
