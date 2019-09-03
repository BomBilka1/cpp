#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int summa(int row, int n, int m, double **matrix)
{
	double sum = 0, k, f = 0, g=0, o=-1;
	for (int row = 0; row<n; row++){
	    
	for (int i = 0; i<m; ++i){
		sum += matrix[row][i];
		cout<<"SUM="<<sum<<" ";
	}
	if (f < sum)
		{
			f = sum;
			cout<<"F="<<f<<" ";
		}
	else{
		o+=1;
	}
		sum=0;
		g+=1;
}
k=g-o;
return k;
}
int main()
{
	int n;
	int m;
	cin>>n>>m;
	double**a = new double*[n];
	for (int i = 0; i<n; ++i)
		a[i] = new double [m];
	
	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
			a[i][j] = 0+1+rand()%(100-0+1)-(rand()%((int)pow(10,2))/pow(10,2));;
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << summa(1, n, m, a) << endl;
	return 0;	
}
