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
double power(double a, int c)
{	
        double a1 = 1;	
        if (c>0)		
                for (int i = 0; i < c; i++)		
                        a1 = a1*a;	
        if (c<0)	
                for (int i = 0; i < (-c); i++)			
                        a1 = a1 / a;
        return a1;
}
double squareroot(double a)
{	
        double i = 0;	
        while (i*i < a)		
                i = i + 0.000000001;
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
