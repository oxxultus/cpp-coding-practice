#pragma once
#include "Person.h"


class Family {
	Person* p;
	int size;
	string FamilyName;

public:
	Family(string name, int size);
	~Family();
	void show();
	void setName(int index, string name);
	bool createFamily();
};

Family::Family(string name, int size) {
	FamilyName = name;
	this->size = size;
	createFamily();
	/*if (!createFamily()) {  // 생성실패시
		return;              // 함수를 종료합니다.
	}*/
}

bool Family::createFamily() {
	/*if (p) {  // 이미 할당된 메모리가 있는 경우
		delete[] p;  // 메모리를 해제합니다.
	}*/
	p = new Person[size]; // 새로운 메모리를 할당합니다.
	/*if (!p) {
		cout << "할당실패" << endl;
		return false;
	}
	*/
	return true;
}

Family::~Family() {
	/*if (p) {
		delete[] p;
	}*/
	delete[] p;
}

void Family::show() {
	cout << FamilyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "   ";
	}
	cout << endl;
}
void Family::setName(int index, string name) {
	p[index].setName(name);
}
