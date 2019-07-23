


 
   /** Program to store 9 number With constant value in two dimension Array that is three into matrix  and print in matrix form. **/ 
   
   #include<stdio.h>
   #include<conio.h>
	void p18()
	{
		printf("\n\t\t(Program to store 9 number With constant value in two dimension Array that is three into matrix  and print in matrix form.)\n");
		int i,j;
		int matrix[3][3]={100,200,300,200,150,50,350,500,600};
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
