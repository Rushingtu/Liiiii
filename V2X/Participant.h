#pragma once
#include<string>
using namespace std;

class Participant
{
private:
	int id;
	string name;
	double x, y;
public:
	Participant();
	Participant(int id, string name, double x, double y);
	double distance(Participant member);
};

