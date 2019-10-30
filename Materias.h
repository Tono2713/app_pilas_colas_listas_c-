#include <string>
#include <iostream>

class Materias{
private:
	int codigo;
	string nombre;
	
public:
	Materias(){
		this->codigo=0;
		this->nombre="";
	}
	
	Materias(int codigo, string nombre){
		this->codigo=codigo;
		this->nombre=nombre;
	}
	
	void setCodigo(int codio){
		this->codigo=codigo;
	}
	
	int getCodigo(){
		return this->codigo;
	}
	
	void setNombre(string nombre){
		this->nombre=nombre;
	}
	
	string getNombre(){
		return this->nombre;
	}
	
	string toString(){
		std::stringstream out;//Agregar #include <sstream>
		out <<"========================================="<<endl
			<<"Codigo de la materia: "<<getCodigo()<<endl
			<<"Nombre de la materia: "<<getNombre()<<endl;
		return out.str();
	}
};
