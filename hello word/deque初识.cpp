#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include<string>

using namespace std;
void printDeque(deque<int>&d) {
    //iterator普通迭代器
    //reverse_iterator反转迭代器
    //const_iterator只读迭代器
    for (deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout << *it<<" ";
    }
    cout << endl;
}

void test01() {
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    deque<int>d2;
    d2 = d;
    if (d2.empty())
    {
        cout << "d2 is null" << endl;
    }
    else
    {
        cout << "d2.size is =" << d2.size() << endl;
    }
    printDeque(d2);
}
/*
3.3.3.4 deque双端插入和册除操作
push_back(elem); //在容器尾部添加一个数据push_front(elem); / /在容器头部插入一个数据pop_back(; //册除容器最后一个数据
pop_front(; / /册除容器第一个数据
3.3.3.5 deque数据存取
at(idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_rangeo
operator[]; //返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。front(O; //返回第一个数据。
back(; l/返回最后一个数据*/
void test02() {
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    printDeque(d);
    d.pop_back();
    d.pop_front();
    printDeque(d);
}
/*
3.3.3.6 deque插入操作
insert(pos, elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。insert(pos,n, elem); //在pos位置插入n个elen数据，无返回值。
insert(pos, beg,end); //在pos位置插入[beg, end)区间的数据，无返回值。3.3.3.7 deque册除操作
clear();//移除容器的所有数据
erase(beg, end); //删除[beg,end)区间的数据，返回下一个数据的位置。erase(pos); //册除pos位置的数据，返回下一个数据的位置。
*/
void test03() {
    deque<int>d;
	d.push_back(1);
	d.push_back(2);
	d.push_front(3);
	d.push_front(4);
    //插入操作
    d.insert(++d.begin(), 2, 100);
    //删除操作
    d.erase(--d.end(),d.end());
    printDeque(d);
    d.clear();
    printDeque(d);
}
int main()
{
    //test01();
    //test02();
    test03();
    return EXIT_SUCCESS;
}
