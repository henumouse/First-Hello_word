#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;
class AbstractCalculator {
	public:
		virtual int getResult();
		int m_a;
		int m_b;
};
class addCalculator:public AbstractCalculator
{
	public:
		int getResult() {
			return m_a + m_b;
		}

	private:

};
class jianCalculator :public AbstractCalculator
{
	public:
		int getResult() {
			return m_a - m_b;
		}

	private:

};
class chengCalculator :public AbstractCalculator
{
	public:
		int getResult() {
			return m_a * m_b;
		}

	private:

};
class chuCalculator :public AbstractCalculator
{
	public:
		int getResult() {
			return m_a / m_b;
		}

private:

};

void test01() {
	AbstractCalculator*  cal = new jianCalculator;
	cal->m_a = 20;
	cal->m_b = 10;
	cout << cal->getResult() << endl;
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
