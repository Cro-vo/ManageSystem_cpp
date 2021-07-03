#include "workerManager.h"
#include "Employee.h"
#include "Boss.h"
#include "Manager.h"

//构造函数
workerManager::workerManager()
{
	//记录的人数个数
	int m_EmpNum = 0;

	//员工数组的指针
	worker** m_EmpArray = NULL;
}

//展示菜单
void workerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//退出系统
void workerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//增加职工
void workerManager::Add_Emp()
{
	cout << "请输入增加职工数量： " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算大小
		int newSize = this->m_EmpNum + addNum;

		//开辟新空间
		worker** newSpace = new worker * [newSize];

		//将原来的内容转移过来
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//输入新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
			cin >> id;

			cout << "请输入第 " << i + 1 << " 个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择职工岗位： " << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
			case 2:
				worker = new Manager(id, name, 2);
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;

		}

		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		cout << "成功添加 " << addNum << " 名新员工！" << endl;

	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}

//析构函数
workerManager::~workerManager()
{

}