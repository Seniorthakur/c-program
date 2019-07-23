


     /**  Program to import 2*3 Matrix and Display it in Transpose 3*2 Matrix **/
     
       #include<stdio.h>
       #include<conio.h>
       void p20()
     	{
		printf("\n\t\t(Program to import 2*3 Matrix and Display it in Transpose 3*2 Matrix)\n\n");
		int i,j;
		int matrix[3][3];
			for(i=0;i<3;i++)
			    {
		    	for(j=0;j<2;j++)
				{
		        printf("\t\tEnter Element of Array[%d][%d]= ",i,j);
		        scanf("%d",&matrix[i][j]);
		        }
		     }
		     printf("\n");
		     printf("\n\t\tThe element of 2*3 Matrix is :\n\n");
		for(i=0;i<2;i++)
		    {
		    	for(j=0;j<3;j++)
		    	printf("\t\t%d\t",matrix[i][j]);
		    	printf("\n");
			}
		printf("\n\t\tThe element of 3*2 Matrix is :\n\n");
		for(j=0;j<3;j++)
		    {
		    	for(i=0;i<2;i++)
		    	printf("\t\t%d\t",matrix[i][j]);
		    	printf("\n");
			}
		printf("\n\n\n\t\t***Press Enter for Next Program***\n");
		getch();
	}
