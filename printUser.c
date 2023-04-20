#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Id usuario: %d, Nombre usuario: %s\n",(int) getuid(), getlogin());
	return 0;
}
