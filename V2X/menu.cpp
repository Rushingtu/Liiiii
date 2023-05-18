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
	cout << "========= 主菜单 =========" << endl;
	cout << "1 ---- 初始化并打印主车信息" << endl;
	cout << "2 ---- 从文件导入周围交通参与者信息" << endl;
	cout << "3 ---- 从键盘导入周围交通参与者信息" << endl;
	cout << "4 ---- 列表显示周围所有交通参与者信息" << endl;
	cout << "5 ---- 按指定ID查找交通参与者" << endl;
	cout << "6 ---- 删除过滤指定ID交通参与者信息" << endl;
	cout << "7 ---- 保存周边所有交通参与者信息至文件中" << endl;
	cout << "8 ---- V2X场景模拟" << endl;
	cout << "Q ---- 退出" << endl;
	cout << "=========================" << endl;
	cout << "请选择: " << endl;
}

void V2Xmenu()
{
	cout << "========= V2X场景模拟 =========" << endl;
	cout << "1 ---- 前向碰撞预警" << endl;
	cout << "2 ---- 交叉路口碰撞预警" << endl;
	cout << "3 ---- 异常车辆预警" << endl;
	cout << "4 ---- 道路限速预警" << endl;
	cout << "5 ---- 车速引导" << endl;
	cout << "6 ---- 多场景同时触发" << endl;
	cout << "请选择: " << endl;
}