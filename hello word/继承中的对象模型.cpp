#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

class BasePage {
public:
	int m_a;
private:
	int m_b;
protected:
	int m_c;
};
class Son : public BasePage {
public:
	int m_d;
};
void test01() {
	cout << "size of son=" << sizeof(Son) << endl;
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
