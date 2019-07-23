    
     
      
       /** C program to display prime numbers between two integers without using function **/
        
         
         
         #include <stdio.h>
         #include<conio.h>

     void p12()
     {
     	printf("\n\t\t(C program to display prime numbers between two integers without using function)\n");
        int num1, num2, i, j, flag;
        printf("\n\t\tEnter two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("\n\t\tPrime numbers between %d and %d are:\n", num1, num2);
        // Displaying prime number between num1 and num2
        for (i = num1 + 1; i < num2; ++i)
        {
           flag = 0; //flag is set to 0
           for (j = 2; j <= i/2; ++j)
           {
              if (i % j == 0)
              {
                flag = 1;
                 break;
              }
           }
       
	        if (flag == 0) //if flag == 0, then display i
            printf("%d\t", i);
        }
         printf("\n\n\n\t\t***Press Enter for Next Program***\n");
        getch();
     }
