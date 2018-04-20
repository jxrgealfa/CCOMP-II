#include <iostream>

using namespace std;

void quickSort(int T[], int inicio, int fin){
    int i = inicio, j = fin;
    int tmp;
    int pivot = T[(inicio + fin) / 2];
      while (i <= j) {
        while (T[i] < pivot){i++;}
        while (T[j] > pivot){j--;}
        if (i <= j) {
            tmp = T[i];
            T[i] = T[j];
            T[j] = tmp;
            i++;
            j--;
        }

        };
    if (inicio < j)
        quickSort(T, inicio, j);
    if (i < fin)
        quickSort(T, i, fin);
}

int main()
{
    int x[]={9,8,7,6,5,4,3,2,1};
    quickSort(x,x[8],x[0]);

    for(int i=0;i<9;i++){
        cout<<x[i]<<",";
    }
}
