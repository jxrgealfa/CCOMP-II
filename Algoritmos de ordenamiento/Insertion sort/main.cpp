#include <iostream>

using namespace std;

int Insertion(int T[], int n){
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

int main()
{
    int x[]={9,8,7,6,5,4,3,2,1};
    Insertion(x,9);

    for(int i=0;i<9;i++){
        cout<<x[i]<<",";
    }
}
