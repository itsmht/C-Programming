#include<stdio.h>
int main()
{
   char a;
   int b,c;
    printf("        Welcome to Food Corner\n            ..........\n            ..........\n            ..........\n\n\n");

    printf("        What would you like to eat?\n\n\n");
    printf("        ###  Here is the Menu  ###\n\n\n");
    printf(" OPTION           ITEM            PRICE(Rs.)\n");
    printf("    B            Burger             200\n");
    printf("    F          French Fries         50\n");
    printf("    P            Pizza              500\n");
    printf("    S           Sandwich            150\n");
    printf("          ###################\n\n\n");
    printf("        Enter your OPTION\n\n");
    scanf("%c", &a);
    printf("              Quantity \n\n");
    scanf("%d", &b);

    switch(a)
    {
        case 'B':
        case 'b':
            c=b*200;
        printf("        You ordered Burger.\n\n        Quantity: %d\n        Total payment: %d\n",b,c);
        break;
        case 'F':
        case 'f':
            c=b*50;
        printf("        You ordered French Fries.\n\n        Quantity: %d\n        Total payment: %d\n",b,c);
        break;
        case 'P':
        case 'p':
            c=b*500;
        printf("        You ordered Pizza.\n\n        Quantity: %d\n        Total payment: %d\n",b,c);
        break;
        case 'S':
        case 's':
            c=b*150;
        printf("        You ordered Sandwich.\n\n        Quantity: %d\n        Total payment: %d\n",b,c);
        break;
        default:printf("                Not Valid ");
    }
    printf("        Thank you\n\n        Please come again\n\n");
    printf("::::::::########$$$$$$$@@@@@@@$$$$$$$%%%%%%%%%&&&&&&&########::::::::");
}
