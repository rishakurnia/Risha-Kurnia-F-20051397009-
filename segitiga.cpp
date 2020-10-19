/* Tugas 2 Praktek Pemrogaman Dasar */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;
int main (void)
{
	char pilih,ket[30];
	float alas,tinggi,keliling,luas,sisi_miring,menu;
	int sisi,s1,s2,s3;
	
	cout<< " -------------------------------------------- \n"<<endl<<endl;;
	cout<< " Program Menghitung Segitiga Siku-siku \n";
	cout<< " -------------------------------------------- \n"<<endl<<endl;;
	
	cout<< " MENU : \n";
	cout<< " 1. Hitung panjang sisi miring \n";
	cout<< " 2. Hitung Luas \n";
	cout<< " 3. Hitung Keliling \n";
	cout<< " 4. Keluar Program \n";
	cout<< "Pilih [1/2/3/4]: ";cin>>pilih;
	
	switch (pilih)
	{
		case '1' :
		{
			strcpy(ket,"Hitung panjang sisi miring");
			cout<<"Masukkan sisi A : ";cin>>s1;
			cout<<"Masukkan sisi B : ";cin>>s2;
			cout<<"sisi miring = "<<sqrt((s1*s1)+(s2*s2));
			break;
		}
		
		case '2' :
		{
			strcpy(ket,"Menghitung Luas");
			cout<<"Masukkan alas : ";cin>>alas;
			cout<<"Masukkan tinggi : ";cin>>tinggi;
			cout<<"luas = "<<0.5*alas*tinggi;
			break;
		}
		
		case '3' :
		{
			strcpy(ket,"Menghitung Keliling");
			cout<<"Masukkan sisi A : ";cin>>s1;
			cout<<"Masukkan sisi B : ";cin>>s2;
			cout<<"Masukkan sisi C : ";cin>>s3;
			cout<<"keliling = "<<s1+s2+s3;
			break;
		}
		
		case '4' :
		{
			strcpy(ket,"Keluar Program");
			cout<<"  >>>>>>>> PRESS ANY KEY TO CLOSE <<<<<<<< ";
			break;
		}
	}
	getch ();
	return 0;
}
