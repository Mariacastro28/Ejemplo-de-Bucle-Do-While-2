#include <iostream>

using namespace std;

int main() {
	int n, num ;
	
	int c = 0, c18 = 0, c60 = 0, c_rango = 0;
	
	cout<< "Ingresar cantidad de numeros: ";
	cin>> n;
	
	cout<<endl;
	
do{
	 cout<<c+1<<"Ingresar numero: ";
	 cin>> num;
	 
	 if(num < 18 )
	 c18++;
	 
	 if(num > 60 )
	 c60++;
	 
	 if(num >= 25 && num <= 45 )
	 c_rango++;

     c++;
	 
}while(c < n);

cout<<endl;
cout<<"Menores a 18: "<<c18<<endl;
cout<<"Mayores a 60: "<<c60<<endl;
cout<<"Entre 25 y 45: "<<c_rango<<endl;

	return 0;
}
