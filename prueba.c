#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define TAM 100

int main() {
    char command[TAM];
    pid_t pid;
    int status;
    char params[TAM];

    while(1) {
        printf("> ");
        fgets(command, TAM, stdin);
	for(int i = 0; i<TAM; i++){
		if(command[i]==' '){
			command[i]='\0';
			strcpy(params,command+i+1);
			break;
		}
	}
	command[strcspn(command,"\n")]=0;
        if(strcmp(command, "salir") == 0) {
            exit(0);
        }
        pid = fork();

	if(pid == 0) {
		if(strlen(params)!=0){
			if (execl(command, params,NULL)!=0){
				printf("No existe\n");
				exit(1);
			}
		} else{
			if (execl(command, NULL)!=0){
				printf("No existe\n");
				exit(1);

			}
		}
        } else if(pid > 0) {
            waitpid(pid, &status, 0);
        } else {
            printf("Error al crear el proceso hijo.\n");
            exit(1);
        }
    }

    return 0;
}
