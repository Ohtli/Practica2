#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Id del grupo: %d\n",(int) getgid());
	return 0;
}
