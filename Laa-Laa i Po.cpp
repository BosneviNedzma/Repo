#include <iostream> 
#include <iomanip> 
#include <queue>
using namespace std; 
 
/*
Laa-Laa i Po igraju igru. Laa-Laa zamisli broj X, a Po mora naæi najveæi neparni broj Y koji dijeli X. Kako je Laa-
Laa ipak nešto starija, ona malo bolje poznaje svijet brojki pa zamišlja prevelike brojeve, ali zato Po ima dobre
starije prijatelje koji æe mu pomoæi!!!
Ulazni podaci
Putem tastature unosi se jedan prirodan broj X s maksimalno 9 cifara.
Izlazni podaci
Na zaslon je potrebno ispisati broj Y, odnosno najveæi neparni djelitelj broja X.
 */
 
 int najveci_neparni_djeljitelj (int n){
 	if (n%2==1){
 		return n; //ako je uneseni broj neparan, njegov najveci neparni djeljitelj je on sam, pa zbog toga i vracamo tu vrijednost
	 }
	 while (true){
	 	n /=2;
	 	if (n%2==1 || n==1){ 
	 	 return n; //dijelimo broj sa brojem dva dok ne naidjemo na neparan broj, ukoliko naidjemo na tacan uslov, ispisemo ga
		 }
		
	 }
 }
 
 int main(){
 	long long n; //posto je u zadatku receno da Laa-Laa daje prevelike brojeve, kao tip podatka uzet je tip long long koji zauzima 64 bita u memoriji
 	cout<<"Unesite broj velicine do 10 cifara: ";
 	while (true){
 		cin>>n;
 		if (n<1000000000 && n>0){
 			break; //ukoliko se zadovolji unos, prekini petlju i predji na glavni dio zadatka
		 }
		 cout<<"\nPogresan unos! Unesite barem jedan broj sa barem jednom cifrom, a maksimalno 10 cifara: ";
		
	 }
 cout<<"\nNajveci neparni broj koji dijeli uneseni broj jeste: "<<najveci_neparni_djeljitelj(n)<<endl;
return 0; 
}
