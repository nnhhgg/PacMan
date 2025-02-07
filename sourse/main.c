#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#define WALL 100
#define PAC 20
#define Blinky 30
#define Pinky 40

typedef struct PacMan
{
    int x;
    int y;
    char head; // w a s d

} PacMan;

int map[9][9] = {0};
int remain;

int interval(clock_t time_ini, clock_t *tp)
{
    clock_t time_cur;
    double t;
    time_cur = clock();
    t = (double)(time_cur - time_ini) / (CLOCKS_PER_SEC);
    if ((t - time_cur) == 0.125)
    {
        *tp = time_cur;
        return (0);
    }
    else
        return (1);
}

int is_wall(int x, int y)
{
}

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
            else if (map[i][j] == WALL)
                printf("W");
            else if (map[i][j] == PAC)
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
    return (0);
}

int random(int range)
{
    return (rand() % (range + 1));
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
                map[i][j] = WALL;
            else
                map[i][j] = 0;
        }
    }
    map[7][4] = PAC;
    return (0);
}

int find(int a, char flag)
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            if (flag == 'x' && map[i][j] == a)
                return (i);
            else if (flag == 'y' && map[i][j] == a)
                return (j);
        }
    return (-1);
}

int move(int x, int y, char c)
{
    switch (c)
    {
    case ('w'):
    }
}

int main()
{
    double time, *tp;
    clock_t time_ini = clock(), *tp;
    char keyboard;
    int x, y;
    tp = &time_ini;
    while (1)
    {
        while (interval(time_ini, tp))
            ; // 间隔0.125s；
        keyboard = _getch();
        x = find(PAC, 'x');
        y = find(PAC, 'y');
    }
}