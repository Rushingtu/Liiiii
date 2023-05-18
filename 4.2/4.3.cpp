#include<iostream>
using namespace std;
class Complex;

class Complex {
private:
	double Re;  //Êµ²¿
	double Im;  //Ðé²¿
public:
	Complex() { Re = 0; Im = 0; }
	Complex(double Re, double Im);
	friend Complex operator+(const Complex& c1,const Complex& c2)
	{
		Complex a;
		a.Re = c1.Re + c2.Re;
		a.Im = c1.Im + c2.Im;
		return a;
	}
	friend Complex operator+(double r, const Complex& c);
	friend Complex operator+(const Complex& c, double r);
	friend ostream& operator<<(ostream& out, const Complex& c)
	{
		out << c.Re << "+" << c.Im << "i";
		return out;
	}
};

Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

Complex operator+(double r, const Complex& c)
{
	Complex a;
	a.Re = r + c.Re;
	a.Im = c.Im;
	return a;
}
Complex operator+(const Complex& c, double r)
{
	Complex a;
	a.Re = r + c.Re;
	a.Im = c.Im;
	return a;
}

int main()
{
	Complex a(1, 3);
	Complex b(2.2, 5);
	Complex c = a + b;
	Complex d = a + 3.6;
	cout << a << "+" << b << "=" << c << endl;
	cout << 1.5 << "+" << b << "=" << 1.5 + b << endl;
	cout << a << "+" << 3.6 << "=" << d << endl;

}