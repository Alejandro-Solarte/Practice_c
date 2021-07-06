#include <iostream>

using namespace std;


int main (){
	int acumulado = 0;
	int numero;
	
	while(numero != -1){
		
		cout<<"Digite el numero "; cin>>numero;
	
			if (acumulado == 0){
				acumulado = acumulado + numero;
			} 
			
			else if (acumulado != 0){
				
				if (numero % 2 == 0){
					acumulado = acumulado + numero; 
				}
				
				else if (numero % 3 == 0){
					acumulado -= numero;
				}
				
				else if (numero % 5 == 0){
					acumulado *= numero;
				}
				
				else if (numero % 7 == 0){
					acumulado /= numero;	
				}
			}	
    	} 	
		cout<< acumulado <<endl;
    	
	return 0;
}
