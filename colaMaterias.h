class colaMaterias{
private:
	int contador;
    NodoMaterias *frente;
	NodoMaterias *fin;
public:
	colaMaterias(){
		this->contador=0;
		this->frente=NULL;
		this->fin=NULL;
	}
	
	bool esVacia(){
		return (frente==NULL && fin==NULL);
	}		
	
	void poner(NodoMaterias *nodo){
		if(esVacia()){
			frente=fin=nodo;
		}else{
			fin->setSiguiente(nodo);
			nodo->setAnterior(fin);
			fin=nodo;
		}
		contador++;
	}
	
	void apilarEstudiante(int cod, NodoEstudiantes *nodo){
		NodoMaterias *aux;
		if(esVacia()){
			cout<<"No hay materias para agregar estudiantes..."<<endl;
		}else{
			aux=frente;
			while(aux!=NULL){
				if(aux->getMaterias()->getCodigo()==cod){
					aux->getPilaEstudiantes()->apilar(nodo);
					break;
				}
				aux=aux->getSiguiente();
			}
			if(aux==NULL){
				cout<<"No se encuentra el estudiante con código "<<cod<<endl;
			}
		}
	}
	
	void apilarEnsayo(int cod, NodoEnsayos *nodo){
		NodoMaterias *aux;
		NodoEstudiantes *aux2;
		NodoEnsayos *aux3;
		bool encontrado=false;
		if(esVacia()){
			cout<<"No hay materias para agregar estudiantes..."<<endl;
		}else{
			aux=frente;
			while(aux!=NULL){
				if(aux->getPilaEstudiantes()->getCabeza()!=NULL){
					aux2 = aux->getPilaEstudiantes()->getCabeza();
					while(aux2!=NULL){
						if(aux2->getEstudiante()->getCodigoEstudiante()==cod){
							cout<<"insertado..."<<endl;
							aux2->getListaDobleEnsayos()->insertar(nodo);
							aux3 = aux2->getListaDobleEnsayos()->getCabeza();
							aux3->getEnsayos()->setCalificacion(aux2->getEstudiante()->getSexo(),aux3->getEnsayos()->getCantHojas());
							encontrado=true;
							break;
						}
						aux2 = aux2->getSiguiente();
					}
				}
				aux=aux->getSiguiente();
			}
			if(!encontrado){
				cout<<"No se encuentra el estudiante con código "<<cod<<endl;
			}
		}
	}
	
	void imprimirEnsayoEstudiante(int cod){
		NodoMaterias *aux;
		NodoEstudiantes *aux2;
		bool encontrado=false;
		if(!esVacia()){
			aux=frente;
			while(aux!=NULL){
				if(aux->getPilaEstudiantes()->getCabeza()!=NULL){
					aux2 = aux->getPilaEstudiantes()->getCabeza();
					while(aux2!=NULL){
						if(aux2->getEstudiante()->getCodigoEstudiante()==cod){
							cout<<aux2->getEstudiante()->toString();
							aux2->getListaDobleEnsayos()->imprimirEnsayo();
							encontrado=true;
							break;
						}
						aux2 = aux2->getSiguiente();
					}
				}
				aux=aux->getSiguiente();
			}
			if(!encontrado){
				cout<<"No se encuentra el estudiante con código "<<cod<<endl;
			}
		}
	}
	
	void imprimir(){
		NodoMaterias *aux;
		if(esVacia()){
			cout<<"La cola esta vacia"<<endl;
		}else{
			aux=frente;
			while(aux!=NULL){
				cout<<aux->getMaterias()->toString();
				aux=aux->getSiguiente();
			}
		}
	}
	
	void imprimirTodo(){
		NodoMaterias *aux;
		NodoEstudiantes *aux2;
		if(!esVacia()){
			aux=frente;
			while(aux!=NULL){
				cout<<endl<<"*****MATERIAS*****"<<endl;
				cout<<aux->getMaterias()->toString();
				if(aux->getPilaEstudiantes()->getCabeza()!=NULL){
					aux2 = aux->getPilaEstudiantes()->getCabeza();
					while(aux2!=NULL){
						cout<<"*****ESTUDIANTES*****"<<endl;
						cout<<aux2->getEstudiante()->toString();
						cout<<"*****ENSAYOS*****"<<endl;
						aux2->getListaDobleEnsayos()->imprimirEnsayo();
						
						aux2 = aux2->getSiguiente();
					}
				}
				aux=aux->getSiguiente();
			}
		}
	}
	
	void imprimirMateriaEstudiante(){
		NodoMaterias *aux;
		if(esVacia()){
			cout<<"La cola esta vacia"<<endl;
		}else{
			aux=frente;
			while(aux!=NULL){
				cout<<aux->getMaterias()->toString();
				aux->getPilaEstudiantes()->imprimirEstudiantes();
				aux=aux->getSiguiente();
			}
		}
	}
	
	void imprimirEstudantesMateria(int cod){
		NodoMaterias *aux;
		if(esVacia()){
			cout<<"La cola esta vacia"<<endl;
		}else{
			aux=frente;
			while(aux!=NULL){
				if(aux->getMaterias()->getCodigo()==cod){
					cout<<aux->getMaterias()->toString();
					aux->getPilaEstudiantes()->imprimirEstudiantes();
					break;
				}
				aux=aux->getSiguiente();
			}
			if(aux==NULL){
				cout<<"No se encuentra la materia con el código "<<cod<<endl;
			}
		}
	}
	
	void calcularListarPromedio(){
		NodoMaterias *aux;
		NodoEstudiantes *aux2;
		if(!esVacia()){
			aux=frente;
			while(aux!=NULL){
				if(aux->getPilaEstudiantes()->getCabeza()!=NULL){
					aux2 = aux->getPilaEstudiantes()->getCabeza();
					while(aux2!=NULL){
						cout<<"ESTUDIANTE "<<endl;
						cout<<aux2->getEstudiante()->toString();
						cout<<"Promedio "<<aux2->getListaDobleEnsayos()->calcularPromedio()<<endl<<endl;
						
						aux2 = aux2->getSiguiente();
					}
				}
				aux=aux->getSiguiente();
			}
		}
	}
	
};

