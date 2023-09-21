#include <stdio.h>

int main(void)
{
    double a;
    scanf("%lf", &a);
    
    for (int i = 0; i <= a; i++)
    {
        for (int j = a; j >= 0; j--)
        {
            if (i*j == a)
            {
                printf("%d ", i);
            }
            
        }  
    }
    printf("dd");

    for(int i = 0; i<a ; i++){
        if(a/i==0){
            printf("%d ",i);
        }
    }
    
    

    return 0;
}
