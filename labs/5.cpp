#include <iostream>
using namespace std;
int main()
{
setlocale(0, "");
int i = 6;
int j=7;
int k;
k=j;

while (i > 0)
{
k=k-1;
j=k;
k=0;
while (j > 0)
{
cout << '*';
j--;
k+=1;
}
cout << '\n';
i--;
}

int n, c=10, index=1, a=0, b=10, p=1, f;
 
cout<<"\nВведите натуральное число: ";
cin>>n;
do{

f=(n%b)/p;
b*=10;
p*=10;
(f<c) ? c=f : index+=1;
}
while((n/p)>0);
cout<<"MIN: "<<c<<endl;
cout<<"INDEX: "<<index;
    return 0;
}

