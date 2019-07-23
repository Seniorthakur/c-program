


    /**  Program to calculate sum of 5 subjects and find percentage **/

         #include<stdio.h>
         #include<conio.h>
      
         void p7()
          {
          	printf("\n\t\t(Program to calculate sum of 5 subjects and find percentage)\n");
            int s1,s2,s3,s4,s5,sum,total=500;
            float per;
            printf("\n\t\tEnter marks of 5 subjects: ");
            scanf("\n\t\t%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
            sum=s1+s2+s3+s4+s5;
            printf("\n\t\tSum = %d",sum);
            per=(sum*100)/total;
            printf("\n\t\tpercentage = %f \n\n",per);
            printf("\n\t\t***Press Enter for Next Program***\n");
			getch();
		  }   
