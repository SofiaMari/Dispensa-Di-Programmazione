#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int ore, minuti, secondi;
	cout<<"Inserisci il numero di ore: ";
	cin>>ore;
	cout<<"Inserisci il numero di minuti: ";
	cin>>minuti;
	cout<<"Inserisci il numero di secondi: ";
	cin>>secondi;
	
	cout<<"Valore in secondi: "<<ore*60*60 + minuti*60 + secondi<<endl;

}
