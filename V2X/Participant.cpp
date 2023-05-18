#include "Participant.h"
#include<vector>
using namespace std;

Participant::Participant()
{
	id = 0;
	name = "";
	x = 0;
	y = 0;
}

Participant::Participant(int id, string name, double x, double y)
{
	this->id = id;
	this->name = name;
	this->x = x;
	this->y = y;
}

double Participant::distance(Participant member)
{
	return sqrt(pow((x - member.x), 2) + pow((y - member.y), 2));
}
