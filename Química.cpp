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

void lectura1 (char e1[2], char e2[2])
{
	gotoxy(40, 8);
	printf("Ingrese el Primer elemento: ");
	gets(e1);
	
	gotoxy(40, 10);
	printf("Ingrese el Segundo elemento: ");
	gets(e2);
}

void lectura2 (float n1, float n2)
{
	gotoxy(40, 12);
	printf("Ingresa Primer Valor:  ");
	scanf("%f", &n1);
	
	gotoxy(40, 14);
	printf("Ingresa Segundo Valor:  ");
	scanf("%f", &n2);
}

void resta (float n1, float n2, float r)
{
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
}

void enlace(char e1[2], char e2[2], float r)
{
	switch(e1[2], e2[2])
	{
		case 1: "Li";
		break;
		    case 2: "Be";
		    break;
	         	case 3: "Na";
	         	break;
		            case 4: "Mg";
		                break;
	                    	case 5: "Al";
	                    	break;
		                        case 6: "K";
		                        break;
	                            	case 7: "Ca";
	                            	break;
	                                	case 8: "Sc";
	                                	break;
	                                    	case 9: "Ti";
	                                    	break;
		                                        case 10: "V";
		                                        break;
		                                            case 11: "Cr";
		                                            break;
	 	                                               case 12: "Mn";
	 	                                               break;
	                                                    	case 13: "Fe";
	                                                    	break;
		                                                        case 14: "Co";
		                                                        break;
		                                                            case 15: "Ni";
		                                                            break;
		                                                                case 16: "Cu";
		                                                                break;
	                                                                    	case 17: "Zn";
	                                                                    	break;
		                                                                        case 18: "Ga";
		                                                                        break;
	                                                                            	case 19: "Rb";
	                                                                            	break;
	                                                                                	case 20: "Sr";
	                                                                                	break;
	                                                                                    	case 21: "Y";
	                                                                                    	break;
																								printf("\nEs Un Enlace Metalico");
																								break;
	}
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
		else
		{
			if(r == 0)
			{
				gotoxy(40, 20);
				printf("\nEs Un Enlace Covalente No Polar");
			}
		}
	}
}

main()
{
	char e1[2], e2[2];
	float n1, n2, r = 0;
	
	color(14);
	system("CLS");
	gotoxy(35, 1);
	printf("**********PROYECTO FINAL DE QUIMICA**********");
	gotoxy(50, 3);
	printf("TIPOS DE ENLACES");
	
	lectura1(e1, e2);
	lectura2(n1, n2);
	
	resta(n1, n2, r);
	
	enlace (e1, e2, r);
	
	getch();
	return 0;
}
