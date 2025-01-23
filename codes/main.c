#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main()
{
    clock_t time_now, time_end;
    int j;
    double temp, temp0 = 1.;
    time_now = clock();

    for (j = 0;; j++)
    {
        time_end = clock();
        temp = (double)(time_end - time_now) / CLOCKS_PER_SEC;
        if (temp - temp0 == 1)
        {
            printf("Time now is %f s", temp);
            temp0 = temp;
        }
        if (temp > 10)
            return (0);
    }
}