
class ListaDobleEnsayo{
private:
	int contador;
	NodoEnsayos *cabeza;
public:
	ListaDobleEnsayo(){
		this->contador=0;
		this->cabeza=NULL;
	}
	bool esVacia(){
		return cabeza==NULL;
	}
	int getContador(){
		return this->contador;
	}
	NodoEnsayos *getCabeza(){
		return this->cabeza;
	}
	void insertar(NodoEnsayos *nodo){
		if(esVacia()){
			cabeza = nodo;
		}else{
			nodo->setSiguiente(cabeza);
			cabeza->setAnterior(nodo);
			cabeza=nodo;
		}contador++;
	}
	
	void imprimirEnsayo(){
		NodoEnsayos *aux;
		if(esVacia()){
			cout<<"La lista esta vacia"<<endl;
		}else{
			aux=cabeza;
			while(aux!=NULL){
				cout<<aux->getEnsayos()->toString();
				aux=aux->getSiguiente();
			}
		}
	}
	
	double calcularPromedio(){
		NodoEnsayos *aux;
		double promedio=0.0;
		int num=0;
		if(!esVacia()){
			aux=cabeza;
			while(aux!=NULL){
				promedio += aux->getEnsayos()->getCalificacion();
				aux=aux->getSiguiente();
				num++;
			}
		}
		return (promedio/num);
	}
	
	
	
};
