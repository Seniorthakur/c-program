

   /** Program to Input in 2d Array for 3*3 Matrix and Display it Assign Form.  **/ 
   
   #include<stdio.h>
   #include<conio.h>
	void p19()
	{
		printf("\n\t\t(Program to Input in 2d Array for example 3*3 Matrix and Display it Assign Form.)\n\n");
		int i,j;
		int matrix[3][3];
			for(i=0;i<3;i++)
			    {
		    	for(j=0;j<3;j++)
				{
		        printf("\t\tEnter Element of Matrix[%d][%d]= ",i,j);
		        scanf("%d",&matrix[i][j]);
		        }
		     }
		     printf("\n");
		printf("\n\t\tThe element of 3*3 Matrix is :\n\n");
		for(i=0;i<3;i++)
		    {
		    	for(j=0;j<3;j++)
		    	printf("\t\t%d\t",matrix[i][j]);
		    	printf("\n");
			}
		printf("\n\n\n\t\t***Press Enter for Next Program***\n");
		getch();
	}
