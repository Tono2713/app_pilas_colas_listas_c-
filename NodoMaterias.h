class NodoMaterias{
private:
	NodoMaterias *anterior;
	Materias *materias;
	NodoMaterias *siguiente;
	PilaEstudiante *pilaEstudiantes;
public:
	NodoMaterias(){
		this->anterior=NULL;
		this->materias=NULL;
		this->siguiente=NULL;
		pilaEstudiantes = new PilaEstudiante();
	}
	
	NodoMaterias(Materias *materias){
		this->anterior=NULL;
		this->materias=materias;
		this->siguiente=NULL;
		pilaEstudiantes = new PilaEstudiante();
	}
	void setMaterias(Materias *materias){
		this->materias=materias;
	}
	
	Materias *getMaterias(){
		return this->materias; 
	}
	
	void setSiguiente(NodoMaterias *NodoFamilia){
		this->siguiente=NodoFamilia;
	}
	
	NodoMaterias *getSiguiente(){
		return this->siguiente;
	}
	
	void setAnterior(NodoMaterias *NodoFamilia){
		this->anterior=NodoFamilia;
	}
	
	NodoMaterias *getAnterior(){
		return this->anterior;
	}
	
	void setPilaEstudiantes(PilaEstudiante *pilaEstudiantes){
		this->pilaEstudiantes=pilaEstudiantes;
	}
	
	PilaEstudiante *getPilaEstudiantes(){
		return this->pilaEstudiantes;
	}
	
};
