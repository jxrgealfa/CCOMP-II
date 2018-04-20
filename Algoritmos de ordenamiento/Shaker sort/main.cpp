#include <iostream>

using namespace std;

int Shaker(int T[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        if(T[i]>T[i+1]){
            temp=T[i];
            T[i]=T[i+1];
            T[i+1]=temp;
        }
        n--;
        for(j=n;j<i;j--){
            if(T[j]<T[j-1]){
                temp=T[j];
                T[j]=T[j-1];
                T[j+-1]=temp;
            }
            i--;
        }
    }
}

void ShakerSort(int T[], int n){
	int i, j, k, temp;
	for(i = 0; i < n;){
		for(j = i+1; j < n; j++){
			if(T[j] < T[j-1])
				temp=T[j];
                T[j]=T[j-1];
                T[j+-1]=temp;
		}
		n--;
		for(k = n-1; k>i ; k--){
			if(T[k] < T[k-1])
				temp=T[k];
                T[k]=T[k-1];
                T[k+-1]=temp;
		}
		i++;
	}
}

int main(){
    int x[]={9,8,7,6,5,4,3,2,1};
    ShakerSort(x,9);

    for(int i=0;i<9;i++){
        cout<<x[i]<<",";
    }
}
