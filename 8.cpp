#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista;
    int i;
    cout<<"Me dirás 10 números y te diré la suma de ellos"<<endl;
    int numero;
    for(i=0;i<10;i++){
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
