/////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту - main

#include <iostream>
#include "Fraction.h"


using namespace std;

int main()
{
	
	Fraction v;
	v.Read();
	v.Display();
	v.toString();
	v.getSub() ;
	v.Comparison();

	return 0;
}