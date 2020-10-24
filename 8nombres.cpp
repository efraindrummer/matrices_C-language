/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include<stdio.h>
#include<stdlib.h>

#define maxfil 10
#define maxcol 10

void formar(char a[maxfil][maxcol],int u);
void imprimir(char a[maxfil][maxcol]);

main(){
	char N[maxfil][maxcol] = {{"Efrain"},{"Daniel"},{"Victor"},{"Cristina"},{"Kelly"},{"Yesenia"}};
	char A1[maxfil][maxcol] = {{"May"},{"Gomez"},{"Perez"},{"Aguirre"},{"Garcia"},{"Santini"}};
	char A2[maxfil][maxcol] = {{"Mayo"},{"Aguirre"},{"Lopez"},{"Zavala"},{"Estrella"},{"lopez"}};
	int n, a1, a2;

	printf("Nombres: \n");
	imprimir(N); 
	
	printf("Forme un nombre\n");
	printf("Ingrese el numero de fila para seleccionar nombre: \n");
	scanf("%d",&n);
	system("CLS");
		
	printf("Apellido 1: \n");
	imprimir(A1);
	
	printf("Ingrese el numero de fila para seleccionar apellido 1: \n");
	scanf("%d",&a1);
	system("CLS");

	
	printf("Apellido 2: \n");
	imprimir(A2);
	
	printf("Ingrese el numero de fila para seleccionar apellido 2: \n");
	scanf("%d",&a2);
	system("CLS");

	
	printf("El nombre formado es: \n");
	formar(N,n);
	formar(A1,a1);
	formar(A2,a2);
}

void formar(char a[maxfil][maxcol],int u){
	int y;
	for(y=0; y<10; y++){
		switch(u){
			
			case 1: printf("%c",a[u-1][y]);
			break;
				case 2: printf("%c",a[u-1][y]);
				break;
					case 3: printf("%c",a[u-1][y]);
					break;
						case 4: printf("%c",a[u-1][y]);
						break;
							case 5: printf("%c",a[u-1][y]);
							break;
								case 6: printf("%c",a[u-1][y]); 
								break;
		}
	}
}
void imprimir(char a[maxfil][maxcol]){
	int x, y;
	
	for(x=0; x<10; x++){
		for(y=0; y<10; y++)
		
		printf("%2c",a[x][y]);
		printf("\n");
	}
}

