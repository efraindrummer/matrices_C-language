/* Efrain May Mayo, Programacion 2, Ingieneria en computacion*/

/*Generar una matriz de mXn pidiendo el ingreso por columna de arriba a bajo.
por cada numero debe arrojar una o, por cada caracter especial dbe a rrojar una n y por cada letra una c*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define maxfil 20
#define maxcol 30

void leer (char a[][maxcol],int m, int n){

    for(int x=0; x<n; x++){
        printf("\n Introducir datos para la fila [%d][%d]n: \n",x+1);
        for(int y=0; y<m; y++)
        scanf("%s",&a[x][y]);
    }return; 
}

void codificar (char a[][maxcol],char b[][maxcol],int m, int n){
    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++)
        if((a[x][y]>=65 && a[x][y]<=90)||(a[x][y]>=97 && a[x][y]<=122)){
        	b[x][y]='c';
			}
			else if((a[x][y]>=33 && a[x][y]<=47)||(a[x][y]>=58 && a[x][y]<=64)||(a[x][y]>=91 && a[x][y]<=96)||(a[x][y]>=123 && a[x][y]<=127)){
				b[x][y]='n';
			}
			else if(a[x][y]>=48 && a[x][y]<=57){
				b[x][y]='o';
			}
		}
	}

void salida (char a[][maxcol],int m , int n){
    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++)
		printf("%4c",a[x][y]);
        printf("\n");
    }
}

main(){
    char x[maxfil][maxcol], y[maxfil][maxcol];
    int n, m;
    
    printf("ingrese n filas\n");
    scanf("%d",&m);

    printf("ingrese n columnas\n");
    scanf("%d",&n);
    
    printf("ingrese datos a codificar\n");
    leer(x,n,m);
    
    printf("Matriz Original\n\n");
    salida(x,n,m);
	
	printf("\nCodificacion: ");
    codificar(x,y,n,m);
    
    printf("Matriz Encriptada\n");
    salida(y,n,m);
    
    getch();
    return 0;
}
