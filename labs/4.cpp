#include <iostream>
#include <cmath>
using namespace std;
long double fact(int N)
{
    if(N < 0) // åñëè ïîëüçîâàòåëü ââåë îòðèöàòåëüíîå ÷èñëî
        return 0; // âîçâðàùàåì íîëü
    if (N == 0) // åñëè ïîëüçîâàòåëü ââåë íîëü,
        return 1; // âîçâðàùàåì ôàêòîðèàë îò íóëÿ - íå óäèâëÿåòåñü, íî ýòî 1 =)
    else // Âî âñåõ îñòàëüíûõ ñëó÷àÿõ
        return N * fact(N - 1); // äåëàåì ðåêóðñèþ.
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
