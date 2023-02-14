#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;


int myDivision(int a, int b) {
	if (b==0)
	{
		//return -1;
		throw - 1;//int类型异常
	}
	return a / b;
}

void test01() {
	int a = 10;
	int b = 0;
	try
	{
		myDivision(a, b);
	}
	catch (int)
	{
		cout << "int类型异常捕获" << endl;
	}
	//c下处理异常有缺陷，返回值不统一，若值为-1无法区分是结果还是异常
	/*int ret = myDivision(a, b);
	if (ret==-1)
	{
		cout << "异常" << endl;
	}*/
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
