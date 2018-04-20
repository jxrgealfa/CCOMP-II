#include <iostream>

using namespace std;

int Bubble(int T[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(T[j]>T[j+1]){
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }
    }
}

int main(){
    int x[]={9,8,7,6,5,4,3,2,1};
    Bubble(x,9);

    for(int i=0;i<9;i++){
        cout<<x[i]<<",";
    }
}
