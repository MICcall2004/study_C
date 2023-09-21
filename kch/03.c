#include <stdio.h>

int main(void)
{
    for (int i = 5; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

//////////////////////////////////////////////

     for (int i = 1; i <= 9; i++)
    {
       printf("%d", 9 * i);
       printf("\n");
    }
    
//////////////////////////////////////////////

    int input;
    scanf("%d", &input);
    if (input > 64 && input < 91)
    {
        printf("대문자 입니다.");
    } else {
        printf("소문자 입니다.\n");
    }
    
    printf("%lf", 100000000 * 0.035 / 12);

    return 0;
}
