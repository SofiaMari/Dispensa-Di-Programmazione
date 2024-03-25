#include <iostream>
using namespace std;

int main(){
	float bM, bm, h;
	cout<<"Inserisci la dimensione della base maggiore: ";
	cin>>bM;
	
	//h=2*bm e h+bm = bM => sistema con sostituizione
	bm = bM/3;
	h = 2*bm;
	
	cout<<"L'area del trapezio e' "<<((bm+bM)*h)/2<<endl;
}
