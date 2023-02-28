#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <functional>
#include <vector>
#include <iterator>
#include <ctime>
#include <algorithm>


using namespace std;

class MyPoint:public binary_function<int,int,void> 
{
public:
    void operator()(int val,int start)const 
    {
        cout <<  val+start<< endl;
    }
};
void test01() {
    vector <int>v;
    for (int i=0;i<10;i++)
    {
        v.push_back(i);

    }
    cout << "请输入起始累加的值" << endl;
    int num;
    cin >> num;
    //利用bind2nd绑定数据
    //2:class MyPoint:public binary_function<int,int,void>
    //继承public binary_function<参数一类型，参数二类型，返回值类型>
    //3：加const
    for_each(v.begin(), v.end(), bind2nd(MyPoint(),num));
}
//取反适配器
class Greater5:public unary_function<int ,bool> {
public:
    bool operator()(int val)const {
        return val > 5;
    }
};
//void test02() {
//	vector <int>v;
//	for (int i = 0;i < 10;i++)
//	{
//		v.push_back(i);
//
//	}
//    vector<int >::iterator pos= find_if(v.begin(), v.end(), Greater5());
//    if (pos!=v.end())
//    {
//        cout << "find num>5  num= " << *pos << endl;
//    } 
//    else
//    {
//        cout << "cant find num > 5" << endl;
//    }
//}
//取反适配
//利用not1一员取反
	//2:class Greater5:public unary_function<int ,bool> 
	//3：加const
void test3() {
	vector <int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);

	}
	//vector<int >::iterator pos = find_if(v.begin(), v.end(),not1( Greater5()));
    //用户自定义范围,修改数字5
    vector<int >::iterator pos = find_if(v.begin(), v.end(),not1(bind2nd( greater<int>(),5)));
	if (pos != v.end())
	{
		cout << "find num<5  num= " << *pos << endl;
	}
	else
	{
		cout << "cant find num < 5" << endl;
	}
    //二元取反
    //sort(v.begin(), v.end(), not2(less<int>()));
}
//函数适配器
void myPoint03(int val) {
    cout << val << endl;
}
void test03() {
	vector <int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);

	}
    //将函数指针适配为函数对象 ptr_fun
    for_each(v.begin(), v.end(), bind2nd(ptr_fun(myPoint03),1000));
}
//成员函数适配器
class Person {
public:
    string m_Name;
    int m_Age;
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;

    }
    void showPerson() {
        cout << "name= " << m_Name << "  age=" << m_Age << endl;
    }
};
void myProint04(Person& p) {
    cout << "name=" << p.m_Name << "  age=" << p.m_Age << endl;
}
void test04() {
    vector<Person> v;
    Person p1("aaa", 111);
    Person p2("bbb", 222);
    Person p3("ccc", 333);
    Person p4("ddd", 444);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    //利用mem_fun_ref 适配
    for_each(v.begin(), v.end(), mem_fun_ref( &Person::showPerson));
    
}
int main()
{
    //test01();
    //test02();、
    //test3();
    //test03();
    test04();
    return EXIT_SUCCESS;
}
