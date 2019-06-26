//---------------------------------------------------------------------------------------------------------------------
//python
//---------------------------------------------------------------------------------------------------------------------
/*import math
xn = float(input("Vvedite znachenie X nach: "))
xk = float(input("Vvedite znachenie X kon: "))
dx = float(input("Vvedite shag dx: "))
r = 2
c = ("Tablica funkcii")
print(c)
if dx==0:
    print ("Error")
else:
    while xn!=xk+1:
        if xn<-5 and dx!=5:
            y = ((math.fabs(xn+5))/(xn+5))*(xn+5)
            print("X =",xn ,"Y =",y)
        if -3>=xn>=-5:
            y = (2-0)/(-4+6)
            print("X =",xn ,"Y =",y)
        if xn>=-3 and xn<=-3:
            y = xn*0+0
            print("X =",xn ,"Y =",y)
        if xn>-3 and xn<-1:
            y = -(r+(xn+1)**2)**(1/2) 
            print("X =",xn ,"Y =",y)
        if xn>=-1 and xn<=2:
            y = (4-0)/(4+-6)
            print("X =",xn ,"Y =",y)
        if xn>2 and xn<=5:
            y = ((2-0)/(-4+6))*(xn-4)
            print("X =",xn ,"Y =",y)
        xn = xn + dx
*/
//---------------------------------------------------------------------------------------------------------------------
//cpp
//---------------------------------------------------------------------------------------------------------------------
//while
#include <iostream>
#include <cmath>
using namespace std;
int main(){
setlocale(0, "");
	int xn, xk, dx, r=2;
	double y;
	cout<<"Введите значение X нач: ";
	cin>>xn;
	cout<<"Введите значение X кон: ";
	cin>>xk;
	cout<<"Введите шаг dx: ";
	cin>>dx;
	cout<<"Таблица функции\n";
	while (xn!=xk+1)
		{if (xn<-5 && dx!=5){
            y = ((abs(xn+5))/(xn+5))*(xn+5);
            cout<<"X ="<<xn<<" Y ="<<y;
            }
        if (-3>=xn>=-5){
            y = (2-0)/(-4+6);
            cout<<"\nX ="<<xn<<" Y ="<<y;
            }
        if (xn>=-3 && xn<=-3){
            y = xn*0+0;
            cout<<"\nX ="<<xn<<" Y ="<<y;
            }
        if (xn>-3 && xn<-1){
            y = -1*sqrt(r+pow((xn+1),2));
            cout<<"\nX ="<<xn<<" Y ="<<y;
            }
        if (xn>=-1 && xn<=2){
            y = (4-0)/(4+-6);
            cout<<"\nX ="<<xn<<" Y ="<<y;
			}
        if (xn>2 && xn<=5){
            y = ((2-0)/(-4+6))*(xn-4);
            cout<<"\nX ="<<xn<<" Y ="<<y;
            }
        xn = xn + dx;
//---------------------------------------------------------------------------------------------------------------------
//for
# include <cmath>
# include <iostream>
using namespace std;
int main() {
setlocale(0, "");
	double xn,xk,dx,r=2;
	double y;
	cout<<"Ââåäèòå íà÷àëüíóþ òî÷êó: ";
	cin>>xn;
	cout<<"Ââåäèòå êîíå÷íóþ òî÷êó: ";
	cin>>xk;
	cout<<"Ââåäèåò øàã: ";
	cin>>dx;
	
	for (;xn<=xk;xn=xn+dx){
		if (xn<-5 && dx!=5){
			y = ((abs(xn+5))/(xn+5))*(xn+5);
		
		}
		if (-3>=xn>=-5){
			 y = (2-0)/(-4+6);
		
		}
		if (xn>=-3 && xn<=-3){
			y = xn*0+0;
			
		}
		if (xn>-3 && xn<-1) {
			y = -1*sqrt(r+pow((xn+1),2));
			
		}
		if (xn>=-1 && xn<=2){
			y = (4-0)/(4+-6);
			
		}
		if (xn>2 && xn<=5){
            y = ((2-0)/(-4+6))*(xn-4);
            
        }
		cout<<'\t'<<round(xn*10)/10<<'\t'<<round(y*100000)/100000<<endl;
	}
return 0;

}
//---------------------------------------------------------------------------------------------------------------------
