/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#define maxcol 30
#define maxfil 20

void llenardia(int a[][maxcol],int nfilas, int ncols);
void escribirsalida(int a[][maxcol],int nfilas, int ncols);

main(){
	int nfilas, ncols;
	int a[maxfil][maxcol];
	
	printf("¿Cuantas filas? \n");
	scanf("%d",&nfilas);
	
	printf("¿Cuantas columnas? \n");
	scanf("%d",&ncols);
	
	llenardia(a,nfilas,ncols);
		
	printf("\n linea intermedia: \n \n");
	escribirsalida(a,nfilas,ncols);
}

/*leer una tabla de enteros*/

void llenardia(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		if(fila==col){
			a[fila][col]=1;
		}else{
			if(fila!=col){
				a[fila][col]=0;	
			}
		}
	}return;
}

void escribirsalida(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		printf("%4d",a[fila][col]);
	    printf("\n");
	}return;
}

	
	
	
	
	
