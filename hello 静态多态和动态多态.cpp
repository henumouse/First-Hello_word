#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
	int m_age;
	virtual void speak() {
		cout << "动物在说话" << endl;
}
};
class Cat :public Animal {
public:
	void speak() {
		cout << "cat miaomiao" << endl;
	}
};
class Dog :public Animal {
public:
	void speak() {
		cout << "dog miaomiao" << endl;
	}
};
//有关于父子关系的两个类，指针或引用，可以直接转换
void dospeak(Animal& animal) {//若地址提前绑定，属于静态联编
	animal.speak();
}
//若调用cat speak，则地址不能提前绑定，需要在运行时绑定，属于地址晚绑定，属于动态联编，应将father类中方法定义为虚函数
//关键字为 virtual

void test01() {
	Cat cat;
	Dog dog;
	dospeak(cat);
	dospeak(dog);
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
