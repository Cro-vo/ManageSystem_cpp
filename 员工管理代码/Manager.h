#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Manager :public worker
{
public:

	//构造函数
	Manager(int id, string name, int dId);

	//显示个人信息
	void showInfo();

	//获取岗位名称
	string getDeptName();

};