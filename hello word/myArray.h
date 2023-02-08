#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#pragma once
using namespace std;


class MyArray {
public:
	MyArray();//默认构造
	MyArray(int capacity);
	MyArray(const MyArray& arr);
	~MyArray();
	//尾插法
	void pushBack(int val);
	void setData(int pos, int val);//根据位置设置数据
	int getData(int pos);//根据位置获取数据
	//获取数组容量
	int getCapcity();
	//获取数组长度
	int getSize();


private:
	int m_Capacity;
	int m_Size;
	int *pAddress;
};