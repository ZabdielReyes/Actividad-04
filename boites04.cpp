#include <iostream>
#include <cstring>
#include <cstdlib>
#include "boites 04.h"
using namespace std;




int main(int argc, char** argv) {
   int opc=0;
   do{
   	system("cls");
   	 menu();
    cout<<"Continuar 1 salir 2:"<<endl;
    cin>>opc;
   }while(opc!=2);
   system("pause>>cls");
	return 0;
}

void menu(){
	int opc=0,cve=0;
	cout<<"Agenda"<<endl;
	cout<<"1) registrar"<<endl;
	cout<<"2) buscar por clave"<<endl;
	cout<<"3) editar"<<endl;
	cout<<"4) remover"<<endl;
	cout<<"5) listar"<<endl;
	cout<<"6) salir"<<endl;
    cout<<"Seleccione opcion:"<<endl;
    cin>>opc;
	switch(opc){
		case 1: registrar();break;
		case 2: {
			     cout<<"Ingrese la clave del contacto:"<<endl;
                 cin>>cve;
			      //mostrar(buscar(cve));
			      buscador(cve-1);
		        }break;
		case 3: {
				cout<<"Ingrese la clave del contacto a editar:"<<endl;
                cin>>change;
				editar(change);
			
				}break;
		
		case 4:{
		 			cout<<"Ingrese la clave del contacto a borrar:"<<endl;
	                cin>>b;
                	remover(b-1);
				
	
				}break;
				
		case 5: listar();break;
			
			
	
			}
}
