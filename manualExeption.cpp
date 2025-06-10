#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;

    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian aka di eksekusi" << endl;
    }
    catch()
}