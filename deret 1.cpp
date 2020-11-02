/* Tugas Praktikum 3 */
/* Program Menghitung Jumlah deret bilangan */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,n,i;
	int jumlah;
	
	cout<< "________________________________ \n";
	cout<< "\n Operasi Hitung Deret Bilangan \n";
	cout<< "________________________________ \n\n";
	cout<< "Masukkan suku pertama : ";
	cin>>a;
	cout<< "Masukkan beda : ";
	cin>>b;
	cout<< "Masukkan jumlah deret ke-n : ";
	cin>>n;
	
	cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    
    for(i=0; i<n-1; i++)
	{
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
     
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
     
    getch();
    return 0;    
}
