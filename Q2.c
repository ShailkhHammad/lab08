#include <stdio.h>
int main()
{
    int arr[10][10];
    printf("populate array (10x10)");
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int max = arr[0][0],x=0,y=0;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if(max<arr[i][j]){
                max=arr[i][j];
                x=i;
                y=j;
            }
        }
    }

    printf("largest num %d is found at [%d,%d] ",max,x,y);


    return 0;
}
