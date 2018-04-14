#include <iostream>

using namespace std;

void inversa(int a, int b, int c){
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

int Operacion(int op,int a,int b,int c){
    switch(op){
        case 1: return (a+b)%c;
        case 2: return (a-b)%c;
        case 3: return (a*b)%c;
        case 4: inversa(a,b,c);
    }
}

int main()
{
    int a,b,c,op,res;
    cout<<"Ingrese la operacion:\n ->1 es suma.\n ->2 es resta.\n ->3 es multiplicacion.\n ->4 es inversa."<<endl;
    cin>>op;
    if(op==4){
        cout<<"Ingrese el primer numero:"<<endl;
        cin>>a;
        cout<<"Ingrese el modulo numero:"<<endl;
        cin>>c;
        Operacion(op,a,b,c);
    }else{
        cout<<"Ingrese el primer numero:"<<endl;
        cin>>a;
        cout<<"Ingrese el segundo numero:"<<endl;
        cin>>b;
        cout<<"Ingrese el modulo numero:"<<endl;
        cin>>c;
        if(Operacion(op,a,b,c)<0){
            res=Operacion(op,a,b,c)+c;
        }else{
            res=Operacion(op,a,b,c);
        }
        cout<<" ->El resultado es: "<<res<<"."<<endl;
    }

}
