#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class workerManager
{
public:

	//���캯��
	workerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//����ְ��
	void Add_Emp();

	//��������
	~workerManager();

	//��¼����������
	int m_EmpNum;

	//Ա�������ָ��
	worker** m_EmpArray;

};