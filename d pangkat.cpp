/* Tugas Praktikum 3 */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int x,y,z,jumlah;
    cout<< "============================================================================ \n";
	cout<< "================= MENGHITUNG JUMLAH DERET BARIS BILANGAN =================== \n";
	cout<< "============================================================================ \n";
	cout<< "ENAM BARIS PERTAMA : \n";
	
     jumlah=0;
     for (x=1;x<=6;x++)   
{
	 y=3;
	 z=pow(x,y);
	 jumlah=jumlah+z;
     cout<<"\n\n";
	 cout<<x<<" Pangkat "<<y<<" = "<<z;	 
}
     cout<<"\n\n";
     cout<<"\n HASIL DARI PENJUMLAHAN 6 BARIS = "<<jumlah<<endl;
     cout<<"========================================================";

getch();
return 0;
}
