#include <iostream>
#include <cmath>
using namespace std;
double sumR(double k)
{
	double slag;
	if (k>= 1)
	{
		slag = ((abs(cos(pow(k,2)-3.8)))/(4.5))-9.7*sin(k-3.1);
		return slag + sumR(k-1);
	}
	else
		return 1;
}
double sum(double k)
{
	double x=1;
	while(k>=1)
	{
		x+=((abs(cos(pow(k,2)-3.8)))/(4.5))-9.7*sin(k-3.1);
		k--;
	}
	return x;
}
int main ()
{
	double  n=10;
	cout << "sumR= " << sumR(n) <<endl;
	cout << "sum= " << sum(n) <<endl;
}
