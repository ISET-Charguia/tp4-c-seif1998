/*
 ============================================================================
 Name        : Tp4Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	const c=100;
	int n,m,i,x,y;
	int t[c];
	do{
		printf ("taper ua entier ");
			scanf ("%d",&n);
	}while(n>100);
	for ( i=0;i<n;i++)
	{
	scanf(" %d" ,&t[i]);

	}
	printf("\n");
	for ( i=0;i<n;i++)
				{
				printf("%d ",t[i]);
				}printf("\n");

	int ch;
	do{
		do{
			printf("\ntaper votre choix : 1 2 3 4 5");
			scanf("%d",&ch);
		}while((ch<1)&&(ch>5));

		switch (ch)
		{
		case 1: m=t[0];
		for(i=1;i<n;i++)
		{
			if(t[i]<m)
				m=t[i];
		}
		printf("min : %d\n",m);

		break;
		case 2:printf("taper x et y:");
		scanf("%d %d",&x,&y);
		for(i=0;i<n;i++)
		{
			if(t[i]==x)
				t[i]=y;
		}
		for ( i=0;i<n;i++)
			{
			printf("%d ",t[i]);
			}
		break;
		case 3:printf("taper pos et entier");
		scanf("%d %d",&y,&x);
		n++;
		for(i=n;i>y;i--)
		{
			t[i]=t[i-1];
		}
		t[y]=x;
		for ( i=0;i<n;i++)
					{
					printf("%d ",t[i]);
					}
		break;
		case 4:printf("taper un entier");
		scanf("%d",&x);
		int i=0,l=n;
			do{
				if(t[i]==x)
				{
					for(int j=i;j<l;j++)
			         {
						t[j]=t[j+1];

					}
					l--;
				}
			i++;
			}while(i<=l-1);
			for ( i=0;i<l;i++)
						{
						printf("%d ",t[i]);
						}
			break;
		case 5:break;
		}
	}while(ch!=5);
}
