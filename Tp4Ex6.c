/*
 ============================================================================
 Name        : Tp4Ex6.c
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
	const c3=40;
	int t1[c1],t2[c2],t3[c3] ,n1,n2,n3,i,in1,in2;
	printf("tapeer n1 n2 <20");
	scanf ("%d %d",&n1,&n2);
	for (i=0;i<n1;i++)
	{
		printf("donner un entier");
		scanf ("%d",&t1[i]);
	}
	printf("\n");

for (i=0;i<n2;i++)
{
	printf("donner un entier");
	scanf ("%d",&t2[i]);
}
 in1=0;in2=0;
 for(i=0;i<n1+n2;i++){
	 if((t1[in1]<t2[in2])&&(in1<n1)&&(in2<n2)){
		 t3[i]=t1[in1];
		 in1++;
	 }else if((t1[in1]>t2[in2])&&(in1<n1)&&(in2<n2)){
		 t3[i]=t2[in2];
		 in2++;
	 }else if((in1<n1)&&(in2==n2)){
		 t3[i]=t1[in1];
		 in1++;
	 }else{
		 t3[i]=t2[in2];
		 in2++;
	 }
	 printf("t3[%d]=%d",i,t3[i]);
 }

}
