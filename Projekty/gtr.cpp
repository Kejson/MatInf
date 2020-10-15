#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

bool isPrime(int number){
    for(int i = 2; i<number; i++){
        if(number%i == 0){
            return false;
        }
    }
        return true;
}

int main(){

    const int row = 3;
    const int column = 3;
    int tab[row][column];

      srand(time(NULL));
    int random = rand() % 10 +1;
   //cout<<random<<endl;

    int dodaj = 0;
   for(int j = 0; j<row; j++){
       for(int k = 0; k<column; k++){
           tab[j][k] = random + dodaj;
           dodaj++;
       }
   }

    for(int i = 0; i<row; i++){
       for(int j = 0; j<column; j++){
           if(isPrime(tab[i][j]) == true){
              cout<<tab[i][j]<<endl;
           }
       }
   }


    for(int o = 0; o<row; o++){
       for(int u = 0; u<column; u++){
           cout<<tab[o][u] << " ";
       }
       cout<<endl;
   }
    return 0;
}
