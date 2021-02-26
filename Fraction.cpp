#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

void Fraction::Display()
{
	cout << endl;
	cout << one << ". " << two << endl;
	cout << endl;
	cout << three << ". " << four << endl;
}

void Fraction::Init(int x, unsigned int y,int z,unsigned int w)
{
	one = x;
	two = y;
	three = z;
	four = w;
}

void Fraction::Read()
{
	int x, y,z,w;

	cout << "whole part of first num = "; cin >> x;
	cout << "fractional part of first num = "; cin >> y;
	cout << "whole part of second num = "; cin >> z;
	cout << "fractional part of second num = "; cin >> w;

	Init(x, y, z, w);
}

const char* Fraction::toString()
{
	stringstream sout; 
	
	sout << one << " + i * " << two << endl;
	sout << three << " + i * " << four << endl;
	
	return sout.str().c_str(); 
}

void Fraction::Comparison()
{
	if (one == three && two == four) cout << one << "."<<two<< " = " << three<<"."<<four;
	else if (one < three || one == three && two<four)   cout << one << "." << two << " < " << three << "." << four;
	else if (one > three || one == three && two > four)   cout << one << "." << two << " > " << three << "." << four;
}

void Fraction::getSub() 
{
	int a = one - three;
	int b = two - four;
	
	cout << "subtraction of numbers: ";
	cout << endl << a << endl << b << endl;
}