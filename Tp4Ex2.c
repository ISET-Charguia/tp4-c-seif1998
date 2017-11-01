/*
 ============================================================================
 Name        : Tp4Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,  nn,np,t[30], tp[30], tn[30];
	printf("taper un entier ");
		scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	printf("donner un entier");
	scanf ("%d", &t[i]);
	}
	np=0;nn=0;
	for  (i=0;i<n;i++)
	{
		if (t[i]<0)
		{
			tp[np]=t[i];
		np++;
		}
		else {
			tn[nn]=t[i];
			nn++ ;
		}
	}
	printf("afficher tn :\n");
	for (i=0;i<nn;i++)
	{
	printf("%d ",tn[i]);
	}
	printf("\nafficher tp :\n");
	for (i=0;i<np;i++)
		{
		printf("%d ",tp[i]);
		}

}
