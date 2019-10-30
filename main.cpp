using namespace std;
#include<iostream>

#include "Ensayos.h"
#include "NodoEnsayos.h"
#include "ListaDobleEnsayo.h"
#include "Estudiante.h"
#include "NodoEstudiantes.h"
#include "PilaEstudiante.h"
#include "Materias.h"
#include "NodoMaterias.h"
#include "colaMaterias.h"

int main (int argc, char *argv[]) {
	colaMaterias *cola = new colaMaterias();
		
		/*Ensayos Z; Estudiante Y; Materias X;*/
		
		//variables clase ensayo
		string nombre=""; int cantH=0;
		
		//variables clase Estudiante
		//string nombreEstudiante="";
		string sexo="";
		
		//variables clase materias
		int codigo=0, codigoE=0;
		int opcion=0;
		
		do{
			system("cls");
			cout<<"***Menu***"<<endl
				<<"1. Insertar una materia "<<endl
				<<"2. Imprimir lista de materias "<<endl
				
				<<"3. Insertar un estudiante "<<endl
				<<"4. Imprimir lista de estudiantes de una materia"<<endl
				
				<<"5. Insertar un ensayo a un estudiante"<<endl
				<<"6. Imprimir lista de ensayos de un estudiante"<<endl
				<<"7. Imprimir todo"<<endl
				<<"8. Calcular y listar promedio de estudiantes"<<endl
				<<"0. Salir"<<endl
				<<"Presione el numero con la opcion que quiere utilizar"<<endl;
			cin>>opcion;
			
			switch(opcion){
			case 1:
				cout<<"Digite el codigo de la materia. Redaccion: 123. Ortografia: 124. Caligrafia: 125"<<endl;
				cin>>codigo;
				cout<<"Digite el nombre de la materia. Redaccion, ortografia o caligrafia"<<endl;
				cin>>nombre;
				cola->poner(new NodoMaterias(new Materias(codigo, nombre)));
				cola->imprimir();
				system("pause");
				break;
			case 2:
				cola->imprimir();
				system("pause");
				break;
			case 3: 
				cout<<"Digite el codigo de la materia a introducir estudiantes"<<endl;
				cin>>codigo;
				cout<<"Digite el codigo del estudiante"<<endl;
				cin>>codigoE;
				cout<<"Digite el nombre del estudiante"<<endl;
				cin>>nombre;
				cout<<"Digite el sexo del estudiante (F o M)"<<endl;
				cin>>sexo;
				sexo = toupper(sexo[0]);
				cola->apilarEstudiante(codigo,new NodoEstudiantes(new Estudiante(codigoE,nombre,sexo)));
				cola->imprimirMateriaEstudiante();
				system("pause");
				break;
			case 4: 
				cout<<"Digite el codigo de la materia a imprimir listado de estudiantes"<<endl;
				cin>>codigo;
				cola->imprimirEstudantesMateria(codigo);
				system("pause");
				break;
			case 5: 
				cout<<"Digite el codigo del estudiante a insertar ensayo"<<endl;
				cin>>codigo;
				cout<<"Digite el nombre del enseyo"<<endl;
				cin>>nombre;
				cout<<"Digite la cantidad de hojas"<<endl;
				cin>>cantH;
				cola->apilarEnsayo(codigo, new NodoEnsayos(new Ensayos(nombre,cantH,0)));
				system("pause");
				break;
			case 6: 
				cout<<"Digite el codigo del estudiante a imprimir listado de ensayos"<<endl;
				cin>>codigo;
				cola->imprimirEnsayoEstudiante(codigo);
				system("pause");
				break;
			case 7: 
				cola->imprimirTodo();
				system("pause");
				break;
			case 8: 
				cola->calcularListarPromedio();
				system("pause");
				break;
			default:
				break;
			}
		} while(opcion!=0);
		
	 
	
	return 0;
}

