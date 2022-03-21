#include <iostream>

using namespace std;

/*
Potrebno je napraviti program koji æe ispisati sve moguæe naèine na koje se prirodan broj N (1 &lt;= N &lt;= 20) može
rastaviti kao suma od K (1 &lt;= K &lt;= N) sabiraka koji su takoðer prirodni brojevi. Na primjer, moguæe rastave
prirodnog broja N = 5 na K = 3 sabirka glase 3+1+1, 2+2+1, 2+1+2, 1+3+1, 1+2+2 i 1+1+3.
*/
void rastava_prirodnog_broja (int a, int b, char* klasa,
						int index)
{
	if (index > a || b < 0)
		return; //da ne bismo stvorili beskonacnu pelju, ogranicimo se kada ce prestati sa radom

	if (index == a)
	{
		if(b == 0) //ako je broj jednak nuli, zavrsi program
		{
			klasa[index] = '\0';
			cout << klasa << " ";
		}
		return;
	}

	for (int i = 0; i <= 9; i++)
	{
		klasa[index] = i + '0';

		rastava_prirodnog_broja(a, b- i, klasa, index + 1); //pozivano rekurzivnu funkciju za sljedecu cifru
	}
}


void rastava_prirodnog_broja(int a, int b)
{
	char klasa[a + 1];//klasa u koju spremamo vrijednosti iz petlje
	for (int i = 1; i <= 9; i++)
	{
		klasa[0] = i + '0';
		rastava_prirodnog_broja(a, b - i, klasa, 1);
	}
}

int main()
{
	int a, b;

cout<<"Unesite prirodan broj: ";
cin>>a;
cout<<"\nUnesite na koliko cifara zelite rastaviti ovaj broj: ";
cin>>b;
cout<<endl;
	rastava_prirodnog_broja(b,a);

	return 0;
}

