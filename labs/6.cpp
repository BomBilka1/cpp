#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Postuslovie
	int n=0;
	double e=0.0001,a=0,an;
	do
	{
		an=a;
		n++;
		a=(2*n-1)/pow(2,n);
	}
	while (abs(an-a)>=e);
	cout<<"an = "<<an<<"\n";
	cout<<"an-1 = " <<a<<"\n";
	cout<<"n= "<<n<<"\n";
	//Preduslovie
	n=0;
	e=0.0001,a=0,an=1;
	while(abs(an-a)>=e)
	{
		an=a;
		n++;
		a=(2*n-1)/pow(2,n);
	}
	cout<<"an = "<<an<<"\n";
	cout<<"an-1 = " <<a<<"\n";
	cout<<"n= "<<n<<"\n";
	return 0;
	
}
