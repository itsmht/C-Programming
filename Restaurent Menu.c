#include<stdio.h>
main()
{
    char ch;
    int a,i;

    printf("Welcome to Food Corner\n.............\n\n\nWhat would you like to eat? \n..........\n\n\n>>>MENU<<<\n\nBurger=Rs.200,\nFrench fries=Rs.50,\nPizza=Rs.500,\nSandwiches=Rs.150\n..........\nPress buttons to order:\nB is for Burger.\nF is for French fries.\nP is for pizza.\nS is for sandwiches.\n.........\n\nGive your order by \npressing a button\nand give amount you want?\n::::");
    scanf("%c%d",&ch,&a);

switch(ch)

{
    case 'B':
case 'b':
     i=(a*200);
    printf("Your order is burger.\n\nYour ordered amount:%d\n\nSo,\n\nTotal payment::%d",a,i);
    break;
case'F':
case'f':
    printf("\n\nYour order is French fries.\n\nYour ordered amount:%d\n\nSo,\n\nTotal payment::%d",a,i=(a*50));
    break;
    case'P':
    case'p':
        printf("\n\nYour order is Pizza.\n\nYour ordered amount:%d\n\nSo,\n\nTotal payment::%d",a,i=(a*500));
    break;
    case'S':
    case's':
        printf("\n\nYour order is Sandwich.\n\nYour ordered amount:%d\n\nSo,\n\nTotal payment::%d",a,i=(a*150));
    break;
default :
    if(ch!='B,F,P,S,b,f,p,s')
    {
    printf("\nSorry wrong order.");
break;
}

}
 printf("\n\n\n......Thank you,Please come again.");
}
