#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
	int pid = fork();
	if (pid < 0){
		printf(1, "fork failed\n");
	}else if(pid == 0){ // child proc
		while(1){
			printf(1, "Child\n");
			yield();
		}	
	}else{ // parent proc
		while(1){
			printf(1, "Parent\n");
			yield();
		}
	}
	exit();
}
