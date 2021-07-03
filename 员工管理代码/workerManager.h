#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class workerManager
{
public:

	//构造函数
	workerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void exitSystem();

	//增加职工
	void Add_Emp();

	//析构函数
	~workerManager();

	//记录的人数个数
	int m_EmpNum;

	//员工数组的指针
	worker** m_EmpArray;

};