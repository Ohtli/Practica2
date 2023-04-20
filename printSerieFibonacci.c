#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc>0){
		int n=atoi(argv[0]);
		if(n<0)
			exit(1);
		int primero=0;
		int segundo=1;
		int resultado, i;
		for(i=0;i<n;i++){
			if(i<=1)
				resultado=i;
			else{
				resultado=primero+segundo;
				primero=segundo;
				segundo=resultado;

			}
		}
		printf("%d\n",resultado);
		return 0;
	} else{
		printf("No hay suficientes parámetros\n");
		exit(1);
	}
}
