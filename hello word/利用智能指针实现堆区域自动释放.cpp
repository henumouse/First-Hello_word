// 各类运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SEUSRE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;


class Person {
public:

    Person(int age) {
        cout << "有参构造函数调用" << endl;
        this->m_age = age;

    }
    ~Person() {
        cout << "析构函数调用" << endl;
    }
    void showAge() {
        cout << "年龄为："<<m_age << endl;
    }
    int m_age;
};
class smartPoint {
public:
    smartPoint(Person* person) {
        this->m_person = person;
    }
    ~smartPoint() {
        if (this->m_person)
        {
            delete this->m_person;
            this->m_person = NULL;
        }
        
        
    }
    //重载->符号
    Person* operator->(){
            return this->m_person;
        }
    Person& operator*() {
        return *m_person;
    }
private:
    Person* m_person;
};
void test01() {
    /*Person* p = new Person(10);
    p->showAge();
    delete(p);*/
    //利用智能指针管理new出来的person的释放操作
    smartPoint sp(new Person(18));
    sp->showAge(); 
}
int main()
{
    test01();
    //std::cout << "Hello World!\n";
    return EXIT_SUCCESS;
}


