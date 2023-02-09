//菱形继承导致类内包含重复变量，产生二义性
//当发生虚继承后，sheep和tuo类中继承了一个vbptr指针︰虚基类指针︰指向的是一个虚基类表vbtable
//虚基类表中记录了偏移量﹐通过偏移量可以找到唯一的一个m_Age
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
	int m_age;
};
class Sheep :virtual public Animal {
public:
	
};
class Tuo : virtual public Animal {
	public:
};
class SheepTuo : public Sheep, public Tuo {
	public:
};
void test01() {
	SheepTuo st;
	st.Sheep::m_age = 10;
	st.Tuo::m_age = 20;
	cout << st.Sheep::m_age << endl;
	cout << st.Tuo::m_age << endl;
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
