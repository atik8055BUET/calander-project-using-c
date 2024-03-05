/**
Programmer's name:
    MD Atikul Islam, CGC, class-12, Roll:230, batch:20-21

Program making time: 5-6 hours
program's ability:
    **It can calculate up to 55 lack years.If you give any year above 55 lack,
    it cannot calculate.You should enter between 55 lack years.
**/
//printf("\n");
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    while(1)
    {
    system("cls");
    long int default_date_year,default_date_year_2,user_date_year,user_date_year_2;
    long int default_date_leap_year,user_date_leap_year,count_leap_year,count_total_year_diff;
    long int count_total_day_diff,count_total_week_diff,count_user_year_first_day;
    int calender_template_initial,calender_template_width=13,calender_template_height=6;
    int calender_template_initial_2,user_year_month_initial_day,count_date_per_month=1,user_year_next_month_initial_day=1;
    int total_date_per_month,count_the_running_month=1,total_month_of_every_year=12;
    int user_year_leap_year_test,user_date_year_change_28_diff;
    default_date_year=2000;
    default_date_year_2=default_date_year;
    printf("Enter Your Year:");
    scanf("%ld",&user_date_year);
    user_date_year_2=user_date_year;
    //leap year count
    if(user_date_year>default_date_year)
    {
        count_leap_year=0;
        for(;default_date_year<user_date_year;default_date_year=default_date_year+1)
        {
        if((default_date_year%400)==0)
        {
            count_leap_year=count_leap_year+1;
        }
        else if ((default_date_year%100)!=0 && (default_date_year%4==0))
        {
            count_leap_year=count_leap_year+1;
        }
        else
        {
            count_leap_year=count_leap_year;
        }
        }
    }
    else if(user_date_year==default_date_year)
    {
        count_leap_year=0;
    }
    else if(user_date_year<default_date_year)
    {
        count_leap_year=0;
        for(;user_date_year<default_date_year;user_date_year=user_date_year+1)
        {
        if((user_date_year%400)==0)
        {
            count_leap_year=count_leap_year+1;
        }
        else if ((user_date_year%100)!=0 && (user_date_year%4==0))
        {
            count_leap_year=count_leap_year+1;
        }
        else
        {
            count_leap_year=count_leap_year;
        }
        }
    }
    default_date_year=default_date_year_2;
    user_date_year=user_date_year_2;
    count_total_year_diff=abs(default_date_year-user_date_year);
    count_total_day_diff=((count_total_year_diff*365)+count_leap_year);
    if(default_date_year>user_date_year)
    {
        count_user_year_first_day=(7-(count_total_day_diff%7))+1;
        if(count_user_year_first_day>7)
        {
            count_user_year_first_day=count_user_year_first_day-7;
        }
    }
    else
    {
        count_user_year_first_day=(count_total_day_diff%7)+1;
    }
    if(count_user_year_first_day==1)
    {
        //printf("\nThe first day of %ld is= \"SATURDAY\"",user_date_year);
        user_year_month_initial_day=1;
    }
    else if(count_user_year_first_day==2)
    {
        //printf("\nThe first day of %ld is= \"SUNDAY\"",user_date_year);
        user_year_month_initial_day=3;
    }
    else if(count_user_year_first_day==3)
    {
        //printf("\nThe first day of %ld is= \"MONDAY\"",user_date_year);
        user_year_month_initial_day=5;
    }
    else if(count_user_year_first_day==4)
    {
        //printf("\nThe first day of %ld is= \"TUESDAY\"",user_date_year);
        user_year_month_initial_day=7;
    }
    else if(count_user_year_first_day==5)
    {
        //printf("\nThe first day of %ld is= \"WEDNESDAY\"",user_date_year);
        user_year_month_initial_day=9;
    }
    else if(count_user_year_first_day==6)
    {
        //printf("\nThe first day of %ld is= \"THURSDAY\"",user_date_year);
        user_year_month_initial_day=11;
    }
    else if(count_user_year_first_day==0 ||count_user_year_first_day==7)
    {
        //printf("\nThe first day of %ld is= \"FRIDAY\"",user_date_year);
        user_year_month_initial_day=13;
    }
    else
    {
        printf("\nCalculation ERROR");
        continue;
        system("pause");
    }
    printf("\n");

    //Leap year test
    if((user_date_year%400)==0)
    {
        user_year_leap_year_test=1;
    }
    else if ((user_date_year%100)!=0 && (user_date_year%4==0))
    {
        user_year_leap_year_test=1;
    }
    else
    {
        user_year_leap_year_test=0;
    }

    //Drawing the calender
    for(;count_the_running_month<=total_month_of_every_year;count_the_running_month=count_the_running_month+1)
    {

    //counting the total date of every month
    if(count_the_running_month==1||count_the_running_month==3||count_the_running_month==5||count_the_running_month==7||count_the_running_month==8||count_the_running_month==10||count_the_running_month==12)
    {
        total_date_per_month=31;
    }
    else if(count_the_running_month==2)
    {
        total_date_per_month=28+user_year_leap_year_test;
    }
    else
    {
        total_date_per_month=30;
    }
    //month nameing
    if(count_the_running_month==1)
    {
        printf("\n\n\tJanuary\n");
    }
    else if(count_the_running_month==2)
    {
        printf("\n\n\tFebruary\n");
    }
    else if(count_the_running_month==3)
    {
        printf("\n\n\tMarch\n");
    }
    else if(count_the_running_month==4)
    {
        printf("\n\n\tApril\n");
    }
    else if(count_the_running_month==5)
    {
        printf("\n\n\tMay\n");
    }
    else if(count_the_running_month==6)
    {
        printf("\n\n\tJune\n");
    }
    else if(count_the_running_month==7)
    {
        printf("\n\n\tJuly\n");
    }
    else if(count_the_running_month==8)
    {
        printf("\n\n\tAugust\n");
    }
    else if(count_the_running_month==9)
    {
        printf("\n\n\tSeptember\n");
    }
    else if(count_the_running_month==10)
    {
        printf("\n\n\tOctober\n");
    }
    else if(count_the_running_month==11)
    {
        printf("\n\n\tNovember\n");
    }
    else if(count_the_running_month==12)
    {
        printf("\n\n\tDecember\n");
    }
    if(count_the_running_month>1)
    {
        user_year_month_initial_day=user_year_next_month_initial_day;
    }
    count_date_per_month=1;
    for(calender_template_initial=1;calender_template_initial<=calender_template_width;calender_template_initial=calender_template_initial+1)
    {
        if(calender_template_initial==1)
        {
            printf("Sa");
        }
        else if(calender_template_initial==3)
        {
            printf("Su");
        }
        else if(calender_template_initial==5)
        {
            printf("Mo");
        }
        else if(calender_template_initial==7)
        {
            printf("Tu");
        }
        else if(calender_template_initial==9)
        {
            printf("We");
        }
        else if(calender_template_initial==11)
        {
            printf("Th");
        }
        else if(calender_template_initial==13)
        {
            printf("Fr");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
    for(calender_template_initial=1;calender_template_initial<=calender_template_height;calender_template_initial=calender_template_initial+1)
    {
        for(calender_template_initial_2=1;calender_template_initial_2<=calender_template_width;calender_template_initial_2=calender_template_initial_2+1)
        {
            if(count_date_per_month<10)
            {
                if(calender_template_initial_2==user_year_month_initial_day&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;

                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+2)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+4)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+6)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+8)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+10)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+12)&& count_date_per_month<=total_date_per_month)
                {
                    printf(" %d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else
            {
                printf("  ");
            }
            }
            else
            {
                if(calender_template_initial_2==user_year_month_initial_day&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+2)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+4)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+6)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+8)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+10)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else if(calender_template_initial_2==(user_year_month_initial_day+12)&& count_date_per_month<=total_date_per_month)
                {
                    printf("%d",count_date_per_month);

                    if(count_date_per_month==total_date_per_month)
                    {
                        user_year_next_month_initial_day=calender_template_initial_2+2;
                    }
                    count_date_per_month=count_date_per_month+1;
                }
            else
            {
                printf("  ");
            }
            }

        }
        printf("\n");
        user_year_month_initial_day=1;
    }
    //stop drawing the first month
    }
    system("pause");
    }
    system("pause");

}
