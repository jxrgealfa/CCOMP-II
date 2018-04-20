#include <iostream>

using namespace std;

int Selection(int T[], int n){
    int i,j,min,temp;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(T[j]<T[min]){
                min=j;
            }
        }
        temp=T[i];
        T[i]=T[min];
        T[min]=temp;
    }
}

int main(){
    int x[]={9,8,7,6,5,4,3,2,1};
    Selection(x,9);

    for(int i=0;i<9;i++){
        cout<<x[i]<<",";
    }
}
