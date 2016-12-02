#include <iostream>

#include "calculator.hpp"
using namespace std;


int main()
{
	double a, b;	
	int c;	
        cin >> a;		
        cin >> b;	       	
        cin >> c;	
        cout << roundp(sumary(a, b)) << endl;	
        cout << roundp(differense(a, b)) << endl;	
        cout << roundp(multiplication(a, b)) << endl;
	cout << quotient(a, b) << endl;	
        cout << roundp(power(a, c)) << endl;	
	cout << squareroot(a) << endl;	       	
	return 0;
}
