#include <iostream>
using namespace std;

int main(){
	int base, altezza, perimetro;
	
	cout<<"Inserisci la base del rettangolo: ";
	cin>>base;
	cout<<"Inserisci l'altezza del rettangolo: ";
	cin>>altezza;
	
	perimetro = (base+altezza)*2;
	cout<<"Il perimetro del rettangolo e': "<<perimetro<<endl;
}
