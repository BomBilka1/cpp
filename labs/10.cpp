#include <iostream>
#include <cmath>

using namespace std;
double f1(double x){
    return 1/((2+cos(x))*(3+cos(x)));
}

double f2(double x){
    return 1/(1+x*x);
}

double integral(int n, double a, double b, double i, double (*calculate)(double )){
	double result = 0;
	double h = (b-a)/n;
	
	
	while(i<=b){
        result += (*calculate)(i);
        

        if((round(i*100)/100)==-0.01){
            i = 0;
        } else {
            i = i+h;
        }
    }
    result *= h;
    return result;
}

int main()
{
    //1 
    double result;
    
    double (*calculate)(double ) = &f1;
    
    result = integral(100, 0, 2*M_PI, 0, calculate);
    cout << "Result 1: " << result << endl;
    
    
    calculate = &f2;
    result = integral(200, 1/sqrt(3), sqrt(3), 1/sqrt(3), calculate);
    cout << "Result 2: " << result << endl;
}
