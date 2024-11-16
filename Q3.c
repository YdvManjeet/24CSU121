// Wap to find who scored first "99" in an array marks.
#include <stdio.h>

int main(){
    int score [5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i + 1);
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (score[i]==99)
        {
            printf("The first to score 99 is %d\n",i+1);
            break;
        }
        
    }
    
    return 0;
}