

        /**  Program to find the simple interest **/

           #include<stdio.h>
           #include<conio.h>

              void p5()
                {
                  printf("\n\t\t(Program to find the simple interest)\n");	
                  int p,r,t,si;
                  printf("\n\t\tEnter Principle : ");
                  scanf("%d",&p);
                  printf("\n\t\tEnter Rate : ");
                  scanf("%d",&r);
                  printf("\n\t\tEnter Time : ");
                  scanf("%d",&t);
                  si=(p*r*t)/100;
                  printf("\n\t\tSimple Intrest = %d \n\n",si);
                  printf("\n\t\t***Press Enter for Next Program***\n");
				  getch();
				}
