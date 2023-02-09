#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak() {
		cout << "anmal speak" << endl;
	}
	Animal() {
		cout << "animal构造" << endl;
	};
	virtual ~Animal() {
		cout << "animal析构" << endl;
	};

private:

};
class Cat :public Animal {
	public:
		Cat() {
			cout << "cat构造" << endl;
		}

		Cat(char * name) {
			m_Name = new char[strlen(name)+1];
			strcpy(m_Name, name);
			cout << "cat有参构造" << endl;
		}
		~Cat() {
			cout << "cat析构" << endl;
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
		char* m_Name;
		virtual void speak() {
			cout <<this->m_Name<< "cat speak" << endl;
		}
};
void test01() {
	Animal* cat = new Cat("TOM");
	cat->speak();
	delete(cat);
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
