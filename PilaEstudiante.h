#include <iostream>
class PilaEstudiante{
private:
	NodoEstudiantes *cabeza;
	int contador;
public:
	PilaEstudiante(){
		this->cabeza=NULL;
		this->contador=0;
	}
	bool esVacia(){
		return cabeza==NULL;
	}
	
	int getContador(){
		return contador;
	}
	
	NodoEstudiantes* getCabeza(){
		return this->cabeza;
	}
	
	void apilar(NodoEstudiantes *nodo){
		if(esVacia()){
			cabeza=nodo;
		}else{
			nodo->setSiguiente(cabeza);
			cabeza=nodo;
		}
		contador++;
	}
	
	void apilarEnsayo(int cod, NodoEnsayos *nodo){
		NodoEstudiantes *aux;
		
		if(esVacia()){
			cout<<"No hay estudiantes para agregar ensayos..."<<endl;
		}else{
			aux=cabeza;
			while(aux!=NULL){
				if(aux->getEstudiante()->getCodigoEstudiante()==cod){
					aux->getListaDobleEnsayos()->insertar(nodo);
					break;
				}
				aux=aux->getSiguiente();
			}
			if(aux==NULL){
				cout<<"No se encuentra el estudiante con codigo "<<cod<<endl;
			}
		}
	}
	
	void imprimirEstudiantes(){
		NodoEstudiantes *aux;
		if(esVacia()){
			cout<<"La pila esta vacia"<<endl;
		}else{
			aux=cabeza;
			while(aux!=NULL){
				cout<<aux->getEstudiante()->toString();
				aux=aux->getSiguiente();
			}
		}
	}
	
};
	
	
