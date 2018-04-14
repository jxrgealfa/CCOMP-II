#include <iostream>
#include <fstream>

#include <string.h>
using namespace std;

string mensaje;
int clave,tamano;
int pes;

int modulo(int a,int b){
	int r=a-(a/b)*b;
	if(r<0){
		r=r+b;
	}
	return r;
}

int mod_inverso(int a,int b){
	int p0=0,p1=1,pn=0,q,cont=0,total;
	int r=a;
	if((modulo(b,a))==0){return 0;}

	else{
        while(r>1){
            cont=cont+1;
            total=b;
            b=r;
            q=(total/b);
            r=modulo(total,b);
            pn=modulo((p0-p1*q),256);

            p0=p1;
            p1=pn;
        }
	}
	return pn;
}

int escribiendo(int code[]){
    ofstream escritura;
    string elemento;
    escritura.open("cipher.txt",ios::out);
    for(int i=0;i<tamano;i++){
            elemento=code[i];
        escritura<<elemento;
    }
    if(escritura.is_open()){
        cout<<"Abierto OK"<<endl;
    }else{
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    escritura.close();
}

void descifrado(){
    int publica;
    cout<<"Ingrese la clave pública"<<endl;
    cin>>publica;
	ifstream lectura;
	lectura.open("cipher.txt",ios::out|ios::in);
	if(lectura.is_open()){
        char i;
		cout<<"Abierto OK lectura"<<endl;
		cout<<"El mensaje es: "<<endl;

        ofstream escritura;
        escritura.open("plain2.txt",ios::out);
        lectura>>i;
		while(!lectura.eof()){
            char k=char(modulo(int(i)*publica,256));
            escritura<<k;
            lectura>>i;
		}
		escritura.close();
	}else{
		cout<<"El archivo no se pudo leer"<<endl;
	}
}

int cifrado(){
    cout << "Ingrese una clave privada" << endl;
    cin>>clave;
    if(mod_inverso(clave,256)==0){cout<<"Esa clave no es permitida, elija otra"<<endl; return 0;}
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

int main(){
    cifrado();
    descifrado();
}
