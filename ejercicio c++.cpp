#include <iostream>

using namespace std;

int main () {


    float num1;
    float num2;
  
    cout  << "ingrese primer digito ";
    cin>> num1;


    cout<< "ingrese segundo digito ";
    cin>> num2;

    int suma = num1 + num2;
    cout<< suma <<endl; 
     
    int minus = num1 - num2;
    cout<< minus<<endl; 

    int multiply = num1 * num2;
    cout<< multiply<<endl; 
     
    float divide = num1 / num2;
    cout<< divide<<endl;
    

//ejercicio 2  ⁠Dado un precio de un artículo y un descuento (descuento del 15%), calcular el precio final después de aplicar.

    float desc = 15.00/100.00;

    float prenda;  

    cout<< "deme el valor de la prenda";
    cin>> prenda;

    float operacion = desc * prenda; 
    float precio_final = prenda - operacion;
    cout<< precio_final; 




    //ejercicio 3  ⁠Para una variable de valor 10, haga los siguientes pasos Aumentar en 5, reducir en 3, multiplicar por 2, divida entre 4.
    
    int variable = 10;
    int suma = variable + 5;
    int resta = suma - 3;
    int multiplicacion = resta * 2;
    float division = multiplicacion / 4;

    cout<<division;

    
     return 0;
 }

