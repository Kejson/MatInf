#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"Podaj liczby do tablicy: ";
    int number;
    cin>> number;
    cout<<"Ilosc przesuniec: ";
    int przesuniete;
    cin>>przesuniete;
    int iloscPrzesuniec = przesuniete;
    int tab[number];
    int pierwszawartosc;

    for(int i =0; i<number; i++){
        cout<<"Podaj co chcesz wpisac do tablicy o indeksie: "<<i<<endl;
        cin>>tab[i];
    }
    system("cls");
    for(int j = 0; j<iloscPrzesuniec; j++){
        pierwszawartosc = tab[0];
        for(int i =0; i<number-1; i++){
            tab[i] = tab[i+1];
        }
        tab[number-1] = pierwszawartosc;
    }
    for(int k =0; k<number; k++){
        cout<<tab[k]<<endl;
    }
return 0;
}
