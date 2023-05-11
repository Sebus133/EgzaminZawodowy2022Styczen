

#include <iostream>
using namespace std;


void szukajNajwiekszej(int tablica[]) {

   
    int najwieksza = 0;
    int pomocnicza = tablica[0];
    for (int i = 0;i < 10;i++) {
       
            if (pomocnicza < tablica[i]) {
                pomocnicza = tablica[i];
                
            }
           
            
        }
    
    najwieksza = pomocnicza;
    cout << " najwieksza liczba to: " << najwieksza << endl;;

}
void sortuj(int tablica[]) {
    int pomocnicza;


    for (int i = 0;i < 9;i++) {    
        pomocnicza = i;
        for (int j = i + 1;j < 10;j++) {
            if (tablica[j] < tablica[pomocnicza]) {
                pomocnicza = j;
            }
        }
       
        swap(tablica[i], tablica[pomocnicza]);
    }

    cout << "posortowana tablica: " << endl;
    for (int i = 0;i < 10;i++) {
        cout << tablica[i] << ",";
    }

}



int main()
{
    int tablicaWpisanych[10];
    int a=0;
    cout << "Podaj 10 wartości dla tablicy: ";
   
    for (int i = 0;i < 10;i++) {
        cin >> a;
        cout << endl;
        tablicaWpisanych[i] = a;
    }
    cout << "nieposrotowane:";
    for (int i = 0;i < 10;i++) {
        cout << tablicaWpisanych[i] << ",";
    }
    szukajNajwiekszej(tablicaWpisanych);
    sortuj(tablicaWpisanych);
    
    


    
}
