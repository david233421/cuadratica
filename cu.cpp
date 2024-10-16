//este codigo pide el valor de a,b,c para clacular 
//la ecuacion cuadratica calcula y teda los resultados de x1 y x2

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    double a,b,c;
    double x1,x2;
    int p;
    cout<<"ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"ingrese el valor de c: "<<endl;
    cin>>c;
    p=sqrt(pow(b,2)-4*a*c);
    x1=(-b+p)/(2*a);
    x2=(-b-p)/(2*a);
    cout<<"el valor es: "<<x1<<endl;
    cout<<"el valor es: "<<x2<<endl;
  return 0;
}
