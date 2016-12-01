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
	if (b==0) 
		cout << "Error! Division by zero!" << endl;
	else
		cout << roundp(quotient(a, b)) << endl;	
        cout << roundp(power(a, c)) << endl;	
	if (a>=0)
		cout << " Square root of a " << squareroot(a) << endl;
	else
		cout << "Error! Square root of a negative number" << endl;	       	
return 0;
}
