#include <iostream>
using namespace std;

int main(){
	float prezzo_litro;
	
	cout<<"Quanto costa la benzina al litro? ";
	cin>>prezzo_litro;
	
	cout<<"Per fare 100km si spendono: "<<(100/20)*prezzo_litro<<" euro"<<endl;
}
