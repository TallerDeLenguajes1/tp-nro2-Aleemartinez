#include <stdio.h>
#include <stdlib.h>

int main()	
{
setvbuf(stdout,NULL,_IONBF,0);

#define N 4
#define M 5

double mt[N][M];

for (int i = 0; i < N; ++i)
{
	for (int j = 0; j < M; ++j)
	{
	 *(*(mt+i)+j)=rand()%11;
	}
}

for(int f = 0;f<N; f++)
{
 for(int l = 0;l<M; l++)
{
	printf("%.2lf ",*(*(mt+f)+l));
}
printf("\n");
}
	return 0;
}
