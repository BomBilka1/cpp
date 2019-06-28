//Задание 1
#include <iostream>
#include <cmath>
using namespace std;
int main() {
setlocale(0, "");
double a1, x, b1, a2, b2, y1, y2, l, n, m, p;
cout<<"y1=a1x+b1\n";
cout<<"a1: ";
cin>>a1;
cout<<"b1: ";
cin>>b1;
cout<<"y2=a2x+b2\n";
cout<<"a2: ";
cin>>a2;
cout<<"b2: ";
cin>>b2;
n=(abs(a2-a1));
m=(abs(1+a1*a2));
l=n/m;
p=asin(l)/acos(l);
if (a1==a2){
cout<<"Две прямые параллельны";
}
else if (a1==-1/a2){
cout<<"Две прямые перпендикулярны";
}
else if (n/m==1){
cout<<"Угол 45 градусов";
}
else{
cout<<"Угол "<<(p*180/M_PI)<<" градусов";
}


//Задание 2
cout<<"\n----------------------------------------------------------------------";
int k, a, b, c, d, j;
cout<<"\nВведите четырех значное число: "; 
cin>>k;
a= k/1000;
b=(k%1000)/100;
c=(k%100)/10;
d=(k%10);
(a<b && b<c && c<d && k<10000 && k>999 ) ? cout<<"True" : cout<<"False";
return 0;
}
