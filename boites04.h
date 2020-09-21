#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct agenda{
   int 	cve;
   char nombre[30];
   char direccion[30];
   char telefono[12];
   char	correo[20];
}a[5];

int index=0, change=0, b;
void menu();
void registrar();
int buscar(int);
void editar(int);
void remover(int);
void listar();
void mostrar(int);
void buscador(int);



void registrar(){
	char n[10][30];
	a[index].cve=index+1;
	cout<<"ingrese nombre:"<<endl;
    cin>>a[index].nombre;
    cout<<"ingrese direccion:"<<endl;
    cin>>a[index].direccion;
    cout<<"ingrese Telefono:"<<endl;
    cin>>a[index].telefono;
    cout<<"ingrese Correo:"<<endl;
    cin>>a[index].correo;
    
    index++;
}

int buscar(int cve){
	int x=0,ban=0,posicion=0;
	while(x<5 && ban==0){
		if(cve==a[x].cve){
		   posicion=x;
		   ban=1;	
		}
		x++;
	}
	return posicion;
}

void editar(int change){
	char n[10][30];
	a[change-1].cve=change;
	cout<<"ingrese el nuevo nombre:"<<endl;
    cin>>a[change-1].nombre;
    cout<<"ingrese la nueva direccion:"<<endl;
    cin>>a[change-1].direccion;
    cout<<"ingrese El nuevo telefono:"<<endl;
    cin>>a[change-1].telefono;
    cout<<"ingrese El nuevo correo:"<<endl;
    cin>>a[change-1].correo;

}

void remover(int erase){
	char n[10][30];
	int cont;
	while(erase<6) 
	{
		//strcpy(a[erase].cve,a[erase+1].cve);
		strcpy(a[erase].nombre,a[erase+1].nombre);
		strcpy(a[erase].direccion,a[erase+1].direccion);
		strcpy(a[erase].telefono,a[erase+1].telefono);
		strcpy(a[erase].correo,a[erase+1].correo);
		erase++;
		cout<<"Has eliminado el registro de agenda exitosamente!"<<endl;
	}
		
	
	index--;
}

void listar(){
	int listador=0;
	while(listador<5){
		cout<<"\nClave: "<<listador+1<<endl;
		cout<<"Nombre: "<<a[listador].nombre<<endl;
		cout<<"Direccion: "<<a[listador].direccion<<endl;
		cout<<"Telefono: "<<a[listador].telefono<<endl;
		cout<<"Correo: "<<a[listador].correo<<endl;
		listador++;
	}	
}

void buscador(int x){
		cout<<"\nClave: "<<x+1<<endl;
		cout<<"Nombre: "<<a[x].nombre<<endl;
		cout<<"Direccion: "<<a[x].direccion<<endl;
		cout<<"Telefono: "<<a[x].telefono<<endl;
		cout<<"Correo: "<<a[x].correo<<endl;
}


