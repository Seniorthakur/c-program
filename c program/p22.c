





      #include<stdio.h>
      #include<conio.h>
      p22()
      {
      	int i,j;
		int a[2][2];
		int b[2][2];
			for(i=0;i<2;i++)
			    {
		    	for(j=0;j<2;j++)
				{
		        printf("Enter Element of 1st Matrix[%d][%d]= ",i,j);
		        scanf("%d",&a[i][j]);
		        }
		     }
		     printf("\n");
		     	for(i=0;i<2;i++)
			    {
		    	for(j=0;j<2;j++)
				{
		        printf("Enter Element of 2st Matrix[%d][%d]= ",i,j);
		        scanf("%d",&b[i][j]);
		        }
		     }
		     printf("\nThe Sum of 1st and 2nd Matrix is :\n");
		for(i=0;i<2;i++)
		    {
		    	for(j=0;j<2;j++)
		    	printf("\t%d\t",a[i][j]+b[i][j]);
		    	printf("\n");
			}
	
		getch();
	}
