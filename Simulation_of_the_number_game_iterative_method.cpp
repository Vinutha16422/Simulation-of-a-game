//Simulation of the number game - iterative method
#include <stdio.h>
#include <stdlib.h>

void val_change(int *low,int *high,char val,int n)
{
    if(val=='Y')
    {
        *low=(n+1);
        *high=*high+0;
        return;
    }
    else
    {
        *low=*low+0;
        *high=(n-1);
        return;
    }
    
}

int num_game(int *low,int *high)
{
    int n=0;
    n=((*low)+(*high))/2;
    return n;
}



int main()
{
    int low=0,high=0;
    char val;
    printf("Enter the range of numbers:\n");
    scanf("%d %d",&low,&high);
    for(;;)
    {
        printf("Is the number: %d?\n",num_game(&low,&high));
        printf("Type 'Y' for Yes and 'N' for No\n");
        scanf("\t%c",&val);
        switch(val)
        {
            case 'Y':
            printf("Yayy! The number is %d\n",num_game(&low,&high));
            exit(0);
            case 'N':
            printf("If the number is greater than the displayed value type 'Y' else type 'N'\n");
            scanf("\t%c",&val);
            val_change(&low,&high,val,num_game(&low,&high));
            break;
        }
    }
    return 0;
}
