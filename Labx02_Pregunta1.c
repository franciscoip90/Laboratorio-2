/*Laboratorio 2
Pregunta 1:4 funciones

Autor(es):
    Claudio Vasquez
    Victor Candia
    Francisco Iturra

*/



#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdio.h>



void iniciarMatriz(int***,int,int);
void llenarMatriz(int**,int,int);
void mostrarMatriz(int**,int ,int);
void eliminaPrimos(int**,int,int);
void leerint(int* );

int main(int argc, char **argv)
{
	int **A;
    int filas, columnas;
    
    printf("Indique el numero de filas\n");
    leerint(&filas);
    
    printf("Indique el numero de columnas\n");
    leerint(&columnas);
	printf ("\n");
    
    
    iniciarMatriz(&A, filas, columnas);
    llenarMatriz(A, filas, columnas);
    mostrarMatriz(A, filas, columnas);
    eliminaPrimos(A, filas, columnas);
	printf ("\n");
    printf ("Matriz sin numeros primos \n");
    mostrarMatriz(A, filas, columnas);
    
}


void leerint(int* dest){
    scanf("%d",dest);
}


void iniciarMatriz(int *** matriz, int filas, int columnas){
    int i = 0;;
    *matriz = (int**) malloc(filas*sizeof(int*));
    for(i = 0; i < filas; i++){
        (*matriz)[i] = (int*) malloc(columnas*sizeof(int));
    }
}



void llenarMatriz(int** matriz, int filas, int columnas){
    int i = 0; 
	int j = 0;
	
    srand(time(0));
    
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            matriz[i][j] = rand()%100;
        }
    }
}

void mostrarMatriz(int** matriz, int filas, int columnas){
    int i = 0; 
	int j = 0;
	
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("%d\t",matriz[i][j]);
        }
            printf("\n");
    }

}



int Primo(int numero){
    int i = 0; 
	int cantidadDivisores = 0;
	for (i = 1 ;i <= numero;i ++ ){
		if(numero % i==0){
			cantidadDivisores++;
		}
	}
	if (cantidadDivisores == 2){
		return -1;
	}else{
		return 1;
	}
}


void eliminaPrimos(int** matriz, int filas, int columnas){
    int i = 0;
	int j = 0;
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            if(Primo(matriz[i][j]) == 1){
                matriz [i][j] = 0;
            }
        }
    }
}

