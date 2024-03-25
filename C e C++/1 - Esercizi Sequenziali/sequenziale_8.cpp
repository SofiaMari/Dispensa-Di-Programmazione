#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int cateto1, cateto2, ipotenusa;
	cout<<"Inserisci la misura del primo cateto: ";
	cin>>cateto1;
	cout<<"Inserisci la misura del secondo cateto: ";
	cin>>cateto2;
	
	ipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
	
	cout<<"L'ipotenusa del triangolo rettangolo e': "<<ipotenusa<<endl;
}
