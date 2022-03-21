#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Postoji šest permutacija bez ponavljanja brojeva 1, 2 i 3. To su 1,2,3; 1,3,2; 2,1,3; 2,3,1; 3,1,2 i 3,2,1. Napisat
program koji ispisuje sve permutacije bez ponavljanja brojeva 1,2,3,4 i 5 (ima ih 120).
*/


int main(){
	
int b;

	cout<<"Permutacije bez ponavljanja!\nBroj elemenata: ";
	cin>>b;
	vector<int>niz(b);
	for (unsigned i=0; i<niz.size(); i++)niz.at(i)=i+1; //punjenje u stek
	sort (niz.begin(), niz.begin()+b);
	for (unsigned 
	i=0; i<niz.size(); i++){
	 cout<<niz.at(i)<<' ';} //ispis prve linije

	cout<<endl;
	while (next_permutation(niz.begin(), 
	niz.begin()+b)){
	
		for (unsigned 
		i=0; i<niz.size(); i++)	{
		cout<<niz.at(i)<<' ';} //ostatak ispisa
			cout<<endl;
		}
		
	


	
	
	
	
	
	
	
	return 0;
}
