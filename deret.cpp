#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "========PROGRAM DERET========" << endl;
    cout << "Masukkan nilai: ";
    cin >> n;
    cout << "\n=======OUTPUT=======\n" << endl;
    
    for (int i = 1; i <= n; i++) { // Loop untuk baris
        for (int j = 1; j <= i; j++) { // Loop untuk kolom
            cout << j << " ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }
    
    return 0;
}

