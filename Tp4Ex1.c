/*
 ============================================================================
 Name        : Tp4Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,s;
	printf("taper un entier ");
	scanf("%d",&n);
	int t[n];
	s=0;
	for(int i=0;i<n;i++){
		scanf("%d",&t[i]);
	s+=t[i];
	}
	printf("le moy de t est %f",s/(n+0.0));
}
