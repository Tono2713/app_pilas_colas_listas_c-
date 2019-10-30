class NodoEstudiantes{
private:
	Estudiante *estudiante;
	NodoEstudiantes *siguiente;
	ListaDobleEnsayo *listaDobleEnsayos;
public:
	NodoEstudiantes(){
		this->siguiente=NULL;
		this->estudiante=NULL;
		listaDobleEnsayos = new ListaDobleEnsayo();
	}
	NodoEstudiantes(Estudiante *estudiante){
		this->estudiante=estudiante;
		this->siguiente=NULL;
		listaDobleEnsayos = new ListaDobleEnsayo();
	}
	
	Estudiante *getEstudiante(){
		return this->estudiante;
	}
	void setSiguiente(NodoEstudiantes *siguiente){
		this->siguiente=siguiente;
	}
	NodoEstudiantes *getSiguiente(){
		return this->siguiente;
	}
	void setListaDobleEnsayos(ListaDobleEnsayo *listaDobleEnsayos){
		this->listaDobleEnsayos=listaDobleEnsayos;
	}
	ListaDobleEnsayo *getListaDobleEnsayos(){
		return this->listaDobleEnsayos;
	}
	
};
