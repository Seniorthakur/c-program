
#include<stdio.h>
#include<conio.h>
 int p21()
 {
 
	int i,j;
		int a[2][3];
			for(i=0;i<3;i++)
			    {
		    	for(j=0;j<2;j++)
				{
		        printf("Enter Element of Array[%d][%d]= ",i,j);
		        scanf("%d",&a[i][j]);
		        }
		     }
		     printf("\n");
		     printf("\nThe element of 3*2 Matrix is :\n");
		for(i=0;i<3;i++)
		    {
		    	for(j=0;j<2;j++)
		    	printf("\t%d\t",a[j][i]);
		    	printf("\n");
			}
	
		getch();
	}
