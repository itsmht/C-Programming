#include<stdio.h>
int main()
{
    int a,offer,date,visa,ticket,confirmation;


    printf("                        Welcome to Travel Agency\n\n\n---------------------------------------------------------------------------------------------------------------------\n\n\n");


    printf("                        What do you want to know?\n\n");
    printf("                        1.I want to know about traveling to India\n");
    printf("                        2.I want to know about traveling to Bhutan\n");
    printf("                        3.I want to know about traveling to Nepal\n");
    printf("                        4.I want to know about traveling to Bangladesh\n");
    printf("                        5.I want to know about traveling to Maldives\n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:printf("Have you got your VISA? \n 1. y \n 2. n\n");
        scanf("%d", &visa);
        if(visa==1)
        {
            printf("Have you booked ticket? \n 1. y \n 2. n\n");
            scanf("%d", &ticket);
            if(ticket==1)
            {
                printf("We have some offers for you.\n1. 3 days and 2 nights Ladakh trip.\n2. 10 days Jummu and Kashmir trip\n");
                scanf("%d",&offer);
                if(offer==1)
                {
                    printf("Fix the date. We have these dates.\n  1. 2nd March.\n  2. 17th March\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                      printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }

                }
                else
                {
                    printf("Fix the date. We have these dates.\n  1. 2nd March.\n  2. 17th March\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                     printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }


                }

            }
            else
                printf("Get the ticket and then contact with us.");
        }
        else
           {
            printf("Get your VISA first");}
            break;





            case 2:printf("Have you got your VISA? \n 1. y \n 2. n\n");
        scanf("%d", &visa);
        if(visa==1)
        {
            printf("Have you booked ticket? \n 1. y \n 2. n\n");
            scanf("%d", &ticket);
            if(ticket==1)
            {
                printf("We have some offers for you.\n1. 6 days and 7 nights Tiger's Nest trip.\n2. 15 days Full Bhutan trip\n");
                scanf("%d",&offer);
                if(offer==1)
                {
                    printf("Fix the date. We have these dates.\n  1. 14th April.\n  2. 25th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                      printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }

                }
                else
                {
                    printf("Fix the date. We have these dates.\n  1. 14th April.\n  2. 25th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                     printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }


                }

            }
            else
                printf("Get the ticket and then contact with us.");
        }
        else
           {
            printf("Get your VISA first");}
            break;






            case 3:printf("Have you got your VISA? \n 1. y \n 2. n\n");
        scanf("%d", &visa);
        if(visa==1)
        {
            printf("Have you booked ticket? \n 1. y \n 2. n\n");
            scanf("%d", &ticket);
            if(ticket==1)
            {
                printf("We have some offers for you.\n1. 4 days and 5 nights Pokhara trip.\n2. 25 days Full Nepal trip\n");
                scanf("%d",&offer);
                if(offer==1)
                {
                    printf("Fix the date. We have these dates.\n  1. 7th March.\n  2. 5th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                      printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }

                }
                else
                {
                    printf("Fix the date. We have these dates.\n  1. 7th March.\n  2. 5th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                     printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }


                }

            }
            else
                printf("Get the ticket and then contact with us.");
        }
        else
           {
            printf("Get your VISA first");}
            break;









        case 4:printf("Have you got your VISA? \n 1. y \n 2. n\n");
        scanf("%d", &visa);
        if(visa==1)
        {
            printf("Have you booked ticket? \n 1. y \n 2. n\n");
            scanf("%d", &ticket);
            if(ticket==1)
            {
                printf("We have some offers for you.\n1. 5 days and 6 nights Bandarban trip.\n2. 13 days Full Chattogram trip\n");
                scanf("%d",&offer);
                if(offer==1)
                {
                    printf("Fix the date. We have these dates.\n  1. 9th March.\n  2. 12th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                      printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }

                }
                else
                {
                    printf("Fix the date. We have these dates.\n  1. 9th March.\n  2. 12th May\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                     printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }


                }

            }
            else
                printf("Get the ticket and then contact with us.");
        }
        else
           {
            printf("Get your VISA first");}
            break;







            case 5:printf("Have you got your VISA? \n 1. y \n 2. n\n");
        scanf("%d", &visa);
        if(visa==1)
        {
            printf("Have you booked ticket? \n 1. y \n 2. n\n");
            scanf("%d", &ticket);
            if(ticket==1)
            {
                printf("We have some offers for you.\n1. 2 days and 3 nights Male trip.\n2. 7 days Full Maldives trip\n");
                scanf("%d",&offer);
                if(offer==1)
                {
                    printf("Fix the date. We have these dates.\n  1. 1st March.\n  2. 12th June\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                      printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }

                }
                else
                {
                    printf("Fix the date. We have these dates.\n  1. 1st March.\n  2. 12th June\n");
                    scanf("%d", &date);
                    if(date==1)
                    {
                        printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }
                    else
                    {
                     printf("Your request has been taken. Please confirm. \n 1. C\n 2. NC\n");
                        scanf("%d", &confirmation);
                        if(confirmation==1)
                            printf("Thank you for confirming. Have a great tour");
                        else
                            printf("Thank you for visiting us. Come back soon");
                    }


                }

            }
            else
                printf("Get the ticket and then contact with us.");
        }
        else
           {
            printf("Get your VISA first");}
            break;


    }
}
