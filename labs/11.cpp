#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand ( time(0) );
	int n;
	cout<< "Введите размерность массива: ";
    cin>> n;
	double arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand () % -10 - rand () % 10;
        cout<< arr[i]<< " ";
    }

    cout <<"\n";
    cout<<"\n";
    int sum = 0;
    int min = arr[0];
    int count = (arr[0] > 0);
    for (int i = 1; i < n; i++)
    {
        int a = arr[i];
        if(a == 0) {
            min = a;
            sum = 0;
        } else {
            sum += a;
        }
}
	int b;
	for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
      {
        if(arr[i]>arr[j])
          {
       b=arr[j];
              arr[j]=arr[i];
              arr[i]=b;
           }
       }
   }
for(int j=0;j<n;j++)
 {
   cout<<arr[j]<<" ";
 }


    cout<<"\n"<<"Кол-во положительных: "<<count<<"\n";
    cout<<"Сумма: "<<sum;
}
