#include <iostream>

using namespace std;

int main(){
	//izquierda valores negativos - derecha valores positivos - posicion inicial es 0° - depues de 360° reicinia 
	//El usuario puede controlar el movimiento del brazo con 3  movimientos indicados por las letras D, I, S
	//D junto a un valor en grados aplica un movimiento a la derecha
	//I junto a un valor en grados aplica un movimiento a la izquierda 
	//S termina movimientos 
int posI = 0, grados, tres = 360;

char mov;
	
cout<<"Hay tres tipos de comando"<<endl;
cout<<"D para moverse a la derecha"<<endl;
cout<<"I para moverse a la izquierda"<<endl;
cout<<"S para terminar el programa"<<endl;
cout<<"Cual movimiento desea realizar: "; cin>>mov;

	while(mov != 'S'){
		switch (mov){
			case 'D':
				cout<<"Digite los grados: "; cin>>grados;
				posI = posI + grados;
				
				if(posI >= tres){
					posI = posI - tres;
				}
				cout<<"Cual movimiento desea realizar: "; cin>>mov;
			break; 	
			
			
			case 'I':
				cout<<"Digite los grados: "; cin>>grados;	
				posI = posI - grados;
				
				if(posI <= 0){
					posI = tres + posI;
				}
				cout<<"Cual movimiento desea realizar: "; cin>>mov;
			break;
			
			default:
				cout<<"La letra ingresada no es valida";
		} 
		
	}
	
cout<<"La posicion final del brazo robotico es: "<<posI<<"°";

return 0;
}
