#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void inversa(int a, int c){
    for(int b = 0; b<c; b++){
        int x = (a*b)%c;
        if(x<0){
            x = x+c;
        }
        if(x==1){
            cout<<" ->El resultado es: "<<b<<endl;
            break;
        }
        else if(b==c-1 && x!=1){cout<<" ->No tiene inverso modular.\n";}
    }
}

void lectura(){
    ifstream archivo;
    string texto;

    archivo.open("texto1.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se encontro archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close();
}

void escritura(){
    ofstream archen;
    archen.open("texto2.txt", ios::out);
    archen<<"Hola pendejo";
    archen.close();
}

int cifrado(){
    cout << " ->Ingrese una clave privada:" << endl;
    cin>>clave;
    if(inversa(clave,256)==0){cout<<"Esa clave no es permitida, elija otra"<<endl; return 0;}
    ifstream lectura;
	lectura.open("plain1.txt",ios::out|ios::in);
	if(lectura.is_open()){
	    char i;
        i=lectura.get();
        mensaje=i;;
        int temp=0;
        cout<<mensaje<<endl;
        while(!lectura.eof()){
            if(temp==1){
                mensaje=mensaje+i;
                i=lectura.get();
                cout<<i<<endl;
            }else{
                temp=1;
                i=lectura.get();
                cout<<i<<endl;}
		}
		cout<<"Encuentre el mensaje descifrado en plain2.txt "<<endl;
		cout<<mensaje<<endl;
	}else{
		cout<<"El archivo no se pudo leer"<<endl;
	}
    tamano=mensaje.length();
    int code[tamano];
    for(int i=0;i<tamano;i++){
        code[i]=modulo((int(mensaje[i])*clave),256);
        cout<<char(code[i]);
    }
    cout<<endl;
    escribiendo(code);
}


int main()
{
    lectura();
    encriptar();
    return 0;
}
