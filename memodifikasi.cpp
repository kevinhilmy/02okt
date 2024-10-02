#include <iostream>
using namespace std;

int main(){
    int i, N, jumlah = 0;
    i = 1;
    
    cout << "Masukan Banyak Nilai: ";
    cin >> N;

    while (i<N)
    {
        cout << i*2 << " + ";
        jumlah = jumlah+(i*2);
        i++;
    }
    jumlah = jumlah + (i * 2);
    cout << i*2 << " = " << jumlah << endl;

    double rata = jumlah / N;
    cout << "rata ratanya adalah " << jumlah << "/" << N << " = " << rata;
}
