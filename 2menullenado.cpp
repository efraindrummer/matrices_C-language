/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#include<stdlib.h>

#define maxcol 50
#define maxfil 50

int menu();

void fila(int a[][maxcol],int nfilas, int ncols);
void filainv(int a[][maxcol],int nfilas, int ncols);
void col(int a[][maxcol],int nfilas, int ncols);
void colinv(int a[][maxcol],int nfilas, int ncols);
void salida(int a[][maxcol],int nfilas, int ncols);

main(){
	   int nfilas, ncols, op;
	   int a[maxfil][maxcol];
	   
	   do{
	   	op = menu();
        switch (op){
            case 1: printf("Cuantas filas? \n");
            scanf("%d",&nfilas);
           
            printf("Cuantas columnas? \n");
            scanf("%d",&ncols);
            
            fila(a,nfilas,ncols);
            salida(a,nfilas,ncols);
            system("PAUSE"); 
           	break;
	            case 2:
	            printf("Cuantas filas? \n");
	            scanf("%d",&nfilas);
	           
	            printf("Cuantas columnas? \n");
	            scanf("%d",&ncols);
	            
	            filainv(a,nfilas,ncols);
	            salida(a,nfilas,ncols);
	            system("PAUSE");
	            break;
		            case 3:
		            printf("Cuantas filas? \n");
		            scanf("%d",&nfilas);
		           
		            printf("Cuantas columnas? \n");
		            scanf("%d",&ncols);
		            
		            col(a,nfilas,ncols);
		            salida(a,nfilas,ncols);
		            system("PAUSE");
		            break;
			            case 4:
			            printf("Cuantas filas? \n");
			            scanf("%d",&nfilas);
			           
			            printf("Cuantas columnas? \n");
			            scanf("%d",&ncols);
			            
			            colinv(a,nfilas,ncols);
			            salida(a,nfilas,ncols);
			            system("PAUSE");
				     	      break;
				            }
				        }while(op!=0);
}
    
int menu(){
	int x;
	system ("CLS");
	printf("1. Leer por fila \n");
	printf("2. Leer por fila inversa \n");
	printf("3. Leer por columna \n");
	printf("4. Leer por columna inversa \n");
	printf("0. salir\n");
	
	printf("opcion (1 - 4): ");
	scanf("%d",&x);
	return x;
}

void fila(int a[][maxcol],int m,int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		printf("\n introducir datos para la fila n: %2d\n",fila+1);
		
		for(col=0; col<n; col++)
		scanf("%d",&a[fila][col]);
	}return;
}

void filainv(int a[][maxcol],int m,int n){
	int fila, col;
	
	for(fila=m-1; fila>=0; fila--){
		printf("\n introducir datos para la fila n: %2d\n",fila+1);
		
		for(col=n-1; col>=0; col--)
		scanf("%d",&a[fila][col]);
	}return;
}

void col(int a[][maxcol],int m,int n){
    int fila, col;
    
    for(col=0; col<n; col++){
        printf("ingresar datos para la columna: %2d\n",col+1);
        for(fila=0; fila<m; fila++)
        scanf("%d",&a[fila][col]);
	}return;
}

void colinv(int a[][maxcol],int m,int n){
    int fila, col;
    
    for(col=n-1; col>=0; col--){
        printf("ingresar datos para la columna: %2d\n",col+1);
        for(fila=m-1; fila>=0; fila--)
        scanf("%d",&a[fila][col]);
	}return;
}

void salida(int a[][maxcol],int m,int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		printf("%4d",a[fila][col]);
	    printf("\n");
	}return;
}
