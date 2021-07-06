#include <iostream>

using namespace std;

int main(){
	
	int turnos = 2, acumulado = 0, npines, bolosA, bolosB, bolosC, bolosD, bolosE, bolosF, bolosG, bolosH; 
	
	for(int i = 0; i < turnos; i++){
		cout<<"El numero 1 es: Moñona"<<endl;
		cout<<"El numero 2 es: Media"<<endl;
		cout<<"El numero 3 es: Tiro normal"<<endl;
		cout<<"El numero 4 es: Ultimo turno"<<endl;
		cout<<"Que fue su turno: "; cin>>npines;
	
			if(npines == 1){
			
				acumulado += 10;
				cout<<"Cuantos bolos derribó en la primera jugada del siguiente turno: "; cin>> bolosA;
				cout<<"Cuantos bolos derribó en la segunda jugada del siguiente turno: "; cin>> bolosB;
				acumulado = acumulado + bolosA + bolosB;
			}
				
			else if(npines == 2){
			
				acumulado += 10;
				cout<<"Cuantos bolos derribó en siguiente turno: "; cin>> bolosC;
				acumulado = acumulado + bolosC;
			}
			
			else if(npines == 3){
				cout<<"Cuantos bolos derribó en la primera jugada: "; cin>> bolosD;
				cout<<"Cuantos bolos derribó en la segunda jugada: "; cin>> bolosE;
				acumulado = acumulado + bolosD + bolosE;
			}
			
			else if(npines == 4){
				cout<<"Cuantos bolos derribó en la primera jugada: "; cin>> bolosF;
				cout<<"Cuantos bolos derribó en la segunda jugada: "; cin>> bolosG;
				cout<<"Cuantos bolos derribó en la tercera jugada: "; cin>> bolosH;
				acumulado = acumulado + bolosF + bolosG + bolosH;
			}
			
			else{
			cout<<"No existe jugada"; 
			}
		}
		
	cout<<"El jugador obtuvo un total de: "<<acumulado<<" puntos";
	
	
	return 0;
}
