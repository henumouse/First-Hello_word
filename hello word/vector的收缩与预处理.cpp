#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
//使用swap收缩内存
void test01() {
    vector<int> v;
    for (int i=0;i<100000;i++)
    {
        v.push_back(i);
       
    }
    //申请大量的空间
    cout <<"v.capacity= "<< v.capacity() << endl;
    cout << "v.size= " << v.size() << endl;
    //重设空间后，会存在大量的冗余
    v.resize(3);
	cout << "v.capacity= " << v.capacity() << endl;
	cout << "v.size= " << v.size() << endl;
    //利用swap收缩内存
    vector<int>(v).swap(v); 
	cout << "v.capacity= " << v.capacity() << endl;
	cout << "v.size= " << v.size() << endl;
}
//使用reserve 预留空间
void test02() {
    vector<int> v;
    v.reserve(100000);
    int* p = NULL;
    int num = 0;
    for (int i=0;i<100000;i++)
    {
        v.push_back(i);
        if (p!=&v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << "num= " << num << endl;
}
int main()
{
    test01();
    return EXIT_SUCCESS;
}
