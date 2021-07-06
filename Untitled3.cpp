#include <iostream>

using namespace std;

int main(){
	
	int intervalo, impar, par;
	
	cout<<"Cuales son los limites del intervalo: "; cin>>intervalo;
	cout<<"Digite un numero: "; cin>>impar;
	cout<<"Digite un numero: "; cin>>par; 
	cout<<endl;
	cout<<"Los valores ingresados son: "<<"("<<impar<<","<<par<<")"<<endl<<endl;
	
	for(int i = 0 ; i < intervalo - 1 ; i++){
		if(impar %2 == 1){
			impar += 2;
		}
		
		else if (impar %2 == 0){
			impar += 1;
			cout<<"("<<impar<<","<<par<<")";
			impar += 2;
		}
		if(par %2 == 0){
			par -= 2;
		}
		else if(par %2 ==1){
			par -= 1;
			cout<<"("<<impar - 2<<","<<par<<")";
			par -= 2;
		}
		cout<<"("<<impar<<","<<par<<")";
	}
	
	
	
	return 0;
}
