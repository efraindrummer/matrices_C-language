/*Efrain May Mayo
170842
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include <stdio.h>
#define maxcol 20
#define maxfil 20

void leer(char a[][maxcol],int m, int n);
void codificar(char a[][maxcol],char b[][maxcol],int m, int n);
void salida(char a[][maxcol],int m , int n);

main(){
    char o[maxfil][maxcol], c[maxfil][maxcol];
    int n, m;
    
    printf("ingrese n filas\n");
    scanf("%d",&m);
    
    printf("ingrese n columnas\n");
    scanf("%d",&n);
    
    printf("ingrese datos a codificar\n");
    leer(o,n,m);
    
    printf("Matriz Original\n\n");
    salida(o,n,m);
	
	printf("\nClasificacion: \n ");
    codificar(o,c,n,m);
     
    printf("\nMatriz: \n");
    salida(c,n,m);
}

void leer (char a[][maxcol],int m, int n){
    for(int x=0; x<n; x++){
        printf("\n Introducir datos para la fila n: %2d\n",x+1);
        for(int y=0; y<m; y++)
        scanf("%s",&a[x][y]);
    }return;
}

void codificar (char a[][maxcol],char b[][maxcol],int m, int n){
    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++)
        if(a[x][y]>=65&&a[x][y]<=90||a[x][y]>=97&&a[x][y]<=122){
        	b[x][y]='c';	
        	}else{
        		if(a[x][y]>='0'&&a[x][y]<='9'){	
        			b[x][y]='n';	
        			}else{
        				b[x][y]='o';	
				}
		}
	}
}


void salida(char a[][maxcol],int m , int n){
    for(int x=0; x<n; x++){
        for(int y=0; y<m; y++)
		printf("%4c",a[x][y]);
        printf("\n");
    }
}
