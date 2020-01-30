/*
Alemania D 0
Brasil PP 1
Canadá CF 2
Catar A7 3
Chile CC 4
China B 5
Dinamarca OY 6
Ecuador HC 7
Emiratos Arabes A6 8
España EC 9
Estados Unidos N 10
Indonesia PK 11
Japón JA 12
México XA 13
Singapur 9V 14
Tailandia HS 15
"Alemania", "Brasil", "Canadá", "Catar", "Chile", "China", "Dinamarca", "Ecuador", "Emiratos Arabes", "España", "Estados Unidos", "Indonesia", "Japón", "México", "Singapur", "Tailandia" 
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string paises[16] = {"Alemania", "Brasil", "Canadá", "Catar", "Chile", "China", "Dinamarca", "Ecuador", "Emiratos Arabes", "España", "Estados Unidos", "Indonesia", "Japón", "México", "Singapur", "Tailandia" }; 
    double frecuencia [16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    ifstream file("aeropuerto.txt");
    string str; 
    int totalLines=0;
    while (getline(file, str))
    {   
        totalLines++;
        char firstLetter=str.at(0);
        string twoFirstLetters=str.substr(0,2);
        
        if(firstLetter=='D'){
            frecuencia[0]++;
        }else if(firstLetter=='B'){
            frecuencia[5]++;
        }else if(firstLetter=='N'){
            frecuencia[10]++;
        }else if(twoFirstLetters=="PP"){
                frecuencia[1]++;
        }else if(twoFirstLetters=="CF"){
                frecuencia[2]++;
        }else if(twoFirstLetters=="A7"){
            frecuencia[3]++;
        }else if(twoFirstLetters=="CC"){
            frecuencia[4]++;
        }else if(twoFirstLetters=="OY"){
            frecuencia[6]++;
        }else if(twoFirstLetters=="HC"){
            frecuencia[7]++;
        }else if(twoFirstLetters=="A6"){
            frecuencia[8]++;
        }else if(twoFirstLetters=="EC"){
            frecuencia[9]++;
        }else if(twoFirstLetters=="PK"){
            frecuencia[11]++;
        }else if(twoFirstLetters=="JA"){
            frecuencia[12]++;
        }else if(twoFirstLetters=="XA"){
            frecuencia[13]++;
        }else if(twoFirstLetters=="9V"){
            frecuencia[14]++;
        }else if(twoFirstLetters=="HS"){
            frecuencia[15]++;
        }
    }
    int i;
    int masRepetidos[5]={0,0,0,0,0};
    int veintePorciento=totalLines*.2;
    int j=0;
    for(i=0;i<16;i++){
        if(frecuencia[i]>=veintePorciento){
            masRepetidos[j]=i;
            j++;
        }
    }
    cout<<"Paises con vuelos más frecuentes"<<endl;
    for(i=0;i<5;i++){
        if(masRepetidos[i]!=0){
            j=masRepetidos[i];
            double fr=(frecuencia[j]/totalLines)*100;
            cout<<paises[j]<<": "<<frecuencia[j]<<" vuelos con una incidencia del "<< fr<<"%"<<endl;
        }
    }
    return 0;
}
