#include "workerManager.h"
#include "Employee.h"
#include "Boss.h"
#include "Manager.h"

//���캯��
workerManager::workerManager()
{
	//��¼����������
	int m_EmpNum = 0;

	//Ա�������ָ��
	worker** m_EmpArray = NULL;
}

//չʾ�˵�
void workerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void workerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

//����ְ��
void workerManager::Add_Emp()
{
	cout << "����������ְ�������� " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����С
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		worker** newSpace = new worker * [newSize];

		//��ԭ��������ת�ƹ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ����ţ�" << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ��ְ����λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
		cout << "�ɹ���� " << addNum << " ����Ա����" << endl;

	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}

//��������
workerManager::~workerManager()
{

}