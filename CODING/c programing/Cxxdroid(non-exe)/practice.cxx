#include <stdio.h>
#include <stdbool.h>
int main()
{
    int p = 6, l, q = 1;
    bool t = true;
    bool f = false;
    printf("%lu\n", sizeof(p));
    printf("%d %d", t, f); //long unsigned int
    if (p == t)
    {
        printf("jai mata di ");
    }
    else
    {
        printf("harr  har mahadev\n");
    }
    l = (p == t) ? printf("TRUE\n") : printf("FALSE\n");
    switch (p)
    {
    case 1:
        printf("monday\n");
        break;
    default:
        printf("looking forward\n");
        break;
    }
    while (p <= 10)
    {
        printf("%d\n", p);
        p++;
    }
    do
    {
        printf("%d\n", q);
        q++;
    } while (q < 5);
    int i = 0;
    for (i; i < 10; i++)
    {
        printf("RaMa");
    }
    for (i; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            continue; //eliminates the things you want to
        }
        printf("%d\n", i);
    }
    char array[100] = "jhdffbkcykicuyxuicybrfiy";
    printf("%c\n", array[7]);
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d\n", matrix[0][2]);
    int j, k;
    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("%d ", matrix[j][k]);
        }
    }printf("\n");
    char s[]="helloWorld!";
    printf("%c", s[5]);
    printf("%lu\n", sizeof(s));
    char str[]={'h', 'e', 'l', 'o', '\0'};
    printf("%lu\n", sizeof(str));
    return 0;
}