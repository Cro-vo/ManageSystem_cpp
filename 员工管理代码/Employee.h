#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Employee:public worker
{
public:

	//���캯��
	Employee(int id, string name, int dId);

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ����
	string getDeptName();

};