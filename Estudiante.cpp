#include <iostream>
using namespace std;

class Estudiante{
	protected : string nombres, apellidos;
		int carnet, telefono;
	
	public :
		Estudiante(string nom, string ape, int car, int tel){
			nombres = nom;
			apellidos = ape;
			carnet = car;
			telefono = tel;
		}
		
	void setCarnet(int c){ carnet = c;}
	void setNombres(string nom){ nombres = nom;}
	void setApellidos(string ape){ apellidos = ape;}
	void setTelefono(int tel){ telefono = tel;}
	
	int getCarnet(){return carnet;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"----------------------------------------"<<endl;
		cout<<carnet<<","<<nombres<<","<<apellidos<<","<<telefono<<endl;
	}
};
