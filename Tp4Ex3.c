/*
 ============================================================================
 Name        : Tp4Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n=0;
	int x,t[n];
	printf("taper x:");
	scanf("%d",&x);
	int r=0;

	do{
		r=x%2;
		t[n]=r;
		n=n+1;
		x=x/2;

	}while(x!=0);
	for(int i=n-1;i>-1;i--)
		printf("%d ",t[i]);
}
