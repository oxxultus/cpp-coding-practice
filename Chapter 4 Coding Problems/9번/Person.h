#include <iostream> // 표준 입출력을 위한 헤더 파일입니다.
#include <string> // 문자열 처리를 위한 헤더 파일입니다.

using namespace std; // 표준 네임스페이스를 사용합니다.

class Person {
	string name; // 사람의 이름을 저장하는 멤버 변수입니다.
	string tel; // 사람의 전화번호를 저장하는 멤버 변수입니다.
public:
	Person(); // 생성자입니다.
	string getName() { return name; } // 이름을 반환하는 메서드입니다.
	string getTal() { return tel; } // 전화번호를 반환하는 메서드입니다.
	void set(string name, string tel); // 이름과 전화번호를 설정하는 메서드입니다.
};
