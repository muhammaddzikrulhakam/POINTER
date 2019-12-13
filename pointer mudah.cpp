#include <iostream>
using namespace std;

int main ()
{
	int i, j, tot;
	int batas = 10 ;
	int *haped = &tot;
	int *ahmad = &j ;
		
	cout << "Masukkan angka yang akan dikalikan = " ;
	cin >> j ;
	
	for (i=1; i<=batas; i++)	{
		tot = i*j ;
		cout << i << " x " << *ahmad << " = " << *haped << endl;
	}
	
	return 0;
}
