#include <iostream>
using namespace std;

int main(){
	float dollari = 1.75;
	float sterline = 2.80;
	
	cout<<"Un signore possiede: "<<endl;
	cout<<"  - "<<dollari<<" dollari"<<endl;
	cout<<"  - "<<sterline<<" sterline"<<endl;
	
	cout<<"Il totale in euro e': "<<dollari*1.514 + sterline*2.52<<" euro"<<endl;
}
