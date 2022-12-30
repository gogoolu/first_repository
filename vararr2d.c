#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int *p = NULL;
	
		p = (int *)malloc(sizeof(int) * 10);
		printf("%p\n", p);
		p = (int *)malloc(sizeof(int) * 10);
		printf("%p\n", p);
		free(p);
}