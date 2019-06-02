#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>


int main()
{
    printf("--==num game==--\n\n");
// generate a random number
    struct timeval tv;
    gettimeofday(&tv, NULL);
    srand((unsigned int)tv.tv_usec);

    int num = rand()%100;
    printf("Guess the number from 0 to 99.\n");
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
                printf("Too huge.\n\n");
            }
            else
            {
                printf("Too small.\n\n");
            };
    };
};
