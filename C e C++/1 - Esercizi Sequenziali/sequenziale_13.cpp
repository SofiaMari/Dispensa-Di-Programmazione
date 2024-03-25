#include <iostream>
using namespace std;

int main(){
	int prezzo;
	float netto;
	
	cout<<"Inserisci il prezzo totale del libro"<<endl;
	cout<<"comprensivo dell'IVA al 19%: ";
	cin>>prezzo;
	
	netto = (float(prezzo)*100)/119;
	cout<<"Il prezzo netto del libro e': "<<netto<<"€"<<endl;
}
