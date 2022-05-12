#include <stdio.h>
#include <conio.h>
#include <time.h>

struct bill
  {
   char item[40];
   float qty, price;
  };

int main()
{
     struct bill b[100];
    system("  color 0c");
     int i=0, c=1;
     char ch;
     float amt, total=0,tax,taxAmt;
    puts("\n============================================================ \n");
do
  {
    fflush(stdin);
    printf(" Enter Product Name  :");
    gets(b[i].item);
    printf(" Enter Qty and Price : ");
    scanf("%f%f",&b[i].qty, &b[i].price);
    fflush(stdin);
    printf("Add More Items [y/n]");
    scanf("%c",&ch);
if(ch=='y')
{i++;c++;};
}
while(ch=='y');
 printf("\n============================================================\n\n");
 printf("       C E N T R O  S P O R T S  S T O R E\n");
 puts("\n============================================================");
 printf("%-10s%15s%17s%17s\n", "Item", "Qty", "Price", "Amount");
 puts("------------------------------------------------------------");
  for(i=0;i<c;i++)
    {
      amt=b[i].qty*b[i].price;
      total=total+amt;
      printf("%-9s %16.2f\t%10.2f\t%11.2f\n",b[i].item, b[i].qty,b[i].price, amt);
    }
  puts("------------------------------------------------------------");

  printf("Total Amount :\t\t\t\t\t\%.3f\n",total);


  if(total< 800)
    {
     tax = total*3/100;
     taxAmt = total + tax;
     printf("Total amount with GST:\t\t\t\t\%0.2f\n",taxAmt);\
    }
  else if(total>800 && total< 2000)
     {
       tax = total*5/100;
       taxAmt = total + tax;
       printf("Total amount with GST:\t\t\t\t\%0.2f \n",taxAmt);
     }
  else if(total>2000 && total< 5000)
    {
      tax = total*7/100;
      taxAmt = total + tax;
      printf("Total amount with GST:\t\t\t\t\%0.2f \n",taxAmt);
    }
  else
    {
      tax = total*10/100;
      taxAmt = total + tax;
      printf("Total amount with GST:\t\t\t\t\%0.2f \n",taxAmt);
    }
  puts("\n------------------------------------------------------------");

   time_t t;
   time(&t);
   printf("\n\nBilling Date: %s", ctime(&t));
   puts("\n============================================================\n");

 puts("Thank you for shopping from Centro Sports Store.\n");
 printf("Happy Shopping!\n");
 puts("\n============================================================\n");

}

