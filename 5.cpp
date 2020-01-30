#include <iostream>

using namespace std;

int main() {

    float tempFar;
    cout<<"Dime la temperatura en Farenheit para convertir a Celcius:"<<endl;
    cin>>tempFar;
    float celcius=(tempFar-32)*0.5555555555;
    cout<<"La temperatura en Celcius es: "<<celcius<<endl;
    if(celcius<=0){
        cout<<"A esa temperatura a nivel del mar, el agua es solida"<<endl;
    }else if(celcius>0 && celcius<100){
        cout<<"A esa temperatura a nivel del mar, el agua es líquida"<<endl;
    }else{
        cout<<"A esa temperatura a nivel del mar, el agua es gas"<<endl;
    }
    return 0;
}
