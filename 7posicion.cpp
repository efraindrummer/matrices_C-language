/*Efrain may Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#define maxcol 50
#define maxfil 50

void leer(int a[][maxcol]);
void salida(int a[][maxcol],int nfilas, int ncols);

main(){
	int nfilas, ncols;
	int a[maxfil][maxcol]={0};
	
	printf("Cuantas filas? \n");
	scanf("%d",&nfilas);
	
	printf("Cuantas columnas? \n");
	scanf("%d",&ncols);
	
	printf("Matriz por posicion: \n\n");
	leer(a);
	
	salida(a,nfilas,ncols);
}

void leer(int a[][maxcol]){
	int fila, col, e, d;
    printf("Cuantos datos quiere ingresar: \n");
    scanf("%d",&d);
    for(int x=0; x<d; x++){
        printf("ingrese el dato %2d: \n",x+1);
        scanf("%d",&e); 
        
        printf("Pos fila: \n");
        scanf("%d",&fila); 
        
        printf("Pos col: \n");
        scanf("%d",&col); 
        
        a[fila][col]=e;
    }
}

void salida(int a[][maxcol],int m, int n){
	int fila, col;
	
	for(fila=0; fila<m; fila++){
		for(col=0; col<n; col++)
		
		printf("%4d",a[fila][col]);
	    printf("\n");
	}return;
}
