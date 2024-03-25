#include <iostream>
using namespace std;

int main(){
	int perimetro, altezza, area, base;
	cout<<"Inserisci il perimetro del rettangolo: ";
	cin>>perimetro;
	
	cout<<"Inserisci l'altezza del rettangolo: ";
	cin>>altezza;
	
	base = (perimetro/2)-altezza;
	
	area = base * altezza;
	
	cout<<"L'area del rettangolo e': "<<area<<endl;
}
