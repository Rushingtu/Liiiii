#include<iostream>
#include "menu.h"
#include"Infrastruture.h"
#include"Participant.h"
#include"Pedestrian.h"
#include"Vehicle.h"
//#include<plog\Log.h>

using namespace std;

void mainmenu()
{
	cout << "========= ���˵� =========" << endl;
	cout << "1 ---- ��ʼ������ӡ������Ϣ" << endl;
	cout << "2 ---- ���ļ�������Χ��ͨ��������Ϣ" << endl;
	cout << "3 ---- �Ӽ��̵�����Χ��ͨ��������Ϣ" << endl;
	cout << "4 ---- �б���ʾ��Χ���н�ͨ��������Ϣ" << endl;
	cout << "5 ---- ��ָ��ID���ҽ�ͨ������" << endl;
	cout << "6 ---- ɾ������ָ��ID��ͨ��������Ϣ" << endl;
	cout << "7 ---- �����ܱ����н�ͨ��������Ϣ���ļ���" << endl;
	cout << "8 ---- V2X����ģ��" << endl;
	cout << "Q ---- �˳�" << endl;
	cout << "=========================" << endl;
	cout << "��ѡ��: " << endl;
}

void V2Xmenu()
{
	cout << "========= V2X����ģ�� =========" << endl;
	cout << "1 ---- ǰ����ײԤ��" << endl;
	cout << "2 ---- ����·����ײԤ��" << endl;
	cout << "3 ---- �쳣����Ԥ��" << endl;
	cout << "4 ---- ��·����Ԥ��" << endl;
	cout << "5 ---- ��������" << endl;
	cout << "6 ---- �ೡ��ͬʱ����" << endl;
	cout << "��ѡ��: " << endl;
}