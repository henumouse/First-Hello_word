#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include "结构体嵌套二级指针.h"
#pragma once


struct Teacher
{
	char* name;
	char** students;

};
void allocateSpace(struct Teacher*** teachers) {
	if (teachers==NULL)
	{
		return;

	}
	struct Teacher ** ts = malloc(sizeof(struct Teacher*) * 3);
}
void test01() {
	struct Teacher** pArray;
	allocateSpace(&pArray);
	}
int main() {
	return 0;
}