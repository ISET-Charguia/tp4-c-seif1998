/*
 ============================================================================
 Name        : TpEx7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const c1=20;
	const c2=20;
	int t[c1][c2],i,j,l,c,s;


	do{
		printf("taper l et c : <20");
		scanf("%d%d",&l,&c);
	}while((l>20)&&(c>20));

	s=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("taper entier");
			scanf("%d",&t[i][j]);
			s+=t[i][j];
		}
	}

	for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				printf("%d ",t[i][j]);
			}
			printf("\n");
}
printf("somme=%d  moy=%d",s,s/(i*j))	;
}
