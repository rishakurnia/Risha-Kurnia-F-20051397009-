/* Tugas Praktikum 3 */
/* Risha Kurnia Fitri */
/* NIM : 20051397009 */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main() 
{
int a,c,n,i,j;
	cout<< "________________________________ \n";
	cout<< " \n        Segitiga Angka \n";
	cout<< "________________________________ \n\n";
	cout<< "Masukkan Angka Segitiga : ";
	cin>>a;
	cout<< "Masukkan tinggi segitiga : ";
	cin>>n;
	cout<<"\n";
	for (i=1; i<=a;i++)
	{
	for (j=1; j<=i;j++)
		{
		cout<<j<<" ";
		}
		cout<<" \n";
	}
	for (i=n-1;i>=1;i--)
	{ 
	for (j=1;j<=i;j++)
		{
		cout<<j<<" ";
		}
	cout<<" \n";
	}
}
