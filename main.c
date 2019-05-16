#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "instructions.h"
#define size 10

int main()
{
	char str[size]; 

	printf("-------------------SHELL-------------------\n");
	printf("pwd, ls, ls -a, ls -l, ls -al, ls -t, ls -rt, exit\n");
	
	while (true)
	{
		printf("-> ");
		gets(str);
		

        if (!strcmp("pwd", str))
			pwd();
        
	
		if (!strcmp("ls", str))
			ls();

		if (!strcmp("ls -a", str))
			ls_a();
		
		if (!strcmp("ls -l", str))
			ls_l();
	
		if (!strcmp("ls -al",str))
			ls_al();
		
		if (!strcmp("ls -t", str))
			ls_t();
		
		if (!strcmp("ls -rt", str))
			ls_rt();
		

		if (!strcmp("exit", str))
			break;
		
	}

	return 0;
}
