#include "GamblingGame.h" // GamblingGame 클래스의 선언이 포함된 헤더 파일을 포함합니다.

// GamblingGame 클래스의 생성자입니다.
GamblingGame::GamblingGame(){
    string name; // 이름을 저장할 변수입니다.
    
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    
    // 선수 이름 입력받기
    for (int i = 0; i < 2; i++){
        cout << i+1 << "번째 선수 이름 >>";
        getline(cin,name); // 사용자로부터 이름을 입력받습니다.
        // 입력 받은 이름으로 Player 객체의 이름을 설정합니다.
        player[i].setName(name);
    }
}

// 게임을 실행하는 메서드입니다.
void GamblingGame::play(){
    int i = 0; // 현재 플레이어를 나타내는 변수입니다.
    // 게임이 완료되지 않은 동안 반복합니다.
    while (!isGameCompleted) {
        // i % 2는 i를 2로 나눈 나머지를 구합니다. 이 연산의 결과는 항상 0 또는 1이 됩니다. 
        // 따라서 i의 값이 짝수일 때는 0이 되고, 홀수일 때는 1이 됩니다.
        // 배열의 인덱스로 사용하면, 짝수 번째 요소와 홀수 번째 요소를 번갈아가며 접근해 교대로 게임 진행
		cout << player[i % 2].getName() << ":<Enter>";
		getchar(); // 버퍼에서 문자 하나를 제거합니다.

        // 세 개의 랜덤한 정수가 모두 같은 경우 게임을 종료합니다.
		if (player[i % 2].playGambling()) {
			isGameCompleted = true; // 게임이 종료되었음을 표시합니다.
			cout << "\t" << player[i % 2].getName() << "님 승리!!" << endl; // 승자를 출력합니다.
		}

        // 세 개의 랜덤한 정수 중 하나라도 다른 경우 계속해서 다음 플레이어의 차례로 진행합니다.
		else {
			cout << "\t아쉽군요!" << endl; // 아쉬움을 표시합니다.
		}
		i++; // 다음 플레이어의 차례로 이동합니다.
	}
}
