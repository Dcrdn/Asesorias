#include <iostream>

using namespace std;

int main() {
    int lista[10];
    int i;
    cout<<"Me dirás 10 números y te diré la suma de ellos"<<endl;
    for(i=0;i<10;i++){
        cout<<"Dime el número #"<<i+1<<": ";
        cin>>lista[i];
    }
    int suma=0;
    for(i=0;i<10;i++){
        suma+=lista[i];
    }
    cout<<"La suma de los números es: "<<suma<<endl;
    return 0;
}
