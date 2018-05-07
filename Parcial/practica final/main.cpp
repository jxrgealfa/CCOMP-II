#include <iostream>
#include <stdlib.h>

using namespace std;

/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número. Con punteros.
void parOimpar(int *t, int n){
    for(int i =0;i<n;i++){
        if(*(t+i)%2==0){
            cout<<"El numero: "<<*(t+i)<<" es par y su direccion de memoria es: "<<t+i<<endl;
        }else{
            cout<<"El numero: "<<*(t+i)<<" es impar y su direccion de memoria es: "<<t+i<<endl;
        }
    }
}

int main(){
    int T[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(T)/4;
    parOimpar(T,n);
}*/
/*Ejercicio 2: Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria se guardo el número.
void primo(int *T, int n){
    for(int i=0;i<n;i++){
        int div=0;
        for(int j=1;j<=*(T+i);j++){
            if(*(T+i)%j==0){
                div++;
            }
        }
        if(div<2||div>2){
            cout<<"El numero"<<*(T+i)<<" no es primo"<<endl;
        }else{
            cout<<"El numero"<<*(T+i)<<" es primo y su direccion es: "<<T+i<<endl;
        }
    }

}

int main(){
    int T[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(T)/4;
    primo(T,n);
}*/
/*Ejercicio 3: Determinar el mayor numero de un array con punteros.
void mayorYmenor(int *T,int n){
    int min,max=0;
    min=*(T);
    for(int i=0;i<n;i++){
        if(min>=*(T+i)){
            min=*(T+i);
        }
        if(max<*(T+i)){
            max=*(T+i);
        }
    }
    cout<<"El mayor numero es: "<<max<<endl;
    cout<<"El menor numero es: "<<min<<endl;
}

int main(){
    int T[]={1,2,3,4,5,-86,7,8,9,11,56};
    int n=sizeof(T)/4;
    mayorYmenor(T,n);
}*/
/*Ejercicio 4: algoritmos de ordenamiento con punteros.
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void burbuja(int T[],int n){
    bool a= true;
    while(a){
        a=false;
        for(int i=0;i<n;i++){
            if(T[i]>T[i+1]){
                int temp;
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
                a=true;
            }
        }
    }
}

void burbujap(int *T,int n){
    bool a= true;
    while(a){
        a=false;
        for(int i=0;i<n;i++){
            if(*(T+i)>*(T+i+1)){
                swap(T+i,T+i+1);
                a=true;
            }
        }
    }
}

void insertionSort(int T[],int n){
    for(int i=0;i<n;i++){
        int x=T[i];
        int j=i;
        while(j>0 && T[j-1]>x){
            T[j]=T[j - 1];
            j=j - 1;
        }
        T[j]=x;
    }
}

void insertionSortp(int *T,int n){
    for(int i=0;i<n;i++){
        int x=*(T+i);
        int j=i;
        while(j>0 && *(T+j-1)>x){
            *(T+j)=*(T+j - 1);
            j=j - 1;
        }
        *(T+j)=x;
    }
}

int main(){
    int T[]={1,2,3,4,5,-86,7,8,9,11,56};
    int n=sizeof(T)/4;
    insertionSortp(T,n);
    for(int i=0;i<n;i++){
        cout<<T[i]<<" , ";
    }
}
*/
/*Ejercicio 5: matriz dinamica con punteros.
int **matriz,nFilas,nCol;
void matrizD(){
    cout<<"Ingrese filas:"<<endl;
    cin>>nFilas;
    cout<<"Ingrese columnas:"<<endl;
    cin>>nCol;

    matriz=new int *[nFilas];

    for(int i=0;i<nFilas;i++){
        matriz[i]=new int [nCol];
    }

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"ingrese el valor ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz+i)+j);
        }
    }
}

void mostrar(int **T,int f, int c){
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(matriz+i)+j)<<"  ";
        }
        cout<<"\n";
    }
}

int main(){
    matrizD();
    mostrar(matriz,nFilas,nCol);
    for(int i=0;i<nFilas;i++){
        delete[] matriz;
    }
    delete[] matriz;

}*/
/*Ejercicio 6: sumar dos matrices dinamicas con punteros sapbeee.
int **matriz,**matriz1,nFilas,nCol;
void matrizD(){
    cout<<"Ingrese filas:"<<endl;
    cin>>nFilas;
    cout<<"Ingrese columnas:"<<endl;
    cin>>nCol;

    matriz=new int *[nFilas];

    for(int i=0;i<nFilas;i++){
        matriz[i]=new int [nCol];
    }

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"ingrese el valor ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz+i)+j);
        }
    }

    matriz1=new int *[nFilas];
    for(int i=0;i<nFilas;i++){
        matriz1[i]=new int [nCol];
    }
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"ingrese valor ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz1+i)+j);
        }
    }
}

void suma(int **T,int **P, int f, int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            *(*(T+i)+j)+=*(*(P+i)+j);
        }
    }

}
void mostrar(int **T,int f, int c){
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(matriz+i)+j)<<"  ";
        }
        cout<<"\n";
    }
}

int main(){
    matrizD();
    suma(matriz,matriz1,nFilas,nCol);
    mostrar(matriz,nFilas,nCol);
    for(int i=0;i<nFilas;i++){
        delete[] matriz;
        delete[] matriz1;
    }
    delete[] matriz;
    delete[] matriz1;

}
*/

/*void fibonacci(long *ArrEnt, int ArrTam){
    *(ArrEnt)=0;
    *(ArrEnt+1)=1;
    for(int i=2;i<ArrTam;i++){
        *(ArrEnt+i)=*(ArrEnt+i-1)+*(ArrEnt+i-2);

    }
}

int main(){
    int tam;
    cout<<"ingrese tamano:";
    cin>>tam;
    long T[tam];
    fibonacci(T,tam);
    for(int i=0;i<tam;i++){
        cout<< *(T+i)<<" ";
    }
}
*/

/*void par_impar(long *ArrEnt,long *ArrPar,long *ArrImpar, int ArrTam){
    int p=0;
    int im=0;
    for(int i=0;i<ArrTam;i++){
        if(*(ArrEnt+i)%2==0||*(ArrEnt+i)==0 ){
            *(ArrPar+p)=*(ArrEnt+i);
            p++;
        }else{
            *(ArrImpar+im)=*(ArrEnt+i);
            im++;
        }
    }
    if(p<ArrTam){
        for(p;p<ArrTam;p++){
            *(ArrPar+p)=-1;
        }
    }
    if(im<ArrTam){
        for(im;im<ArrTam;im++){
            *(ArrImpar+im)=-1;
        }
    }
}

int main(){
    int tam=12;
    long x[tam]={1,2,3,4,5,6,7,8,9,10,11,12};
    long y[tam];
    long z[tam];
    par_impar(x,y,z,tam);

    for(int i=0;i<tam;i++){
        cout<<*(y+i)<<" , ";
    }
    cout<<"\n\n\n";
    for(int i=0;i<tam;i++){
        cout<<*(z+i)<<" , ";
    }

}
*/
