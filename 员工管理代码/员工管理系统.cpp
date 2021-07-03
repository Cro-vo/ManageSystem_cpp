#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	workerManager wm;
	int choice = 0;
	while (true)
	{
		//菜单展示
		wm.Show_Menu();
		cout << "请输入您的选择： " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			wm.exitSystem();
			break;
		case 1:	//添加职工
			wm.Add_Emp();
			break;
		case 2:	//显示职工
			break;
		case 3:	//删除职工
			break;
		case 4:	//修改职工
			break;
		case 5:	//查找职工
			break;
		case 6:	//排序职工
			break;
		case 7:	//清除职工
			break;
		default:
			system("cls");
			break;
		}
	}
	

	system("pause");

	return 0;

	
}