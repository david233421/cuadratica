#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    //declaro bariables
    double a,b,c;
    double x1,x2;
    //declaro bariable entera
    int p;
    //pido los balores de a,b,c
    cout<<"ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"ingrese el valor de c: "<<endl;
    cin>>c;
    //calculando
    p=sqrt(pow(b,2)-4*a*c);


    x1=(-b+p)/(2*a);
    x2=(-b-p)/(2*a);
    //INPRIMIENDO LOS RESULTADOS
    cout<<"el valor es: "<<x1<<endl;
    cout<<"el valor es: "<<x2<<endl;
  return 0;
}
