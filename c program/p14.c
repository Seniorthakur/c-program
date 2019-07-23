

   
   
   /** Program to shift inputed data by two bits to the left. **/ 
   #include<stdio.h>
   #include<conio.h>
   void p14() 
   {
   	printf("\n\t\t(Program to shift inputed data by two bits to the left.)\n");
   int x,y;
   printf("\n\t\tRead the integer from keyboard :- ");
   scanf("%d",&x);
   x<<=3;
   y=x;
   printf("\n\t\tThe left shifted data is = %d ",y);
   printf("\n\n\n\t\t***Press Enter for Next Program***\n");
   getch();
   } 
