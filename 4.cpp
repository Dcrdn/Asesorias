#include <iostream>

using namespace std;

int main() {

    float tempFar;
    cout<<"Dime la temperatura en Farenheit para convertir a Celcius:"<<endl;
    cin>>tempFar;
    float celcius=(tempFar-32)*0.5555555555;
    cout<<"La temperatura en Celcius es: "<<celcius<<endl;
    return 0;
}
