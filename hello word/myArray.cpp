#include"myArray.h"

MyArray::MyArray() {
	cout << "Ĭ�Ϲ��캯������" << endl;
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
MyArray::MyArray(int capacity) {
	cout << "���ι��캯������" << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}
MyArray::MyArray(const MyArray& arr) {
	cout << "Ĭ�ϸ��ƺ�������" << endl;
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;
	//this->pAddress = arr.pAddress;
	this->pAddress = new int[arr.m_Capacity];
	for (int i = 0; i < m_Size; i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}
}
//β�巨
void MyArray :: pushBack(int val) {
	this->pAddress[this->m_Size] = val; 
	this->m_Size++;
}
void MyArray::setData(int pos, int val) {
	this->pAddress[pos] = val;
	
}//����λ����������
int MyArray::getData(int pos) {
	return this->pAddress[pos];
}
int MyArray::getCapcity() {
	return this->m_Capacity;
}
//��ȡ���鳤��
int MyArray::getSize() {
	return this->m_Size;
}
//����
MyArray::~MyArray() {
	cout << "������������" << endl;
	if (this->pAddress!=NULL)
	{
		delete[] this->pAddress;
		this->pAddress = NULL;
	}
}