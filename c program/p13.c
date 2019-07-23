


 /** Program to find whether given no. is even or odd. **/
 
 #include<stdio.h>
 #include<conio.h> 
     void p13() 
      {
    	printf("\n\t\t(Program to find whether given no. is even or odd.)\n");
        int n;
        printf("\n\t\tEnter any no: ");
        scanf("%d",&n);
      if(n%2==0)                                                   // Checking If n/2 reminder equal to zero not.
        printf("\n\t\t%d is even",n);                              // Displaying number as Even
       else
        printf("\n\t\t%d is odd",n);                               // Displaying number as Odd
        printf("\n\n\n\t\t***Press Enter for Next Program***\n");
        getch(); 
      }  

