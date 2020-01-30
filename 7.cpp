#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int lista[10];
    int i;
    cout<<"Me dirás 10 números y te diré la suma, el promedio y la desviación estandar de ellos"<<endl;
    for(i=0;i<10;i++){
        cout<<"Dime el número #"<<i+1<<": ";
        cin>>lista[i];
    }
    int suma=0;
    for(i=0;i<10;i++){
        suma+=lista[i];
    }
    double promedio=suma/10;

    double desviacion;
    double sumatoria=0;
    for(i=0;i<10;i++){
        float actual=lista[i];
        double restaXyPromedio=lista[i]-promedio;
        double cuadrado=restaXyPromedio*restaXyPromedio;
        sumatoria+=cuadrado;
    }
    desviacion=sqrt(sumatoria/9);


    cout<<"La suma de los números es: "<<suma<<endl;
    cout<<"El promedio de los números es: "<<promedio<<endl;
    cout<<"La desviación estandar de los números es: "<<desviacion<<endl;

    return 0;
}
