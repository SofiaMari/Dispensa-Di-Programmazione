#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int n, e, cont=0;
	cout<<"Quante volte vuoi lanciare il dado? ";
	cin>>n;
	srand(time(NULL));
	cout<<endl;
	for(int i=0; i<n; i++){
		//formula: rand()%(max-min+1)+min;
		e = rand()%(6-1+1)+1;
		cout<<"Estrazione "<<i+1<<": "<<e<<endl;
		if(e==6){
			cont++;
		}
	}
	cout<<"Il 6 e' stato estratto "<<cont<<" volte"<<endl;
	
}
