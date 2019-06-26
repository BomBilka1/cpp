#include <iostream>
using namespace std;
int main()
{
setlocale(0, "");
    for(int i = 6; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
            cout << '*';
        cout << '\n';
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
