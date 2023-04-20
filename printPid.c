#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Id del proceso: %d\n", (int) getpid());
	return 0;
}
