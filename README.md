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
    cout<<"           Masukkan Nama Kamu :  ";cin>>nama;
    cout<<"Berapa Lama Kamu Bermain :   \n";
    cout<<"masukkan jam :";
    cin>>jam;
    cout<<"masukkan menit :";
    cin>>menit;
    cout<<"masukkan detik :";
    cin>>detik;
    
    totJ=jam*1*5000;
    totM=menit*60;
    totD=detik*3600/30;
 
 
    cout<<"Anda Harus Membayar Sebesar :   Rp. ";
    totW=totJ+totM+totD;
    cout<<totW<<endl<<endl;
    cout<<"********************      TERIMA KASIH      **********************\n";
    cout<<"************* KAMI TUNGGU KEDATANGAN ANDA KEMBALI *************"
    ;cin>>w;
}
