#include <stdio.h>
int main()
{
    int i, j, row;
    int stars = 1, s;
   
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    
    s = row-1;
    
    for(i=1; i<row*2; i++)
    {
        for(j=1; j<=s; j++)
            printf(" ");
            
        for(j=1; j<stars*2; j++)
            printf("*");
        
        printf("\n");
        
        if(i<row)
        {
            s--;
            stars++;
        }
        else
        {
            s++;
            stars--;
        }
    }
    return 0;
}
