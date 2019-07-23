   
   
   /** Program to find greatest in 3 numbers. **/
   
       #include <stdio.h>
       #include<conio.h>
 
    void p10()
     {
    
            printf("\n\t\t(Program to find greatest in 3 numbers.)\n");
    
            int num1, num2, num3;
            printf("\n\t\tEnter the 1st no : ");
          	scanf("%d",&num1);
          	printf("\n\t\tEnter the 2nd no : ");
          	scanf("%d",&num2);	
			printf("\n\t\tEnter the 3rd no : ");
          	scanf("%d",&num3);
        if (num1 > num2)
         {
          if (num1 > num3)
         {
            printf("\n\t\t%d is the greatest among three ",num1);
         }
         else
         {
            printf("\n\t\t%d is the greatest among three ",num3);
         }
      }
        else if (num2 > num3)
           printf("\n\t\t%d is the greatest among three",num2);
        else
          printf("\n\t\t% is the greatest among three ",num3);
          printf("\n\n\n\t\t***Press Enter for Next Program***\n");
        getch();
	}
