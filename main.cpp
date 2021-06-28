#include <iostream>
using namespace std;
//1. Diseñe la funcion que calcule el cubo de un numero
//5x5x5=125


    int cubo (int num)
    {
        return (num*num*num);
    }

   int main(){
   {
       cout<<endl<<"El cubo de 5 es "<<cubo(5);
       cout<<endl<<"El cubo de 6 es "<<cubo(6);
       cout<<endl<<"El cubo de 7 es "<<cubo(7);
    }

    int num;
    cout<<endl<<"Ingrese un entero: ";
    cin>>num;
    cout<<endl<<"el cubo de "<<num <<" es "<<cubo(num);

    return 0;
       }
