#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int kol,max,maxn;
	cout << "‚ўҐ¤ЁвҐ Є®«ЁзҐбвў® н«Ґ¬Ґ­в®ў ¬ ббЁў : ";
	cin >> kol;
	int a[kol];
	srand(time(NULL));
	cout <<"main mass"<<endl;
	for (int i=0;i<kol;i++)
	{
		a[i]=rand()%10-rand()%10;
		cout << setw(5) << a[i];
	}
	cout << endl;
	for (int i=0;i<kol;i++)
	{
		if (a[i]%2==0)
		{
			max=a[i];
			break;
		}
	}
	for (int i=0;i<kol;i++)
	{
		if (a[i]%2!=0)
		{
			maxn=a[i];
			break;
		}
	}
	for (int i=0;i<kol;i++)
	{
		if (a[i]%2==0)
		{
			if (a[i]>max)
			{
				max=a[i];
			}
		}
		else
		{
			if (a[i]<maxn){maxn=a[i];}
		}
	}
	cout << endl <<"Њ ЄбЁ¬ «м­®Ґ зҐв­®Ґ  зЁб«®"<<'\t'<<max<<endl<<"ЊЁ­Ё¬ «м­®Ґ ­ҐзҐв­®Ґ  зЁб«®"<<'\t'<<maxn;
}
