#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void color (int c)
{  
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE), c);
}

void gotoxy (int x, int y)
{   
	COORD coord;
	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), coord);
}

void lectura1 (char e1[3], char e2[3])
{
	gotoxy(40, 8);
	printf("Ingrese el Primer elemento: ");
	gets(e1);
	
	gotoxy(40, 10);
	printf("Ingrese el Segundo elemento: ");
	gets(e2);
}

void lectura2 (float *n1, float *n2)
{
	gotoxy(40, 12);
	printf("Ingresa Primer Valor:  ");
	scanf("%f", &(*n1));
	
	gotoxy(40, 14);
	printf("Ingresa Segundo Valor:  ");
	scanf("%f", &(*n2));
}

float resta (float n1, float n2)
{
	float r;
	
	if (n1 > n2)
	{
		r = n1 - n2;
	}
	else
	{
		r = n2 - n1;
	}
	gotoxy(40, 16);
    printf("El Resultado De La Resta Es: %0.2f", r);
    
    return r;
}

void enlace(char e1[3], char e2[3], float r)
{	
	if (strcmp(e1, "Li")==0 && strcmp(e2, "Na")==0 || strcmp(e1, "Al")==0 && strcmp(e2, "Al")==0 || strcmp(e1, "Y")==0 && strcmp(e2, "Cu")==0 || strcmp(e1, "Be")==0 && strcmp(e2, "Al")==0 || strcmp(e1, "Sn")==0 && strcmp(e2, "Rb")==0)
	{
		gotoxy(40, 20);
		printf("\nEs Un Enlace Metalico");
	}
	else
	{
		if(r == 0)
		{
			gotoxy(40, 20);
			printf("\nEs Un Enlace Covalente No Polar");
		}
		else
		{
			if(r >= 1.9)
			{
				gotoxy(40, 20);
				printf("\nEs Un Enlace Ionico");
			}
			else
			{
				if(r < 1.9)
				{
					gotoxy(40, 20);
					printf("\nEs Un Enlace Covalente Polar");
				}
			}
		}
	}
}

main()
{
	char e1[3], e2[3];
	float n1, n2, r = 0;
	
	color(14);
	system("CLS");
	gotoxy(35, 1);
	printf("**********PROYECTO FINAL DE QUIMICA**********");
	gotoxy(50, 3);
	printf("TIPOS DE ENLACES");
	
	lectura1(e1, e2);
	lectura2(&n1, &n2);
	
	r = resta(n1, n2);
	
	enlace (e1, e2, r);
	
	getch();
	return 0;
}
