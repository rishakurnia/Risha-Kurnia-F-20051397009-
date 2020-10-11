#include<iostream>
using namespace std;
int main (void)
{
    char nama[14];
    int totW;
    int jam,totJ;
    int menit,totM;
    int detik,totD;
    int w;
 
 	cout<<"  Risha Kurnia Fitri  \n";
 	cout<<"  NIM : 20051397009   \n";
 	
    cout<<"          **********   WELCOME TO CANDY NET   **********"<<endl<<endl;
 
 
    cout<<"*******************************************************************\n";
    cout<<"                   Tarif Rp 5000  per 1 jam \n\n";
    cout<<"********************************************************************\n\n\n";
    cout<<"Nama : Bagus \n";
    cout<<"Waktu Mulai	: 12.00 \n";
    cout<<"Waktu Selesai	: 14.00 \n";
    cout<<"Durasi Jam   : 2 \n";
    cout<<"Durasi Menit : 00 \n";
    cout<<"Durasi Detik : 00 \n";
    
    totJ=2*5000;
    totM=00;
    totD=00;
 
 
    cout<<"Anda Harus Membayar Sebesar :   Rp. ";
    totW=totJ+totM+totD;
    cout<<totW<<endl<<endl;
    cout<<"********************      TERIMA KASIH      **********************\n";
    cout<<"************* KAMI TUNGGU KEDATANGAN ANDA KEMBALI *************"
    ;cin>>w;
}
