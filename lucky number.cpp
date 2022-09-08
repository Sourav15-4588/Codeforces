#include<stdio.h>

int main()
{
    int a[14]={4, 7, 44, 47, 74, 77, 444, 447, 474,
                477, 744, 747, 774, 777};

     int i, n, flag = 0;;

     scanf("%d", &n);
    for(i = 0; i < 14; i++)
    {
        if(n%a[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}