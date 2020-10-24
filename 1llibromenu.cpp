/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#include<stdlib.h>

#define maxcol 30
#define maxfil 20

int menu();
void leerentrada(int a[][maxcol],int nfilas, int ncols);
void calcularsuma(int a[][maxcol],int b[][maxcol], int c[][maxcol], int nfilas, int ncols);
void escribirsalida(int c[][maxcol],int nfilas, int ncols);


main(){
	int nfilas, ncols, op;
	int a[maxfil][maxcol], b[maxfil][maxcol], c[maxfil][maxcol];
	
	do{
		op = menu();
		switch(op){
		
			case 1: printf("Cuantas filas? \n");
			scanf("%d",&nfilas);
			
			printf("Cuantas columnas? \n");
			scanf("%d",&ncols);
	
			printf("Primera tabla: \n");
			leerentrada(a,nfilas,ncols);
			
			printf("Segunda tabla: \n");
			leerentrada(b,nfilas,ncols);
			system("PAUSE"); 
			break;
			
			case 2: calcularsuma(a,b,c,nfilas,ncols);
			system("PAUSE"); 
			break;
			
			case 3: printf("\n Sumas de los elementos: \n \n");
			escribirsalida(c,nfilas,ncols);
			system("PAUSE"); 
			break;
		}
	}while(op!=0);
}

/*leer una tabla de enteros*/

int menu(){
	int x;
	system("CLS");
	printf("1. Llamar la matriz\n");
	printf("2. Sumar matricez\n");
	printf("3. Imprimir\n");
	
	printf("opcion (1 - 3): ");
	scanf("%d",&x);
	return x;
}
void leerentrada(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		printf("\n introducir datos para la fila n: %2d\n",fila+1);
		
		for(col=0; col<n; col++)
		scanf("%d",&a[fila][col]);
		
	}return;
}
	
/*sumar los elementos de dos tablas*/

void calcularsuma(int a[][maxcol],int b[][maxcol], int c[][maxcol], int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		c[fila][col]=a[fila][col]+b[fila][col];
	}return;
}

/*escribir una tabla de enteros*/

void escribirsalida(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		printf("%4d",a[fila][col]);
	    printf("\n");
	}return;
}	
