#include <stdio.h>
#include <stdlib.h>

void merge(long int a[],int i1,int j1,int i2,int j2){
 long int *temp = (long int*)malloc(sizeof(long int)*((j1-i1)+(j2-i2)+2));
 int i,j,k;
 i=i1;
 j=i2;
 k=0;
 while(i<=j1 && j<=j2){
   if(a[i]< a[j])
    temp[k++]=a[i++];
   else
    temp[k++]=a[j++];
 }
 while(i<=j1)
    temp[k++]=a[i++];
 while(j<=j2)
    temp[k++]=a[j++];
 for(i=i1,j=0;i<=j2;i++,j++)
    a[i]=temp[j];
 free(temp);
}

void merge_sort_top(long int a[],int primeiro,int ultimo){
  int meio;
  if(primeiro<ultimo) {
    meio=(primeiro+ultimo)/2;
    merge_sort_top(a,primeiro,meio);
    merge_sort_top(a,meio+1,ultimo);
    merge(a,primeiro,meio,meio+1,ultimo);
  }
}

int main(){

    long int vetor[10010] = {0};
    long int num;
    int i = 1;

    while(scanf("%li", &num) != EOF){
        vetor[i] = num;
        merge_sort_top(vetor, 1, i);
        if(i == 1)
            printf("%li\n", vetor[1]); 
        else if(i%2 == 0)
            printf("%li\n", (((vetor[i/2])+(vetor[(i/2)+1]))/2));
        else
            printf("%li\n", vetor[(i/2)+1]); 
        i++;             
    }
}