/*
Laboratorio 2
Pregunta 2

Autor(es):
    Claudio Vasquez
    Victor Candia
    Francisco Iturra

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void pregunta2a(int *ptA, int ptN);

int main()
{
    int n=10;
    int *ptrA;
    pregunta2a(ptrA,n);
    return 0;
}

void pregunta2a(int *ptA, int ptN){
    int i, random;
    srand(time(0));
    ptA = malloc(ptN*sizeof(int));
    if (ptA==NULL){
        printf("Problemas reservando memoria \n");
    }else{
        for(i=0;i<ptN;i++){
                ptA[i]=rand()%10;
                        }
        }
    for(i = 0; i <ptN; i++){
            printf("%d \n", ptA[i]);
            }
    printf("\n\n\n");

    pregunta2b(ptA, ptN);
        }


void pregunta2b(int *a,int n){
    int i,j, aux;
    for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                      if(a[j]<a[i]){
                                aux=a[i];
                                a[i]=a[j];
                                a[j]=aux;
                        }
                }
        }
        for(i=0;i<n;i++){
                printf("%d \n",a[i]);
    }
    }
