#include<iostream>
using namespace std;

int main(){
	
	int tarjeta[16];
	int tam = 16, acumPar = 0, acumIm = 0, acumT = 0;
	
	
	for(int i = 0; i < tam; i++){
		cout<<"ingrese su tarjeta digito por digito: ";cin>>tarjeta[i];
	}

	for(int i = 0; i < tam; i++){
		cout<<tarjeta[i]<<endl;
	}
	
	for(int j = tam - 1; j >= 0; j--){
		int ayuda = 0;
		int camCa = tarjeta[j];
		
		if(j % 2 == 0){
			ayuda = camCa * 2;
			
			if(ayuda > 9){
				ayuda -= 9;
				acumPar += ayuda;
			}
			
			else{
			 	acumPar += ayuda;
			 }
		}
		
		else{
			ayuda = camCa;
			acumIm += ayuda;
		}
	}
	
	acumT = acumIm + acumPar;
	cout<<"La suma de los dijitos es: "<<acumT<<endl;
	
	if(acumT % 10 == 0){
		cout<<"Su tarjeta es valida";
	}
	else{
		cout<<"Su tarjeta no es valida bobo hpta";
	}
	
	
	
return 0;
}

