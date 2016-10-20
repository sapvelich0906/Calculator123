// Calc2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double sumary(double a,double b)
{
	return a + b;

}
double differense(double a, double b)
{
	return a - b;

}
double multiplication(double a, double b)
{
	return a * b;

}
double quotient(double a, double b)
{
	return a / b;

}
double power(double a, double b)
{
	double c=1;
	if (b>0)
	for (int i = 0; i < b; i++)
		c = c*a;
	if (b<0)
	for (int i = 0; i < (-b); i++)
		c = c/a;
	return c;
}
double squareroot(double a)
{
	double i=0;
		while (i*i < a)
			i = i + 0.000001;
	return i;
}
double absolut(double a)
{
	return ((a >=0) ? a : -a);
}
double roundp(double a)
{
	if (a < 0)
		a = -absolut(a);
	return a;
}
int main()
{
	const double a = -2.5789623, b = 9.35785874, c= 5;
	cout << "a+b=" << roundp(sumary(a, b)) << endl;
	cout << "a-b=" << roundp(differense(a, b)) << endl;
	cout << "a*b=" << roundp(multiplication(a, b)) << endl;
	cout << "a/b=" << roundp(quotient(a, b)) << endl;
	cout << "a^c=" << roundp(power(a, c)) << endl;
	if (a >= 0)
		cout << "koren iz a " << squareroot(a) << endl;
	else
		cout << "koren izvlech nelzya" << endl;
    return 0;
}

