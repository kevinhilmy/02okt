#include <iostream>
using namespace std;

int main(){
    int i, N = 0, jumlah = 0;

    cout << "masukan banyak nilai: ";
    cin >> i;

   while (i>N)
   {
    if (i%2 != 0)
    {
        cout << i << " - ";
        jumlah = jumlah-i;
        i--;
    }
    cout << " " << i << " - ";
    jumlah = jumlah-i;
    i-=2;
   }
   jumlah = jumlah-i;
   cout << N << " = " << jumlah;
}
