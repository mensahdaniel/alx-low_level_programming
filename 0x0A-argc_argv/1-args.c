#include<stdio.h>
#include"main.h"
/**
 * main - prints the number of arguments passed to the programe
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return:Always 0 (success)
 */
int main(int argc, char*argv[])
{
	(void) argv; /*ignor argv */
	printf("%d\n", argc - 1);
	return (0);
}
