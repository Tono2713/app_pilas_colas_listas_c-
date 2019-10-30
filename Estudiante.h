#include <sstream>
class Estudiante{
private:
	int codEstudiante;
	string nombre;
	string sexo;
	
public:
	Estudiante(){
		this->codEstudiante=0;
		this->nombre="";
		this->sexo="";
	}
	Estudiante(int codigo, string nombre, string sexo){
		this->codEstudiante=codigo;
		this->nombre=nombre;
		this->sexo=sexo;
	}
	
	void setCodEstudiante(int codEstudiante){
		this->codEstudiante=codEstudiante;
	}
	
	int getCodigoEstudiante(){
		return this->codEstudiante;
	}
	
	void setNombre(string nombre){
		this->nombre=nombre;
	}
	
	string getNombre(){
		return this->nombre;
	}
	
	void setSexo(string sexo){
		this->sexo=sexo;
	}
	
	string getSexo(){
		return this->sexo;
	}

	//devuelve todos los campos 
	string toString(){
		std::stringstream out;//Agregar #include <sstream>
		out<<"========================================="<<endl
			<<"Codigo del estudiante: "<<getCodigoEstudiante()<<endl
			<<"Nombre: "<<getNombre()<<endl
			<<"Sexo: "<<getSexo()<<endl;
		return out.str();
	}
};
