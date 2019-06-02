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

    int num = rand() % 100;
    printf("Going to guess the number from 0 to 99.\n");
    // start the game
    int ans=50;
    int guessmax=100;
    int guessmin=0;
    int lasttry=ans;
    lasttry = ans;
// start main rutine
    while(1)
    {
        printf("Entering suggensted answer.\n");
//      scanf("%d",&ans);
        printf("I enterd %d.\n",ans);
        
        if (ans == num)
        {
            printf("Collect!!\n");
            break;
        }
        else if (ans > num)
            {
                printf("Too huge.\n\n");
                guessmax = lasttry;
                ans = ((guessmax + guessmin)/2);
            }
            else
            {
                printf("Too small.\n\n");
                guessmin = lasttry;
                ans = ((guessmax + guessmin)/2);
            };
        printf("My answer is %d.\n",ans);
        printf("My guessmin is %d.\n",guessmin);
        printf("My guessmax is %d.\n",guessmax);
        lasttry=ans;
    };
};
