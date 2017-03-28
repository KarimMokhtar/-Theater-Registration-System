#include <iostream>
#include<stdio.h>
using namespace std;
char tableOf_F_Class[4][5],tableOf_S_Class[8][5],tableOf_Th_Class[10][5];
int NumberOfclass;
void instruction()
{
    printf("These are some instruction about our system please read it carefully : \n \n");
    printf("1 : The segment 'O' for available seats in the class .\n");
    printf("2 : The segment 'X' for available seats in the class .\n");
    printf("3 : We have 3 types of classes : \n");
    printf("        First  one consists of 20 seats and the ticket costs 50 L.E .\n");
    printf("        Second one consists of 40 seats and the ticket costs 15 L.E .\n");
    printf("        Third  one consists of 50 seats and the ticket costs 10 L.E .\n\n");
}
void choosing()
{
    printf("Please choose your class 1 , 2 or 3 : ");
}
void First_Class_reset(char table[4][5])
{
    for(int i = 0 ; i < 4 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            table[i][j]='O';
        }
    }
}
void Second_Class_reset(char table[8][5])
{
    for(int i = 0 ; i < 8 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            table[i][j]='O';
        }
    }
}
void Third_Class_reset(char table[10][5])
{
    for(int i = 0 ; i < 10 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            table[i][j]='O';
        }
    }

}
void First_Class(char table[4][5])
{
    int NumberOfSeat=1;
    printf("These are our available and unavailable seats on the first class : \n \n");
    for(int i = 0 ; i < 4 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            printf("%3d,%3c\t",NumberOfSeat, table[i][j]);
            NumberOfSeat++;
        }
        printf("\n \n");
    }
}
void Second_Class(char table[8][5])
{
    int NumberOfSeat=1;
    printf("These are our available and unavailable seats on the second class : \n \n");
    for(int i = 0 ; i < 8 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            printf("%3d,%3c\t",NumberOfSeat, table[i][j]);
            NumberOfSeat++;
        }
        printf("\n \n");
    }
}
void Third_Class(char table[10][5])
{
    int NumberOfSeat=1;
    printf("These are our available and unavailable seats on the third class : \n \n");
    for(int i = 0 ; i < 10 ; ++i )
    {
        for ( int j =0 ; j< 5 ; ++ j)
        {
            printf("%3d,%3c\t",NumberOfSeat, table[i][j]);
            NumberOfSeat++;
        }
        printf("\n \n");
    }
}
void switchOfclass()
{
    choosing();
    scanf("%d",&NumberOfclass);
    switch(NumberOfclass)
    {
    case 1:
        First_Class(tableOf_F_Class);
        break;
    case 2:
        Second_Class(tableOf_S_Class);
        break;
    case 3 :
        Third_Class(tableOf_Th_Class);
        break;
    default :
        printf("Wrong choice \n");
        switchOfclass();
    }
}
void Ticket_reservation()
{
    int numberofseats,*arr;
    switchOfclass();
    printf("Please enter the number of seats you want to reserve : ");
    scanf("%d",&numberofseats);
    arr= new int [numberofseats];
    printf("\nPlease Enters the IDs of the seats you want to reserve separated by a space each one : \n");
    for(int i=0 ; i<numberofseats; i++)
    {
        scanf("%d",&arr[i]);
        if(NumberOfclass==1)
        {
            if(arr[i]<=5)
            {
                if(tableOf_F_Class[0][arr[i]-1]=='O')tableOf_F_Class[0][arr[i]-1]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_F_Class[1][arr[i]-6]=='O')tableOf_F_Class[1][arr[i]-6]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_F_Class[2][arr[i]-11]=='O')tableOf_F_Class[2][arr[i]-11]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_F_Class[3][arr[i]-16]=='O')tableOf_F_Class[3][arr[i]-16]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
        if(NumberOfclass==2)
        {
            if(arr[i]<=5)
            {
                if(tableOf_S_Class[0][arr[i]-1]=='O')tableOf_S_Class[0][arr[i]-1]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_S_Class[1][arr[i]-6]=='O')tableOf_S_Class[1][arr[i]-6]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_S_Class[2][arr[i]-11]=='O')tableOf_S_Class[2][arr[i]-11]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_S_Class[3][arr[i]-16]=='O')tableOf_S_Class[3][arr[i]-16]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=21 && arr[i]<=25)
            {
                if(tableOf_S_Class[4][arr[i]-21]=='O')tableOf_S_Class[4][arr[i]-21]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=26 && arr[i]<=30)
            {
                if(tableOf_S_Class[5][arr[i]-26]=='O')tableOf_S_Class[5][arr[i]-26]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=31 && arr[i]<=35)
            {
                if(tableOf_S_Class[6][arr[i]-31]=='O')tableOf_S_Class[6][arr[i]-31]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=36 && arr[i]<=40)
            {
                if(tableOf_S_Class[7][arr[i]-36]=='O')tableOf_S_Class[7][arr[i]-36]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
        if(NumberOfclass==3)
        {
            if(arr[i]<=5)
            {
                if(tableOf_Th_Class[0][arr[i]-1]=='O')tableOf_Th_Class[0][arr[i]-1]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_Th_Class[1][arr[i]-6]=='O')tableOf_Th_Class[1][arr[i]-6]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_Th_Class[2][arr[i]-11]=='O')tableOf_Th_Class[2][arr[i]-11]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_Th_Class[3][arr[i]-16]=='O')tableOf_Th_Class[3][arr[i]-16]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=21 && arr[i]<=25)
            {
                if(tableOf_Th_Class[4][arr[i]-21]=='O')tableOf_Th_Class[4][arr[i]-21]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=26 && arr[i]<=30)
            {
                if(tableOf_Th_Class[5][arr[i]-26]=='O')tableOf_Th_Class[5][arr[i]-26]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=31 && arr[i]<=35)
            {
                if(tableOf_Th_Class[6][arr[i]-31]=='O')tableOf_Th_Class[6][arr[i]-31]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=36 && arr[i]<=40)
            {
                if(tableOf_Th_Class[7][arr[i]-36]=='O')tableOf_Th_Class[7][arr[i]-36]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=41 && arr[i]<=45)
            {
                if(tableOf_Th_Class[7][arr[i]-41]=='O')tableOf_Th_Class[7][arr[i]-41]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=46 && arr[i]<=40)
            {
                if(tableOf_Th_Class[7][arr[i]-46]=='O')tableOf_Th_Class[7][arr[i]-46]='X';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
    }
    if(NumberOfclass==3)
        printf("The sum of the money he should pay is : %d\n",numberofseats*10);
    else if(NumberOfclass==2)
        printf("The sum of the money he should pay is : %d\n",numberofseats*15);
    else if(NumberOfclass==1)
        printf("The sum of the money he should pay is : %d\n",numberofseats*50);
}
void Ticket_Cancellation()
{
    int numberofseats,*arr;
    switchOfclass();
    printf("Please enter the number of seats you want to undo the reservation : ");
    scanf("%d",&numberofseats);
    arr= new int [numberofseats];
    printf("\nPlease Enters the IDs of the seats you want to undo the reservation separated by a space each one : \n");
    for(int i=0 ; i<numberofseats; i++)
    {
        scanf("%d",&arr[i]);
        if(NumberOfclass==1)
        {
            if(arr[i]<=5)
            {
                if(tableOf_F_Class[0][arr[i]-1]=='X')tableOf_F_Class[0][arr[i]-1]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_F_Class[1][arr[i]-6]=='X')tableOf_F_Class[1][arr[i]-6]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_F_Class[2][arr[i]-11]=='X')tableOf_F_Class[2][arr[i]-11]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_F_Class[3][arr[i]-16]=='X')tableOf_F_Class[3][arr[i]-16]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
        if(NumberOfclass==2)
        {
            if(arr[i]<=5)
            {
                if(tableOf_S_Class[0][arr[i]-1]=='X')tableOf_S_Class[0][arr[i]-1]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_S_Class[1][arr[i]-6]=='X')tableOf_S_Class[1][arr[i]-6]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_S_Class[2][arr[i]-11]=='X')tableOf_S_Class[2][arr[i]-11]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_S_Class[3][arr[i]-16]=='X')tableOf_S_Class[3][arr[i]-16]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=21 && arr[i]<=25)
            {
                if(tableOf_S_Class[4][arr[i]-21]=='X')tableOf_S_Class[4][arr[i]-21]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=26 && arr[i]<=30)
            {
                if(tableOf_S_Class[5][arr[i]-26]=='X')tableOf_S_Class[5][arr[i]-26]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=31 && arr[i]<=35)
            {
                if(tableOf_S_Class[6][arr[i]-31]=='X')tableOf_S_Class[6][arr[i]-31]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=36 && arr[i]<=40)
            {
                if(tableOf_S_Class[7][arr[i]-36]=='X')tableOf_S_Class[7][arr[i]-36]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
        if(NumberOfclass==3)
        {
            if(arr[i]<=5)
            {
                if(tableOf_Th_Class[0][arr[i]-1]=='X')tableOf_Th_Class[0][arr[i]-1]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=6 && arr[i]<=10)
            {
                if(tableOf_Th_Class[1][arr[i]-6]=='X')tableOf_Th_Class[1][arr[i]-6]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=11 && arr[i]<=15)
            {
                if(tableOf_Th_Class[2][arr[i]-11]=='X')tableOf_Th_Class[2][arr[i]-11]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=16 && arr[i]<=20)
            {
                if(tableOf_Th_Class[3][arr[i]-16]=='X')tableOf_Th_Class[3][arr[i]-16]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=21 && arr[i]<=25)
            {
                if(tableOf_Th_Class[4][arr[i]-21]=='X')tableOf_Th_Class[4][arr[i]-21]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=26 && arr[i]<=30)
            {
                if(tableOf_Th_Class[5][arr[i]-26]=='X')tableOf_Th_Class[5][arr[i]-26]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=31 && arr[i]<=35)
            {
                if(tableOf_Th_Class[6][arr[i]-31]=='X')tableOf_Th_Class[6][arr[i]-31]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=36 && arr[i]<=40)
            {
                if(tableOf_Th_Class[7][arr[i]-36]=='X')tableOf_Th_Class[7][arr[i]-36]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=41 && arr[i]<=45)
            {
                if(tableOf_Th_Class[7][arr[i]-41]=='X')tableOf_Th_Class[7][arr[i]-41]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
            else if (arr[i]<=46 && arr[i]<=40)
            {
                if(tableOf_Th_Class[7][arr[i]-46]=='X')tableOf_Th_Class[7][arr[i]-46]='O';
                else
                {
                    printf("Error 404 Not Found , Please enter another number \n");
                    --i;
                }
            }
        }
    }
    if(NumberOfclass==3)
        printf("The sum of the money he should receive back : %d\n",numberofseats*10);
    else if(NumberOfclass==2)
        printf("The sum of the money he should receive back : %d\n",numberofseats*15);
    else if(NumberOfclass==1)
        printf("The sum of the money he should receive back is : %d\n",numberofseats*50);
}
void Reset_the_theatre_reservations()
{
    First_Class_reset(tableOf_F_Class);
    Second_Class_reset(tableOf_S_Class);
    Third_Class_reset(tableOf_Th_Class);
}
int Exit()
{
    return 0;
}
void scenarios()
{
    printf("\nNow please choose one of the following scenarios : \n");
    printf("1 - Ticket reservation : \n");
    printf("2 - TicketCancellation : \n");
    printf("3 - Reset the theatre reservations : \n");
    printf("4 - Exit : \n");
}
void switchOfscenarios()
{
    scenarios();
    scanf("%d",&NumberOfclass);
    switch(NumberOfclass)
    {
    case 1:
        Ticket_reservation();
        switchOfscenarios();
        break;
    case 2:
        Ticket_Cancellation();
        switchOfscenarios();
        break;
    case 3 :
        Reset_the_theatre_reservations();
        switchOfscenarios();
        break;
    case 4 :
        Exit();
        break;
    default :
        printf("Wrong choice \n");
        switchOfscenarios();
    }
}

int main()
{
    instruction();
    First_Class_reset(tableOf_F_Class);
    Second_Class_reset(tableOf_S_Class);
    Third_Class_reset(tableOf_Th_Class);
    switchOfscenarios();
    return 0;
}
