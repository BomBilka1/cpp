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
int n, _min, max, s,count=0, index=0;
 
cout<<"\nВведите натуральное число: ";
cin>>n;
_min=n%10;
for(;n>0;n/=10,count++){
    s=n%10;
    if(s<_min){
        _min=s;
        index=count;
    }
}

cout<<"min: "<<_min<<"\n";
cout<<"index: "<<count-index;
    
    return 0;
}
