#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

class BasePage {
public:
	int m_a;
	BasePage() {
		cout << "父类构造函数调用" << endl;
	}
	~BasePage() {
		cout << "父类析构函数调用" << endl;
	}
private:
	int m_b;
protected:
	int m_c;
};
class Son : public BasePage {
public:
	int m_d;
	Son() {
		cout << "子类构造函数调用" << endl;
	}
	~Son() {
		cout << "子类析构函数调用" << endl;
	}
};
void test01() {
	cout << "size of son=" << sizeof(Son) << endl;
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
