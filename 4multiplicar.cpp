/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#define maxcol 30
#define maxfil 20

void llenar(int a[][maxcol],int nfilas, int ncols);
void escribirsalida(int a[][maxcol],int nfilas, int ncols);

main(){
	int nfilas, ncols;
	/*definiciones de arrays*/
	int a[maxfil][maxcol];
	
	printf("¿Cuantas filas? \n");
	scanf("%d",&nfilas);
	
	printf("¿Cuantas columnas? \n");
	scanf("%d",&ncols);
	
	llenar(a,nfilas,ncols);
		
	printf("\n Multiplicar For: \n \n");
	escribirsalida(a,nfilas,ncols);
}

/*leer una tabla de enteros*/

void llenar(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
			a[fila][col]=fila*col;
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
