#include <iostream>
#include <cmath>
using namespace std;
long double fact(int N)
{
    if(N < 0) 
        return 0;
    if (N == 0)
        return 1; 
    else 
        return N * fact(N - 1);
}
int main(){
	int znak=-1;
	double s=0, eps=0.0001, x, slag, N, k;
	do {
		cin>>x;
	}
	while (abs(x)>=1);
	do {
		N=0;
		k=1;
		slag=znak*(pow(3,N)*pow(x,k))/fact(N);
		k=k+2;
		N=N+2;
		s+=slag;
		znak=-znak;	
	}
	while (abs(slag)>eps);
	s=s*-1;
	cout<<s<<endl;
	cout<<x*cos(3*x);
	return 0;
}		
