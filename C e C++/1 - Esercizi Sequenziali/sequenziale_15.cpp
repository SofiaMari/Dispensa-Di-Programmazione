#include <iostream>
using namespace std;

int main(){
	float prezzo_litro;
	int km_litro;
	
	cout<<"Quanto costa la benzina al litro? ";
	cin>>prezzo_litro;
	cout<<"Quanti km percorre l'auto con un litro? ";
	cin>>km_litro;
	
	cout<<"Per fare 100km si spendono: "<<(100/float(km_litro))*prezzo_litro<<" euro"<<endl;
}
