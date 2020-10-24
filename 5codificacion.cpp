/*Efrain May Mayo
170869
Universidad Autonoma del Camen
Ingenieria en computacion*/
#include <stdio.h>
#define maxcol 20
#define maxfil 20

void leer (char a[][maxcol],int m, int n);
void codificar (char a[][maxcol],char b[][maxcol],int m, int n);
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
	
	printf("\nCodificacion: ");
    codificar(o,c,n,m);
    
    printf("Matriz Encriptada\n");
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
        
        if(a[x][y]=='a'){
            b[x][y]='z';
        }else{
            if(a[x][y]=='b'){
                b[x][y]='y';
            }else{
                if(a[x][y]=='c'){
                    b[x][y]='x';
                }else{
                    if(a[x][y]=='d'){
                        b[x][y]='w';
                    }else{
                        if(a[x][y]=='e'){
                            b[x][y]='v';
                        }else{
                            if(a[x][y]=='f'){
                                b[x][y]='u';
                            }else{
                                if(a[x][y]=='g'){
                                    b[x][y]='t';
                                }else{
                                    if(a[x][y]=='h'){
                                        b[x][y]='s';
                                    }else{
                                        if(a[x][y]=='i'){
                                            b[x][y]='r';
                                        }else{
                                            if(a[x][y]=='j'){
                                                b[x][y]='q';
                                            }else{
                                                if(a[x][y]=='k'){
                                           			b[x][y]='p';        
                                                }else{
                                                    if(a[x][y]=='l'){
                                                        b[x][y]='o';
                                                    }else{
                                                        if(a[x][y]=='m'){
                                                            b[x][y]='n';
                                                        }else{
                                                            if(a[x][y]=='n'){
                                                                b[x][y]='m';
                                                            }else{
                                                                if(a[x][y]=='o'){
                                                                    b[x][y]='l';
                                                                }else{
                                                                    if(a[x][y]=='p'){
                                                                        b[x][y]='k';
                                                                    }else{
                                                                        if(a[x][y]=='q'){
                                                                            b[x][y]='j';
                                                                        }else{
                                                                            if(a[x][y]=='r'){
                                                                                b[x][y]='i';
                                                                            }else{
                                                                                if(a[x][y]=='s'){
                                                                                    b[x][y]='h';
                                                                                }else{
                                                                                    if(a[x][y]=='t'){
                                                                                        b[x][y]='g';
                                                                                  
                                                                                    }else{
                                                                                        if(a[x][y]=='u'){
                                                                                            b[x][y]='f';
                                                                                        }else{
                                                                                            if(a[x][y]=='v'){
                                                                                                b[x][y]='e';
                                                                                            }else{
                                                                                                if(a[x][y]=='w'){
                                                                                                    b[x][y]='d';
                                                                                                }else{
                                                                                                    if(a[x][y]=='x'){
                                                                                                        b[x][y]='c';
                                                                                                    }else{
                                                                                                        if(a[x][y]=='y'){
                                                                                                            b[x][y]='b';
                                                                                                        }else{
                                                                                                            if(a[x][y]=='z'){
                                                                                                                b[x][y]='a';
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
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

