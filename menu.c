#include <stdio.h>


int menu(void)
{
	int opc=0;
    do
     {
	printf("Menu\n");
	printf("Opcion \n");
	printf("1-Suma \n2-Resta \n3-Multiplica\n");
	printf("9-Salir\n");
	if(scanf("%d",&opc)!=1)
        {
	  printf("La opcion debe ser numerica, reintenta\n");
	  
	}
	printf("----- %d \n",opc);
	while(getchar()!='\n')
		;
    }while(opc == 0);	
    return opc;
}
