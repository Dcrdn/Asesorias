#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista;
    int i;
    int wanted;
    cout<<"¿Cuántos números quiéres que sumemos?"<<endl;
    cin>>wanted;
    int numero;
    for(i=0;i<wanted;i++){
        cout<<"Dime el número #"<<i+1<<": ";
        cin>>numero;
        lista.push_back(numero);
    }
    int suma=0;
    for (int num: lista){
        suma+=num;
    }

    cout<<"La suma de los números es: "<<suma<<endl;
    return 0;
}
