#include <iostream>
#include <cmath>
using namespace std;
double prodR(double k1)
{
	double slag;
	if (k1>= 1)
	{
		slag = ((abs(cos(pow(k1,2)-3.8)))/(4.5))-(9.7*sin(k1-3.1));
		return slag + prodR(k1-1);
	}
	else
		return 1;
}
double prod(double k1)
{
	double x=1;
	while(k1>=1)
	{
		x+=((abs(cos(pow(k1,2)-3.8)))/(4.5))-(9.7*sin(k1-3.1));
		k1--;
	}
	return x;
}
int main ()
{
	double  k=10;
	cout << "prodR= " << prodR(k) <<endl;
	cout << "prod= " << prod(k) <<endl;
}
