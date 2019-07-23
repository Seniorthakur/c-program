

    /** Program to show swap of two no’s without using third variable **/
      
      #include<stdio.h>
      #include<conio.h>
          void p8()
            {
            	printf("\n\t\t(Program to show swap of two no’s without using third variable)\n");
                int a,b;
                printf("\n\t\tEnter value for a & b: ");
                scanf("%d%d",&a,&b);
                a=a+b;
                b=a-b;
                a=a-b;
                printf("\n\t\tAfter swapping the value of a & b: %d %d \n\n",a,b);
                printf("\n\t\t***Press Enter for Next Program***\n");
				getch();
			}
