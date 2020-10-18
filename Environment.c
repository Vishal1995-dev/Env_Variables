#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

extern char** environ;
int main()
{
	char **env = environ;
	
	printf("Environment variables are\n");
	for(;*env!=NULL;++env)
	{
		printf("%s\n",*env);
	}
	return 0;
}
