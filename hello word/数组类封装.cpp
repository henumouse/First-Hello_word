#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#pragma once
#include"myArray.h"
using namespace std;


void test01() {
	MyArray arr;
	for (int i = 0; i < 10; i++)
	{
		arr.pushBack(i);

	}
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr.getData(i) << endl;
	}
}
int main() {

	test01();
	return EXIT_SUCCESS;
}
