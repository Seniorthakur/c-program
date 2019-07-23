       
       
        /** Program to find that entered year is leap year or not. **/
        #include<stdio.h>
        #include<conio.h>
		 void p11()
      {
      	printf("\n\t\t(Program to find that entered year is leap year or not.)\n");
        int n;
		printf("\n\t\tEnter any Year: ");
		scanf("%d",&n);
		if(n%4==0)
             printf("\n\t\tEntered Year(%d) is a leap year",n);
		else 
		     printf("\n\t\tEntered Year(%d) is not a leap year",n);
		     printf("\n\n\n\t\t***Press Enter for Next Program***\n");
      getch();
	  }

