#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista;
    int i=0;
    int numero;
    cout<<"Te pediré números para sumarlos hasta que quieras detenerte"<<endl;
    cout<<"Escribe 0 para deternos"<<endl;
    while(true){
        cout<<"Dime el número #"<<i+1<<": ";
        cin>>numero;
        if(numero==0){
            break;
        }
        lista.push_back(numero);
        i++;
    }
    int suma=0;
    for (int num: lista){
        suma+=num;
    }

    cout<<"La suma de los números es: "<<suma<<endl;
    return 0;
}
