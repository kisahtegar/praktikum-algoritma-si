#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    a = 5000;
    b = 10;
    c = 3;

    d = b - c;
    e = a * c;

    cout<<"========================="<<endl;
    cout<<"=====> Data Barang <====="<<endl;
    cout<<"========================="<<endl;
    cout<<"Harga barang adalah : "<<a<<endl;
    cout<<"Jumlah barang adalah : "<<b<<endl;
    cout<<"Barang Terjual adalah : "<<c<<endl;
    cout<<"========================="<<endl;
    cout<<"Sisa Barang adalah : "<<d<<endl;
    cout<<"Jumlah Bayar adalah : "<<e<<endl;
    return 0;
}