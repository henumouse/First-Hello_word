#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#pragma once
using namespace std;


class MyArray {
public:
	MyArray();//Ĭ�Ϲ���
	MyArray(int capacity);
	MyArray(const MyArray& arr);
	~MyArray();
	//β�巨
	void pushBack(int val);
	void setData(int pos, int val);//����λ����������
	int getData(int pos);//����λ�û�ȡ����
	//��ȡ��������
	int getCapcity();
	//��ȡ���鳤��
	int getSize();


private:
	int m_Capacity;
	int m_Size;
	int *pAddress;
};