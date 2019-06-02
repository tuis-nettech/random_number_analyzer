#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    printf("--==num game==--\n\n");
// generate a random number

    //Wanna get MilliSec to make better randomnumber
    int num = 30;
    printf("Guess the number from 0 to 99.\n");
    printf("The answer is %d.\n",num);
    // start the game
    int ans=0;
// start main rutine
    while(1)
    {
        printf("Enter your answer.\n");
        scanf("%d",&ans);
        printf("You enterd %d.\n",ans);
        
        if (ans == num)
        {
            printf("Collect!!\n");
            break;
        }
        else if (ans > num)
            {
                printf("Too huge.\n");
            }
            else
            {
                printf("Too small.\n");
            };
    printf("The answer is %d.\n",num);
    };
};
