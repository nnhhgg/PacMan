#include <stdio.h>
#define Wall 100
#define Pac 20
#define Blinky 30
#define Pinky 40

int print(int map[20][20])
{

    for (int j = 0; j < 22; j++)
    {
        printf("□");
    }
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("□");
        for (int j = 0; j < 20; j++)
        {
            if (map[i][j]==1)
                printf("*");
            else if(map[i][j]==Wall)
                printf("□");
            else if(map[i][j]==Pac)
                printf("C");
            else if(map[i][j]==Blinky)
                printf("B");
            else if(map[i][j]==Pinky)
                printf("P");
        }
        printf("□\n");
    }
    for (int j = 0; j < 22; j++)
    {
        printf("□");
    }
}