#include<stdio.h>
#define maxcol 30
#define maxfil 20

void resolviendo(int a[][maxcol],int nfilas, int ncols);
void escribirsalida(int c[][maxcol],int nfilas, int ncols);

int main(){
	int nfilas, ncols;
	int a[maxfil][maxcol], b[maxfil][maxcol], c[maxfil][maxcol];
	
	printf("¿Cuantas filas? \n");
	scanf("%d",&nfilas);
	
	printf("¿Cuantas columnas? \n");
	scanf("%d",&ncols);
	
	resolviendo(a,nfilas,ncols);
		
	printf("\nMULTIPLICANDO: \n \n");
	escribirsalida(a,nfilas,ncols);
}

void resolviendo(int a[][maxcol],int m, int n){
	
	for(int fila=0; fila<m; fila++){
		for(int col=0; col<n; col++)
			a[fila][col]=fila*col;
	}return;
}

void escribirsalida(int a[][maxcol],int m, int n){
	
	for(int fila=0; fila<m; fila++){
		for(int col=0; col<n; col++)
		printf("%d ",a[fila][col]);
	    printf("\n\n");
	}return;
}
