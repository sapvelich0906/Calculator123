double sumary(double a, double b)
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
        double c = 1;	
        if (b>0)		
                for (int i = 0; i < b; i++)		
                        c = c*a;	
        if (b<0)	
                for (int i = 0; i < (-b); i++)			
                        c = c / a;	
        return c;
}
double squareroot(double a)
{	
        double i = 0;	
        while (i*i < a)		
                i = i + 0.000001;	
        return i;
}
double absolut(double a)
{	
        return ((a >= 0) ? a : -a);
}
double roundp(double a)
{	
        if (a < 0)
                a = -absolut(a);
        return a;
}
