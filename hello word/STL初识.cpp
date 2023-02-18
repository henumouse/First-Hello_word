#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int val) {
    cout << val << endl;
}
//原生指针也是迭代器
void test01() {
    int arr[5] = { 1,2,3,4,5 };
    int* p = arr;
    for (int i=0;i<5;i++)
    {
        cout << *(p++) << endl;
    }
}
void test02() {
    vector<int>v;//创建一个vector容器，容器中存放int型数据
    //插入元素
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    //创建迭代器
    vector<int>::iterator itBegin = v.begin();//起始迭代器,指向第一个数据
    vector<int>::iterator itEnd = v.end();//结束迭代器,指向结尾数据的下一个位置
    //第一种遍历
    /*while (itBegin!=itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }*/
    //第二种遍历
	/*for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}*/
    //第三种遍历
    for_each(v.begin(),v.end(),print);
}
//自定义数据类型
class Person
{
public:
    Person();
    Person(string name, int age);
    ~Person();
    string m_Name;
    int m_Age;


private:

};

Person::Person(string name,int age)
{
    this->m_Name = name;
    this->m_Age = age;
}

Person::~Person()
{
}
void test03() {
    vector<Person> v;
    Person p1("111", 10);
    Person p2("222", 20);
    Person p3("333", 30);
    Person p4("444", 40);
    Person p5("555", 50);
     
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it=Person
        cout << "姓名：" << (*it).m_Name << "age =" << (*it).m_Age << endl;
    }

}
//存放自定义类型的指针
void test04() {
	vector<Person* > v;
	Person p1("111", 10);
	Person p2("222", 20);
	Person p3("333", 30);
	Person p4("444", 40);
	Person p5("555", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
    //*it=Person*
    for (vector<Person * >::iterator it = v.begin();it != v.end();it++)
    {
        
        cout << "姓名：" << (*it)->m_Name << "age =" << (*it)->m_Age << endl;
    }

}
//容器嵌套容器
void test05() {
    vector<vector<int>> v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    //小容器中传入初值
    for (int i=0;i<5;i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 10);
        v3.push_back(i + 100);
    }
    //将小容器放入大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    //遍历大容器
    for (vector<vector<int>>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it=
        for (vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++)
        {
            cout << *vit << " ";
        }
        cout << endl;
    }
}
int main()
{
    test01();
    test02();
    test03();
    test04();
    test05();
    //std::cout << "Hello World!\n";
    return EXIT_SUCCESS;
}
