#include <stdio.h>

int main(void)
{
    char raw[3];
    int i;
    char tmp;

    while(scanf("%s", raw) == 1)
    {
        if(raw[1] > raw[0]) 
        {
            tmp = raw[0];
            raw[0] = raw[1];
            raw[1] = tmp;
        }
        if(raw[2] > raw[0]) 
        {
            tmp = raw[0];
            raw[0] = raw[2];
            raw[2] = tmp;
        }

        if(raw[2] > raw[1])
        {
            tmp = raw[1];
            raw[1] = raw[2];
            raw[2] = tmp;
        }

        printf("%c ", raw[2]);
        printf("%c ", raw[1]);
        printf("%c", raw[0]);
        printf("\n");
    }

    return 0;
}
