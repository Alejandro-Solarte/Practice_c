#include <iostream>

using namespace std;

int main(){
//canasta familiar (código 101) tiene 30% de descuento = 0.3
//aseo (código 103) tiene 20% de descuento = 0.2
//ropa (código 201) tiene 25% de descuento = 0.25
//electrodomésticos (código 301) tienen 10% de descuento = 0.1
//muebles (código 302) tienen 15% de descuento = 0.15
//Entre 5 - 10 unidades 3% de descuento = 0.03
//Entre 11 - 24 unidades 5% de descuento = 0.05
//más de 25 unidades 10% de descuneto = 0.1
int total, descuentos, numP, cod, numCF, proCF, totalCF, desCF = 0, numAS, proAS, totalAS, desAS = 0;
int numRP, proRP, totalRP, desRP = 0, numEL, proEL, totalEL, desEL = 0, numMU, proMU, totalMU, desMU = 0;
int desToCF = 0, desToAS = 0, desToRP = 0, desToEL = 0, desToMU = 0, totalG;

	cout<<"Cuantos productos lleva el cliente? "; cin>>numP;
	cout<<"Canasta familiar (codigo 101)"<<endl;
	cout<<"Aseo (codigo 103)"<<endl;
	cout<<"Ropa (codigo 201)"<<endl;
	cout<<"Electrodomesticos (codigo 301)"<<endl;
	cout<<"Muebles (codigo 302)"<<endl;
	
	for(int i = 0; i < numP; i++){
		
		cout<<"Cual es el codigo del producto: "; cin>> cod;
		
		switch(cod){
			case 101:
				cout<<"Usted selecciono Canasta familiar"<<endl;
				cout<<"Cuantos productos va a llevar de canasta familiar? "; cin>>numCF;
				
				for(int i = 0; i < numCF; i++){
					cout<<"Cuanto es el valor del producto? "; cin>>proCF;
					totalCF = totalCF + proCF;
					desCF = desCF + (proCF * 0.3);
					
					if(numCF >= 5 && numCF <= 10){
						desToCF = totalCF * 0.03;
					}
					
					else if(numCF >=11 && numCF <=24){
						desToCF = totalCF * 0.05;
					}
					
					else if(numCF >= 25){
						desToCF = totalCF * 0.1;
					}
				}
				
				cout<<"Total de este producto: "<<totalCF<<endl<<"Descuento del producto: "<<desCF;
			
			break;
			
			case 103:
				cout<<"Ustes selecciono Aseo"<<endl;
				cout<<"Cuantos productos va a llevar de aseo? "; cin>>numAS;
				
				for(int i = 0; i < numAS; i++){
					cout<<"Cuanto es el valor del producto? "; cin>>proAS;
					totalAS = totalAS + proAS;
					desAS = desAS + (proAS * 0.2);
					
					if(numAS >= 5 && numAS <= 10){
						desToAS = totalAS * 0.03;
					}
					
					else if(numAS >=11 && numAS <=24){
						desToAS = totalAS * 0.05;
					}
					
					else if(numAS >= 25){
						desToAS = totalAS * 0.1;
					}
				}
			
			break;
			
			case 201:
				cout<<"Usted selecciono Ropa"<<endl;
				cout<<"Cuantos productos va a llevar de ropa? "; cin>>numRP;
				
				for(int i = 0; i < numRP; i++){
					cout<<"Cuanto es el valor del producto? "; cin>>proRP;
					totalRP = totalRP + proRP;
					desRP = desRP + (proRP * 0.25);
					
					if(numRP >= 5 && numRP <= 10){
						desToRP = totalRP * 0.03;
					}
					
					else if(numRP >=11 && numRP <=24){
						desToRP = totalRP * 0.05;
					}
					
					else if(numRP >= 25){
						desToRP = totalRP * 0.1;
					}
				}
				
			break;
			
			case 301:
				cout<<"Ustes selecciono Electrodomesticos"<<endl;
				cout<<"Cuantos productos va a llevar de electrodomesticos? "; cin>>numEL;
				
				for(int i = 0; i < numEL; i++){
					cout<<"Cuanto es el valor del producto? "; cin>>proEL;
					totalEL = totalEL + proEL;
					desEL = desEL + (proEL * 0.1);
					
					if(numEL >= 5 && numEL <= 10){
						desToEL = totalEL * 0.03;
					}
					
					else if(numEL >=11 && numEL <=24){
						desToEL = totalEL * 0.05;
					}
					
					else if(numEL >= 25){
						desToEL = totalEL * 0.1;
					}
				}
				
			break;
			
			case 302:
				cout<<"Usted selecciono Muebles"<<endl;
				cout<<"Cuantos productos va a llevar de muebles? "; cin>>numMU;
				
				for(int i = 0; i < numMU; i++){
					cout<<"Cuanto es el valor del producto? "; cin>>proMU;
					totalMU = totalMU + proMU;
					desMU = desMU + (proMU * 0.15);
					
					if(numMU >= 5 && numMU <= 10){
						desToMU = totalMU * 0.03;
					}
					
					else if(numMU >=11 && numMU <=24){
						desToMU = totalMU * 0.05;
					}
					
					else if(numMU >= 25){
						desToMU = totalMU * 0.1;
					}
				}
				
			break;
			
			default: 
				cout<<"Este Codigo no existe"<<endl;
		
		}	
	}
		cout<<"El descuento de los productos de canasta familiar es: "<<desCF + desToCF<<endl;
		cout<<"El descuento de los productos de aseo es: "<<desAS + desToAS<<endl;
		cout<<"El descuento de los productos de ropa es: "<<desRP + desToRP<<endl;
		cout<<"El descuento de los productos de electrodomesticos es: "<<desEL + desToEL<<endl;
		cout<<"El descuento de los productos de muebles es: "<<desMU + desToMU<<endl;
		total = totalCF + totalAS + totalRP + totalEL +totalMU;
		cout<<"El total de la compra sin el descuento es: "<<total<<endl;
		totalG = total - (desRP + desToRP + desAS + desToAS + desCF + desToCF + desEL + desToEL + desMU + desToMU);      
		cout<<"El total de la compra con el descuento es: "<<totalG<<endl;
		
return 0;
}
