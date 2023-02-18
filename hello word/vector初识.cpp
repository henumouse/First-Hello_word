#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void test01() {
    vector<int> v;
    for (int i=0;i<10;i++)
    {
        v.push_back(i);
        cout << v.capacity() << endl;
    }
}
int main()
{
    test01();
    return EXIT_SUCCESS;
}
