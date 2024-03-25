#include <iostream>
using namespace std;

int main(){
	int cateto1, cateto2, area;
	cout<<"Inserisci la misura del primo cateto: ";
	cin>>cateto1;
	
	cateto2 = (cateto1*3)/5;
	
	area = (cateto1 * cateto2)/2;
	
	cout<<"L'area del triangolo rettangolo e': "<<area<<endl;
}
