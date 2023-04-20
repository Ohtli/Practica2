#include<stdio.h>
#include<unistd.h>

int main(){
	printf("El pid del proceso padre es: %d\n",(int) getppid());
	return 0;
}
