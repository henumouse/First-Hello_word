#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;
#pragma once
class Person {
public:
	Person(int a, int b) :m_a(a), m_b(b) {};
	int m_a;
	int m_b;
	Person operator+(Person &p) {
		Person temp(0,0);
		temp.m_a = this->m_a;
		temp.m_b = this->m_b;
		return temp;
	}
};
void test02() {
	Person p1(10, 10);
	Person p2(10, 10);
	Person p3 = p1 + p2;
	cout << "p3.m_a=" << p3.m_a << endl;
}
int main01() {
	test02();
	return EXIT_SUCCESS;
}
