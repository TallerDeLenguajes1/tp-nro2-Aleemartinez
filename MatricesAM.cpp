#include <stdio.h>
#include <stdlib.h>

int main()	
{
setvbuf(stdout,NULL,_IONBF,0);

int **matriz ;
int *vectorpares;
int col=rand()%(15-5+1)+5;
int filas=15;
int pares=0;

matriz =(int **) malloc(filas * sizeof(int));

for (int i = 0; i < filas; ++i)
{
	*(matriz+i)= (int *) malloc (col * sizeof(int));
}

for (int j = 0; j < filas; ++j)
{
	for (int k = 0; k < col; ++k)
	{
		*(*(matriz+j)+k)=rand()%(999-100+1)+100;
	}
}

	vectorpares=(int *) malloc(filas * sizeof(int));
for (int l = 0; l < filas; ++l)
{
	pares=0;
	for (int m = 0; m < col; ++m)
	{
		printf("%d ",*(*(matriz+l)+m));
		if (*(*(matriz+l)+m)%2==0)
		{

		pares++;
		}	
		*(vectorpares+l)=pares;
	}
		printf("La fila %d tiene %d numeros pares",l+1, pares );
	printf("\n");
}

	printf("Los elementos del vector 'vectorpares' son: ");
	for (int p = 0; p < filas; ++p)
	{
		printf(" %d ",vectorpares[p]);
	}


free(vectorpares);
vectorpares=NULL;
free(matriz);
matriz=NULL;

	return 0;
}
