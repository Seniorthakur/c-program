


    /** Program to display first 10 natural no. & their sum. **/
    
	#include<stdio.h>
	#include<conio.h>
	void p17()
	{
		printf("\n\t\t(Program to display first 10 natural no. & their sum.)\n");
		int i,sum=0;
		for(i=1;i<=10;i++)
		{
			printf("\n\t\t%d no is = %d\n",i,i);
			sum=sum+i;
		}
		printf("\n\t\t\tsum = %d",sum);
		printf("\n\n\n\t\t***Press Enter for Next Program***\n");
		getch();
	}
