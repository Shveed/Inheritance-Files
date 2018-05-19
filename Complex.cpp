#include "stdafx.h"
#include "Complex.h"
using namespace std;

void printError()
{
	cout << "Error. Enter correct operation!" << endl;
};

void CreateComplex2() 
{
	cout << "Enter two complex numbers (x y x y):" << endl;
};

void CreateComplex1()
{
	cout << "Enter one complex number (x y)" << endl;
};

void printMenu()
{
	cout << "------------------------------------" << endl;
	cout << "Welcome to program 'ComplexCounter' " << endl;
	cout << "  First of all - choose operation " << endl;
	cout << "+ - addiction(+) " << endl;
	cout << "- - substraction(-)" << endl;
	cout << "* - multiplication(*)" << endl;
	cout << "/ - division(/)" << endl;
	cout << "M - module(m)" << endl;
	cout << "------------------------------------" << endl;
};

char whichOp(char op)
{
	cout << "Enter operation: ";
	cin >> op;
	return op;
};

MainComplex::MainComplex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}

MainComplex::~MainComplex()
{

}

Complex Complex::operator =(const Complex & other)
{
	this->real = other.real;
	this->imag = other.imag;
	return other;
}

Complex Complex::operator + (Complex &other)
{
	Complex temp;
	temp.real = this->real + other.real;
	temp.imag = this->imag + other.imag;
	return temp;
}

Complex Complex::operator - (Complex & other)
{
	Complex temp;
	temp.real = this->real - other.real;
	temp.imag = this->imag - other.imag;
	return temp;
}

Complex Complex::operator * (Complex & other)
{
	Complex temp;
	temp.real = (this->real * other.real - this->imag * other.imag);
	temp.imag = (this->real * other.imag + other.real * this->imag);
	return temp;
}

Complex Complex::operator / (Complex & other)
{
	Complex temp;
	temp.real = ((this->real*other.real + this->imag*other.imag) / (other.real*other.real + other.imag*other.imag));
	temp.imag = ((this->imag*other.real - this->real*other.imag) / (other.real*other.real + other.imag*other.imag));
	return temp;
}

ostream& operator <<(ostream & os, Complex &other)
{
	os << "Real: " << other.real << endl;
	os << "Imagine: " << other.imag << endl;
	os << "Complex number is: (" << other.real << ';' << other.imag << "i)" << endl;
	return os;
}

istream & operator >> (istream & os, Complex & other)
{
	os >> other.real >> other.imag;
	return os;
}

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);

void IntoTheFile(char op, Complex a, Complex b, Complex c)
{
	ofstream myfile;
	myfile.open("operations.txt");
	myfile << "Operation:" << op << endl;
	myfile << "First complex" << a << endl;
	myfile << "Second complex" << b << endl;
	myfile << "Result complex" << c << endl;
	myfile.close();
}


NewComp::NewComp()
{
	this->mod = 0.0;
}
NewComp::~NewComp()
{
}

double NewComp::complexMod(NewComp a)
{
	mod = sqrt(pow(a.real, 2) + pow(a.imag, 2));
	cout << "Modulo is: " << mod << endl;
	return mod;
}
