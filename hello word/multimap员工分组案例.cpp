#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <ctime>

 using namespace std; 

 class Worker {
 public:
     string m_Name;
     int m_Money;
 };
 enum{
    caiwu,renli,jishu
 };
 void createWorker(vector<Worker> &v) {
     string nameSeed = "ABCDE";
     for (int i=0;i<5;i++)
     {
         Worker worker;
         worker.m_Name = "员工";
         worker.m_Name += nameSeed[i];

         worker.m_Money = rand() % 10000 + 10000;
         v.push_back(worker);
     }
 }
 //分组函数
 void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
     for (vector<Worker>::iterator it=v.begin();it!=v.end();it++)
     {
         //随机产生部门编号
         int did = rand() % 3;
         m.insert(make_pair(did, *it));

     }
 }
 void showWorker(multimap<int,Worker>&m) {
     cout << "财务部门人员" << endl;
     multimap<int, Worker>::iterator pos = m.find(caiwu);
     int num = m.count(caiwu);
     int index = 0;
     for (;pos!=m.end(),index<num;pos++,index++)
     {
         cout << "name : " << pos->second.m_Name << "   money: " << pos->second.m_Money << endl;
     }
     cout << "人力部门人员" << endl;
	 pos = m.find(renli);
	 num = m.count(renli);
	 index = 0;
	 for (;pos != m.end(), index < num;pos++, index++)
	 {
		 cout << "name : " << pos->second.m_Name << "   money: " << pos->second.m_Money << endl;
	 }
	 cout << "技术部门人员" << endl;
	 pos = m.find(jishu);
	 num = m.count(jishu);
	 index = 0;
	 for (;pos != m.end(), index < num;pos++, index++)
	 {
		 cout << "name : " << pos->second.m_Name << "   money: " << pos->second.m_Money << endl;
	 }
 }
int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    vector<Worker> v;
    //创建五名员工
    createWorker(v);
    //员工分组
    multimap<int, Worker>m;
    setGroup(v, m);
    //测试
    showWorker(m);
    //for (vector<Worker>::iterator it=v.begin();it!=v.end();it++)
    //{
    //    cout << "name:  " << it->m_Name << "  money:  " << it->m_Money << endl;
    //}

    return EXIT_SUCCESS;
}

