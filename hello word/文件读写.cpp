#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;



void test01() {
	//写文件
	ofstream ofs("./test.txt",ios::out ||ios:: trunc);
	//或先声明后设置打开路径和方式
	/*
	* ofstream ofs;
	* ofs.open("./test.txt",ios::out ||ios:: trunc);
	*/
	if (!ofs.is_open())
	{
		cout << "open error" << endl;
		return;
	}
	ofs << "姓名：张三" << endl;
	//关闭文件
	ofs.close();
}
void test02() {
	//读文件
	ifstream ifs("./test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "read error" << endl;
		return;
	}
	//第一种
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}*/
	//第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))
	{
		cout << buf << endl;
	}
	ifs.close();*/
	//第三种
	string buf;
	while (getline(ifs, buf)
	{
		cout << buf << endl;
	}
	ifs.close();
}


int main()
{
	test01();
	test02();
    return EXIT_SUCCESS;
}
