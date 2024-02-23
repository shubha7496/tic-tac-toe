#include <stdio.h>
#include <stdlib.h>
void ply1();
void ply2();
void chnce(char c);
void disp();
void check();
char arr[3][3];
char c;
int check1;

int main()
{
    int i, j;
    char arr[10][10];
    int ch;
    printf("please select the player One Or twO press 1 Or 2\n");
    scanf("\n%d", &ch);
    if (ch == 1 || ch == 2)
    {
        switch (ch)
        {
        case 1:
            ply1();
            break;
        case 2:
            ply2();
            break;
        }
    }
    else
    {
        printf("please select Only 1 Or 2 ");
    }
    return 0;
}
void check()
{
    if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'X' &&
        arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
        arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == '0' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'X' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'O')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'X' &&
             arr[1][0] == 'X' && arr[1][1] == 'O' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'X' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[0][1] == 'X' && arr[0][2] == 'O' &&
             arr[1][0] == 'O' && arr[1][1] == 'X' && arr[1][2] == 'O' &&
             arr[2][0] == 'X' && arr[2][1] == 'O' && arr[2][2] == 'X')
    {
        printf("The match is Draw!");
        exit(0);
    }
}
void disp()
{
   system("cls");
    printf("    |       |       \n");
    printf(" %c     %c         %c \n", arr[0][0], arr[0][1], arr[0][2]);
    printf("____|_______|_______\n");
    printf("    |       |       \n");
    printf(" %c     %c         %c  \n", arr[1][0], arr[1][1], arr[1][2]);
    printf("____|_______|_______\n");
    printf("    |       |       \n");
    printf(" %c     %c         %c  \n", arr[2][0], arr[2][1], arr[2][2]);
    printf("    |       |       \n");
}
void chnce(char c)
{
    int ch, l = 9;
    scanf("\n%d", &ch);
    if (ch == 1)
    {
        if (arr[0][0] != 0)
        {
            printf("value is present in this pOsitiOn");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {

            arr[0][0] = c;
            disp();
        }
    }
    if (ch == 2)
    {
        if (arr[0][1] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[0][1] = c;
            disp();
        }
    }
    if (ch == 3)
    {
        if (arr[0][2] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[0][2] = c;
            disp();
        }
    }
    if (ch == 4)
    {
        if (arr[1][0] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[1][0] = c;
            disp();
        }
    }
    if (ch == 5)
    {
        if (arr[1][1] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[1][1] = c;
            disp();
        }
    }
    if (ch == 6)
    {
        if (arr[1][2] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[1][2] = c;
            disp();
        }
    }
    if (ch == 7)
    {
        if (arr[2][0] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[2][0] = c;
            disp();
        }
    }
    if (ch == 8)
    {
        if (arr[2][1] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[2][1] = c;
            disp();
        }
    }
    if (ch == 9)
    {
        if (arr[2][2] != 0)
        {
            printf("value is present in this pOsitiOn\n");
            if (check1 == 0)
            {
                ply1();
            }
            else
            {
                ply2();
            }
        }
        else
        {
            arr[2][2] = c;
            disp();
        }
    }
}
void ply1()
{
    
    check1 = 0;
    printf("player 1 turn!\n");
    printf("player 1 Dice is X\n");
    c = 'X';
    chnce(c);
    check();
    if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
    {
        printf("palyer 1 is win");
        exit(0);
    }
    else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
    {
        printf("player 1 is win");
        exit(0);
    }
    else
    {
        ply2();
    }
}
void ply2()
{

    check1 = 1;
    printf("player 2 turn!\n");
    printf("player 2 Dice O\n");
    c = 'O';
    chnce(c);
    check();
    if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
    {
        printf("palyer 2 is win");
        exit(0);
    }
    else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else if (arr[2][0] == 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
    {
        printf("player 2 is win");
        exit(0);
    }
    else
    {
        ply1();
    }
}
