#include <iostream>
#include "Estudiante.cpp"
using namespace std;

main(){
	string nombres, apellidos;
	int telefono, carnet;

	cout<<"Ingrese Carnet: ";
	cin>>carnet;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;

	Estudiante obj = Estudiante(nombres, apellidos, carnet, telefono);
	obj.mostrar();

	char s;
	cout<<"Desea modificar los datos (s/n)"<<endl;
	cin>>s;
	
	if(s == 's'){

		cout<<"Modifique Carnet: ";
		cin>>carnet;
		cout<<"Modifique nombres: ";
		cin>>nombres;
		cout<<"Modifique apellidos: ";
		cin>>apellidos;
		cout<<"Modifique telefono: ";
		cin>>telefono;
		
		obj.setNombres(nombres);
		obj.setCarnet(carnet);
		obj.setApellidos(apellidos);
		obj.setTelefono(telefono);
		
		obj.mostrar();
	}else {
		return 0;
	}
};
