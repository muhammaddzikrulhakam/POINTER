#include <iostream>
using namespace std;

int main ()
{
	int i, j, tot;
	int batas = 10 ;
	int *MuhammadDzikrul = &tot;
	int *Hakam = &j ;
	
	cout << "\n BY M DZIKRUL HAKAM";
	cout << "\n D4 Manajemen Informatika A";
	cout << "\n NIM : 19051397001 \n\n";
		
	cout << "Masukkan angka yang akan dikalikan = " ;
	cin >> j ;
	
	for (i=1; i<=batas; i++)	{
		tot = i*j ;
		cout << i << " x " << *MuhammadDzikrul << " = " << *Hakam << endl;
	}
	
	return 0;
}
