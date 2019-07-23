


       /**  Program to reverse a given number **/
       
      #include<stdio.h>
      #include<conio.h>
      
    void p9()
        {
        	printf("\n\t\t(Program to reverse a given number)\n");
            int n,a,r=0; 
            printf("\n\t\tEnter any no to get its reverse: ");
            scanf("%d",&n);
            while(n>=1)
              {
                a=n%10;
                r=r*10+a;
                n=n/10;
              }
            printf("\n\t\tAfter Reverse = %d\n\n",r);
            printf("\n\t\t***Press Enter for Next Program***\n");
            getch();
		}

