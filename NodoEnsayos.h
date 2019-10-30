class NodoEnsayos{
private:
	Ensayos *ensayos;
	NodoEnsayos *siguiente;
	NodoEnsayos *anterior;
	
public:
	NodoEnsayos(){
		this->siguiente=NULL;
		this->anterior=NULL;
	}
	
	NodoEnsayos(Ensayos *ensayos){
		this->ensayos=ensayos;
		this->siguiente=NULL;
		this->anterior=NULL;
	}
	
	void setEnsayos(Ensayos *ensayos){
		this->ensayos=ensayos;
	}
	
	Ensayos *getEnsayos(){
		return this->ensayos;
	}
	void setSiguiente(NodoEnsayos *siguiente){
		this->siguiente=siguiente;
	}
	NodoEnsayos *getSiguiente(){
		return this->siguiente;
	}
	
	void setAnterior(NodoEnsayos *anterior){
		this->anterior=siguiente;
	}
	
	NodoEnsayos *getAnterior(){
		return this->anterior;
	}
};
