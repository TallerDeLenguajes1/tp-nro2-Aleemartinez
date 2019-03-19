#include <stdio.h>
#include <stdlib.h>

void main ()
{
	setvbuf(stdout,NULL,_IONBF,0);
	int buff[5]={5,15,30,10,35};
	int *p;

	p=buff;

	//1) Acceda a los elementos mediante notacion subindexada

	for (int i = 0; i < 5; ++i)
	{
		buff[i];
		printf("%d\n",buff[i] );
	}

	//2 Acceda a los elementos del aray mediante el puntero p con aritmetica de punteros

	for (int j = 0; j < 5; ++j)
	{
		printf("%d\n",*p++);
	}

	//3 Acceda a los elementos del array mediante el arreglo con aritmetica de punteros

	for (int k = 0; k < 5; ++k)
	{
		printf("%d\n",*(buff+k));
	}

	
	//4	Obtener las direcciones de memoria y mostrarlas por pantalla mediante aritmetica de punteros 

	for (int l = 0; l < 5; ++l)
	 {
	 	printf("%d\n", p+l);
	 } 

	 //5 que tamaño tiene el arreglo buffy el puntero? muestre por pantalla

	 printf("Tamaño de buff: %d ----- Tamaño de p: %d",sizeof(buff),sizeof(p));

}