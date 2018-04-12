#include <iostream>

using namespace std;

int Operacion(int op,int a,int b,int c){
    switch(op){
        case 1: return (a+b)%c;
        case 2: return (a-b)%c;
        case 3: return (a*b)%c;
    }
}

int main()
{
    int a,b,c,op,res;
    cout<<"Ingrese la operacion:\n ->1 es suma.\n ->2 es resta.\n ->3 es multiplicacion."<<endl;
    cin>>op;
    cout<<"Ingrese el primer numero:"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero:"<<endl;
    cin>>b;
    cout<<"Ingrese el modulo numero:"<<endl;
    cin>>c;
    if(Operacion(op,a,b,c)<0){
        res=Operacion(op,a,b,c)+c;
    }
    res=Operacion(op,a,b,c)+c;
    cout<<" ->El resultado es: "<<res<<"."<<endl;
}
