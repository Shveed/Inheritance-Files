#include "stdafx.h"
#include "Complex.h"
using namespace std;

int main() {
	char op = ' ';
	char cont = ' ';
	Complex a, b, c;
	NewComp d;
	double *mod = new double;
	ofstream myfile;


	printMenu();
	do {
		op = whichOp(op);
		switch (op)
		{
		case '+':
			CreateComplex2();
			cin >> a >> b;
			c = a + b;
			cout << c;
			myfile.open("operations.txt");
			myfile << "Operation:" << op << endl;
			myfile << "First complex" << a << endl;
			myfile << "Second complex" << b << endl;
			myfile << "Result complex" << c << endl;
			myfile << "---------------------------------" << endl;
			break;
		case '-':
			CreateComplex2();
			cin >> a >> b;
			c = a - b;
			cout << c;
			myfile.open("operations.txt");
			myfile << "Operation:" << op << endl;
			myfile << "First complex" << a << endl;
			myfile << "Second complex" << b << endl;
			myfile << "Result complex" << c << endl;
			myfile << "---------------------------------" << endl;
			break;
		case '*':
			CreateComplex2();
			cin >> a >> b;
			c = a * b;
			cout << c;
			myfile.open("operations.txt");
			myfile << "Operation:" << op << endl;
			myfile << "First complex" << a << endl;
			myfile << "Second complex" << b << endl;
			myfile << "Result complex" << c << endl;
			myfile << "---------------------------------" << endl;
			break;
		case '/':
			CreateComplex2();
			cin >> a >> b;
			c = a / b;
			cout << c;
			myfile.open("operations.txt");
			myfile << "Operation:" << op << endl;
			myfile << "First complex" << a << endl;
			myfile << "Second complex" << b << endl;
			myfile << "Result complex" << c << endl;
			myfile << "---------------------------------" << endl;
			break;
		case 'M':
		case 'm':
			CreateComplex1();
			cin >> d;
			d.complexMod(d);
			myfile.open("operations.txt");
			myfile << "Operation: " << op << endl;
			myfile << d;
			myfile << "Modulo: " << d.complexMod(d) << endl;
			myfile << "---------------------------------" << endl;
			break;
		default:
			ofstream myfile;
			printError();
			break;
		}
		cout << "Would you like to continue?" << endl;
		cout << "If yes - say '1'" << endl;
		cout << "If no - say '0'" << endl;
		cin >> cont;
	} while (cont != '0');
	myfile.close();
	delete mod;
	return 0;
	
	
}
