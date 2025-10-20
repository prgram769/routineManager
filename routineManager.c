/*This is a routine manager, the program will ask you a routine with hours, breaks and hour to finish, if you complete
properly, you will get a "reward"*/

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void) {
    __int8_t option = 1;
    __int8_t whileComprobation = 1;

    char myTask[512];
    float hoursToCompleteTask;
    short unsigned int breaks;
    short unsigned int hour;
    short unsigned int minutes;

    printf("You must enter a short name for your task: \n");

    fgets(myTask, sizeof(myTask), stdin);
    
    printf("\nRight, now, you must enter the breaks: \n");

    if (scanf("%d", &breaks) == 1)
    {
        printf("\nok\n");

    } else {
        whileComprobation = 1;

        scanf("%*[^\n]%*c");

        do
        {
            printf("Error: You must enter valid data.\n");

            if (scanf("%d", &breaks) == 1)
            {
                printf("\nok\n");

                whileComprobation = 0;
            } else {
                scanf("%*[^\n]%*c");
            }
        } while (whileComprobation == 1);
        
    }

    printf("\nRight, now, you must enter the time that you will use to do that task: \n");

    if (scanf("%f", &hoursToCompleteTask))
    {
        printf("\nok");
    
    } else {
        whileComprobation = 1;

        scanf("%*[^\n]%*c");

        do
        {
            printf("Error: You must enter valid data.\n");

            if (scanf("%f", &hoursToCompleteTask) == 1)
            {
                printf("\nok\n");

                whileComprobation = 0;
            } else {
                scanf("%*[^\n]%*c");
            }
            
        } while (whileComprobation == 1);
        
    }
        
    printf("\nRight, now, you must enter the digital time at you want finish, first you enter the hour and then the minutes: \n");

    if (scanf("%d %d", &hour, &minutes) == 2)
    {
            
    } else {
        
    }
    
}