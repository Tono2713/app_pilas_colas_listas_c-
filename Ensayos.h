#include <sstream>
class Ensayos{
private:
	string ensayo;
	int cantHojas;
	double calificacion;
public:
	Ensayos(){
		this->ensayo="";
		this->cantHojas=0;
		this->calificacion=0.0;
	}
	
	Ensayos(string ensayo, int cantHojas, double calificacion){
		this->ensayo=ensayo;
		this->cantHojas=cantHojas;
		this->calificacion=calificacion;
	}
	
	void setEnsayo(string ensayo){
		this->ensayo=ensayo;
	}
	
	string getEnsayo(){
		return this->ensayo;
	}
	
	void setCantHojas(int cantHojas){
		this->cantHojas=cantHojas;
	}
	
	int getCantHojas(){
		return this->cantHojas;
	}
	
	void setCalificacion(string sexo, int hojas){
		if(sexo=="F"){
			if(hojas<=3){
				this->calificacion = 3.0;
			}if(hojas>=4 && hojas <=5){
				this->calificacion = 4.0;
			}if(hojas>5){
				this->calificacion = 5.0;
			}
		}
		else{
			if(hojas<=3){
				this->calificacion = 2.0;
			}if(hojas>=4 && hojas <=5){
				this->calificacion = 3.0;
			}if(hojas>5){
				this->calificacion = 4.0;
			}
		}
	}
	
	double getCalificacion(){
		return this->calificacion;
	}
	
	string toString(){
		std::stringstream out;//Agregar #include <sstream>
		out<<"========================================="<<endl
			<<"Ensayo: "<<getEnsayo()<<endl
			<<"Cantidad de hojas: "<<getCantHojas()<<endl
			<<"Calificacion: "<<getCalificacion()<<endl;
		return out.str();
	}
};
