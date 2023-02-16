#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
using namespace std;

//異常的基类
class BaseEception {
public:
	virtual void printError() = 0;
};
//空指针异常
class NULLPointerException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针异常" << endl;
	}
};
//越界失败
class OutOfRange
{
public:
	OutOfRange();
	~OutOfRange();
	virtual void printError()
	{
		cout << "越界异常" << endl;
	}

private:

};

OutOfRange::OutOfRange()
{
}

OutOfRange::~OutOfRange()
{
}
void doWork() {
	//throw NULLPointerException();
	throw OutOfRange();
}
void test01() {
	try
	{
		doWork();
	}
	catch (BaseEception & e)
	{
		e.printError();
	}
	
}


int main()
{
	test01();
    return EXIT_SUCCESS;
}
