#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    cout<<"Podaj ile wyrazow: ";
    int number;
    cin>>number;

    bool v = true;

    for(int i = 0; i < number; i++){
        cout<<"Podaj wyraz do sprawdzenia: "<<i+1<<endl;
        string wyraz;
        cin>>wyraz;
        int dlugosc = wyraz.length();
        //cout<<dlugosc<<endl;
           // for(int j = 0; j <= dlugosc / 2; j++){} dziala bez tego gowna
            if(wyraz[i] != wyraz[(dlugosc -1) -i]){
                cout<<"To nie jest palindrom"<<endl;
            }
            else{
                cout<<"To jest palindrom"<<endl;
            }
    }
return 0;
}
