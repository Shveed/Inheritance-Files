#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void CreateComplex2();
void CreateComplex1();
void printMenu();
char whichOp(char op);

class MainComplex
{
protected:
	double real;
	double imag;
public:
	MainComplex() : real(0), imag(0) {}
	~MainComplex();
	MainComplex(double real, double imag);
};



class Complex : public MainComplex
{
public:
	Complex operator =(const Complex & other);
	Complex operator +(Complex & other);
	Complex operator -(Complex & other);
	Complex operator *(Complex & other);
	Complex operator /(Complex & other);

	friend ostream & operator << (ostream & os, Complex & other);
	friend istream & operator >> (istream & os, Complex & other);

	void printResult(Complex a)
	{
		cout << "Real:" << a.real << endl;
		cout << "Imag:" << a.imag << endl;
	}
};

void printMenu();

char whichOp(char op);

void printError();

void IntoTheFile(char op, Complex a, Complex b, Complex c);

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);


class NewComp : public Complex {
private:
	double mod;
public:
	double complexMod(NewComp a);
	NewComp();
	~NewComp();
};

#endif COMPLEX_H
