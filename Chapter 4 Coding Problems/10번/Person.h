#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
	string name;

public:
	Person() { this->name = ""; }
	Person(string name) { this->name = name; }
	string getName() {return name;}
	void setName(string name) { this->name = name; }
};
