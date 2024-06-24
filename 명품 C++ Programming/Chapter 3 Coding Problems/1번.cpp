// Tower 클래스의 선언
class Tower {
    int height; // 타워의 높이 멤버 변수
    
public:
    // 기본 생성자
    Tower() : Tower(1) {} // 높이를 1로 초기화하는 기본 생성자
    
    // 높이를 매개변수로 받는 생성자
    Tower(int h) : height(h) {} // 높이를 매개변수로 받는 생성자
    
    // 타워의 높이를 반환하는 함수
    int getHeight() {
        return height; // 높이 반환
    }
};
