#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#define Wall 100
#define Pac 20
#define Blinky 30
#define Pinky 40

typedef struct PacMan
{
    int x;
    int y;
    char head; // w a s d

} PacMan;

int map[9][9] = {0};

int print(int map[9][9])
{

    for (int j = 0; j < 11; j++)
    {
        printf("W");
    }
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        printf("W");
        for (int j = 0; j < 9; j++)
        {
            if (map[i][j] == 1)
                printf("*");
            else if (map[i][j] == Wall)
                printf("W");
            else if (map[i][j] == Pac)
                printf("C");
            else if (map[i][j] == Blinky)
                printf("B");
            else if (map[i][j] == Pinky)
                printf("P");
            else
                printf(" ");
        }
        printf("W\n");
    }
    for (int j = 0; j < 11; j++)
    {
        printf("W");
    }
}

int iniMap(int map[9][9])
{
    int i, j;
    int map0[9][9] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 1, 1, 1, 0},
        {0, 1, 1, 1, 0, 1, 1, 1, 0},
        {0, 1, 0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 1, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0}};
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (map0[i][j] == 1)
                map[i][j] = Wall;
            else
                map[i][j] = 0;
        }
    }
    return (0);
}

int main()
{
    int map[9][9] = {0};
    iniMap(map);
    print(map);
    system("pause");
    return (0);
}