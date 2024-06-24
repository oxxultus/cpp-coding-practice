#include "Circle.h" // Circle 클래스 헤더 파일을 포함합니다.

int main(){
    // Circle 객체 배열을 선언합니다.
    Circle circle[3];
    int countCircle = 0; // 면적이 100보다 큰 원의 개수를 저장하는 변수를 초기화합니다.
    int radius = 0; // 원의 반지름을 입력받는 변수를 선언합니다.

    // 3개의 원에 대해 반지름을 입력받고 면적이 100보다 큰지 확인합니다.
    for (int i = 0; i < (sizeof(circle)/sizeof(circle[0])); i++){
        cout << "원"<< i+1 << "의 반지름 >> ";
        cin >> radius;

        // 입력받은 반지름으로 원의 반지름을 설정합니다.
        circle[i].setRadius(radius);

        // 원의 면적이 100보다 큰지 확인하고, 크다면 countCircle를 증가시킵니다.
        if(circle[i].getArea() > 100){countCircle++;}
    }

    // 결과를 출력합니다.
    cout << "면적이 100보다 큰 원은 "<< countCircle << "개 입니다."<<  endl;
}
