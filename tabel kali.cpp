/* Tugas Praktikum 3 */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main() 
{
	int i,j,n;
	cout<< "=================================== \n";
	cout<< "          TABEL PERKALIAN          \n";
	cout<< "=================================== \n\n";
	cout<< "Masukkan banyak tabel : ";
	cin>>n;
	cout<< "\n\n";
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		cout<<setw(5)<<j*i;
		cout<<endl;
	}
	
	getch();
}
