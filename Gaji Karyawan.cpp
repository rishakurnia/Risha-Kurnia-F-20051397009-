/* Tugas 2 Praktek Pemrogaman Dasar */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (void)
{
	char nama[15],ket[30],gol;
	int jkerja,jlembur;
	int gutama,glembur,gkerja,totgaji;

	cout<< " ********** Selamat Datang di PT. Makmur ********** "<<endl<<endl;;
	cout<< " ********** Gaji Karyawan ********** "<<endl<<endl;;
	
	cout<< "Masukkan Nama :  ";
	cin>>nama;
	;cout<< "Masukkan Golongan [A/B/C/D] :  ";
	cin>>gol;
	;cout<< "Masukkan Jam Kerja :  \n";
	cin>>jkerja;
	
	switch (gol)
	{
		case 'A' :
		{
			gutama = 5000;
			break;
		}
		
		case 'B' :
		{
			gutama = 7000;
			break;
		}
		
		case 'C' :
		{
			gutama = 8000;
			break;
		}
		
		case 'D' :
		{
			gutama = 10000;
			break;
		}
	}
	
	if (jkerja>48){
		jlembur=jkerja-48;
	}else{
		jlembur=0;
}
	gkerja=jkerja*gutama;
	glembur=jlembur*4000;
	totgaji=gkerja+glembur;
	
	cout<<"\n \n";
	cout<< "Nama Karyawan : " <<nama<<endl;
	cout<< "Kode Golongan : " <<gol<<endl;
	cout<< "Gaji Kerja : " <<gkerja<<endl;
	cout<< "Gaji Lembur : " <<glembur<<endl;
	cout<< "Total Gaji Anda : Rp. "<<totgaji<<endl;

	cout<< " \n\n ************ TERIMA KASIH ************ \n";
	cout<< " ********** SENGANGAT TERUS :) ********** ";
	getch()
	;return 0;
}
	
	

