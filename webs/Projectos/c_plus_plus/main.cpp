#include <iostream>
using namespace std;

int main(){

int nv[6];
for(int i = 0; i < 5; i++){
	cout << "Digito: "; cin >> nv[i];
}
for(int x = 0 ; x < 20;x++){
	for(int i = 0; i < 5; i++){
	
		if (nv[i] < nv[i+1]){
			int aux = nv[i+1];
			nv[i+1]=nv[i];
			nv[i]= aux;
		}
}
}
	for(int i = 0; i < 5; i++){
		cout <<"Ordenado: "<<nv[i]<<endl;
	}
	
	return 0;
}
