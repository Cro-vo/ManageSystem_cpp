#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Manager :public worker
{
public:

	//���캯��
	Manager(int id, string name, int dId);

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ����
	string getDeptName();

};