#include <iostream>
using namespace std;

int main(){
	int lato, area, perimetro;
	
	cout<<"Inserisci il lato del quadrato: ";
	cin>>lato;
	
	perimetro = lato*4;
	area = lato*lato;
	cout<<"Il perimetro del quadrato e': "<<perimetro<<endl;
	cout<<"L'area del quadrato e': "<<area<<endl;
}
