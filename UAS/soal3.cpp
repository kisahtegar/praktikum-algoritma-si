#include <iostream>
#include <string>
using namespace std;

int main() {
    int nim;
	float nilai;
	char indeks, pil;
	string nama, matkul;
	pil = 'y';
	
	while(pil == 'y') {
        cout<<"-----------------------------------------"<<endl;
        cout<<"            INPUT DATA NILAI             "<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<" NIM          : ";cin>>nim;
        cout<<" Nama         : ";cin>>nama;
        cout<<" Mata kuliah  : ";cin>>matkul;
        cout<<"-----------------------------------------"<<endl;
        cout<<" Nilai        : ";cin>>nilai;
        
        if((nilai>=80)&&(nilai<=100)) indeks ='A';
        else if((nilai>69)&&(nilai<80)) indeks ='B';
        else if((nilai>59)&&(nilai<70)) indeks ='C';
        else if((nilai>49)&&(nilai<60)) indeks ='D';
        else indeks ='E';
        
        cout<<" Grade        : "<<indeks<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Input Data Lagi? (y/t) :  ";cin>>pil;
	} return 0;
}
