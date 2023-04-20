#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Id de sesión: %d\n",(int) getsid(0));
	return 0;
}
