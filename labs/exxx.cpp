#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int summa(int row, int size, int **matrix)
{
	int sum = 0, k = 0, f = 0;
	for (int i=0; i<size; ++i){
		sum += matrix[row][i];
		if (f < sum)
		{
			f = sum;
			k+=1;
		}
	}
return sum;
}
int main()
{
	int n;
	int m;
	cin>>m>>n;
	int**a = new int*[n];
	for (int i = 0; i<n; ++i)
		a[i] = new int [m];
	
	for (int i = 0; i<n; ++i)
		for (int j = 0; j<m; ++j)
			a[i][j] = rand()%100;
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << summa(1, 3, a) << endl;
	return 0;	
}
