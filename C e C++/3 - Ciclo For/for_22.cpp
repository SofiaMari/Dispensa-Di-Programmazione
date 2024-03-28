#include <iostream>
using namespace std;

int main(){
	int voti, v, somma, Vinsuff=0, Ainsuff=0;
	float media;
	
	for(int i=0; i<10; i++){
		somma = 0;
		cout<<"Quanti voti ha l'alunno "<<i+1<<"? ";
		cin>>voti;
		for(int j=0; j<voti; j++){
			cout<<"Inserisci il voto "<<j+1<<": ";
			cin>>v;
			if(v<6){
				Vinsuff++;
			}
			somma+=v;
		}
		media = (float)somma/voti;
		cout<<"La media dell'alunno "<<i+1<<" e': "<<media<<endl;
		cout<<endl;
		
		if(media<6){
			Ainsuff++;
		}
	}
	
	cout<<"I voti insufficienti totali sono: "<<Vinsuff<<endl;
	cout<<"Gli alunni con una media insufficiente sono: "<<Ainsuff<<endl;
}
