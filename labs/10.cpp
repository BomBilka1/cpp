#include <iostream>
#include <cmath>
using namespace std;
double f1(double x)
{
	return((1.0)/((2.0+cos(x))*(3.0+cos(x))));
}
double f2(double x)
{
	return((1.0)/(1.0+x*x));
}
double pr(double a, double b, int kol, double (*f)(double x))
{
	double x, h=(b-a)/kol, s=0;
	x = a+h;
	for (int i=1; i<kol; i++)
	{
		s+=x;
		x+=h;
	}
	return h*s;
}
int main()
{
	cout<<pr(0,2*M_PI,100,f1)<<endl;
	cout<<pr(1/sqrt(3),sqrt(3),200,f2)<<endl;
}
