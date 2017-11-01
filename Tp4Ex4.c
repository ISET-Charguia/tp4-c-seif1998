/*
 ============================================================================
 Name        : Tp4Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t1[6], t2[6],t3[6];
	for (int i=0;i<6;i++)
	{
		printf("donner un enter");
		scanf("%d %d",&t1[i],&t2[i]);

	}
	for(int i=0;i<6;i++)
			printf("%d ",t1[i]);
		printf("\n");
		for(int i=0;i<6;i++)
				printf("%d ",t2[i]);
		printf("\n");

	for (int i=0;i<6;i++)
	{
		t3[i]=t1[i];
		t1[i]=t2[i];
		t2[i]=t3[i];

	}

	for(int i=0;i<6;i++)
		printf("%d ",t1[i]);
	printf("\n");
	for(int i=0;i<6;i++)
			printf("%d ",t2[i]);



}

