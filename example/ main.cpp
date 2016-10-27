#include <iostream>

#include "calculator.hpp"
using namespace std;


int main()
{	
		    double a, b;	
	      int c;	
	      cout << "vvedi a, b - veshestvennie, c-celoe" << endl;	
        cout << "a=";	
        cin >> a;	
        cout << "b=";	
        cin >> b;	
        cout << "c=";	
        cin >> c;	
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
