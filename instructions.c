#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "instructions.h"
int pwd() {
	int pid, status;
	char* argv[] = { "pwd", 0 }; //arg1은 관례적으로 프로그램명을 사용합니다
	pid = fork(); //프로세스 생성

	switch (pid) {
	case -1:
		printf("fork error \n");
		exit(1);

	case 0:
		execv("/bin/pwd", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

	default:
		wait(&status);
	}

	return 0;
}

	int ls() {
	int pid, status;
	char* argv[] = { "ls",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
		pid = fork(); //프로세스 생성

		switch (pid) {
		case -1:
		printf("fork error \n");
		exit(1);

		case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

		default:
		wait(&status);
	}

	return 0;
}


	int ls_a() {
	int pid, status;
	char* argv[] = { "ls","-a",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
		pid = fork(); //프로세스 생성

		switch (pid) {
		case -1:
		printf("fork error \n");
		exit(1);

		case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

		default:
		wait(&status);
	}

	return 0;
}

	int ls_l() {
	int pid, status;
	char* argv[] = { "ls","-l",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
		pid = fork(); //프로세스 생성

		switch (pid) {
		case -1:
		printf("fork error \n");
		exit(1);

		case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

		default:
		wait(&status);
	}

	return 0;
}

int ls_al() {
	int pid, status;
	char* argv[] = { "ls", "-al",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
	
	pid = fork(); //프로세스 생성
	switch (pid) {
	case -1:
		printf("fork error \n");
		exit(1);
	case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);
	default:
		wait(&status);
	}

	return 0;
}

	int ls_t() {
	int pid, status;
	char* argv[] = { "ls","-t",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
		pid = fork(); //프로세스 생성

		switch (pid) {
		case -1:
		printf("fork error \n");
		exit(1);

		case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

		default:
		wait(&status);
	}

	return 0;
}

	int ls_rt() {
	int pid, status;
	char* argv[] = { "ls","-rt",0 }; //arg1은 관례적으로 프로그램명을 사용합니다
		pid = fork(); //프로세스 생성

		switch (pid) {
		case -1:
		printf("fork error \n");
		exit(1);

		case 0:
		execv("/bin/ls", argv); //프로세스를 해당 경로의 프로그램으로 교체하고 argv를 넘겨줍니다
		printf("exec error \n");
		exit(1);

		default:
		wait(&status);
	}

	return 0;
}
