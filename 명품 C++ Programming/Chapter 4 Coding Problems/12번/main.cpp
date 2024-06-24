#include "CircleManager.h" // CircleManager 클래스의 선언이 포함된 헤더 파일을 포함합니다.
#include <iostream> // 입출력 스트림을 사용하기 위한 헤더 파일을 포함합니다.

using namespace std; // 표준 네임스페이스를 사용합니다.

int main() {
    int CircleList = 0; // 생성할 원의 개수를 저장하는 변수를 선언하고 초기화합니다.
    int radius = 0; // 사용자로부터 입력 받은 반지름을 저장하는 변수를 선언합니다.
    string name; // 원의 이름을 저장하는 변수를 선언합니다.

    // 사용자로부터 생성할 원의 개수를 입력 받습니다.
    cout << "원의 개수 >> ";
    cin >> CircleList; // 사용자로부터 정수형 값을 입력받아 CircleList 변수에 저장합니다.

    // CircleManager 클래스의 객체를 생성하고, 생성자를 호출하여 원하는 개수의 Circle 객체를 생성합니다.
    CircleManager Circles(CircleList);

    // 원의 개수만큼 반복해서 입력을 받습니다.
    Circles.setCircles(); 

    // 원의 이름으로 검색하여 해당하는 원의 면적을 출력합니다.
    Circles.searchByName();

    // 원의 면적이 사용자가 입력한 값보다 큰 경우를 검색하여 출력합니다.
    Circles.searchByArea();
    
    return 0; // 프로그램을 종료합니다.
}
