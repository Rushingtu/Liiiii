#include<iostream>
#include<plog/Log.h>
using namespace std;

class Complex {
private:
	double Re;  //Êµ²¿
	double Im;  //Ðé²¿
public:
	Complex(double Re, double Im);
	Complex operator+(Complex& c);
	void printComplex();
};

Complex::Complex(double Re = 0, double Im = 0)
{
	this->Re = Re;
	this->Im = Im;
}
Complex Complex::operator+(Complex& c)
{
	Complex a;
	a.Re = Re + c.Re;
	a.Im = Im + c.Im;
	return a;
}
void Complex::printComplex()
{
	cout <<  Re << "+j" << Im << endl;
}

int main()
{
	Complex a(1, 3);
	Complex b(2.2, 5);
	Complex c = a + b;
	cout << "c=";
	c.printComplex();
}