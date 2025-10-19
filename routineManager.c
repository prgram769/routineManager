/*This is a routine manager, the program will ask you a routine with hours, breaks and hour to finish, if you complete
properly, you will get a "reward"*/

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void) {
    __int8_t option = 1;
    __int8_t whileComprobation = 1;

    char myTask[512];
    __int8_t hoursToCompleteTask;
    __int8_t breaks;
    __int8_t hour;
    __int8_t minutes;

    printf("You must enter a short name for your task: \n");

    fgets(myTask, sizeof(myTask), stdin);
    
    while (whileComprobation == 1)
    {
        printf("\nRight, now, you must enter the breaks: \n");

        if (scanf("%d", &breaks) == 1)
        {
            printf("\nok\n");

            continue;
        } else {
            printf("Error: You must enter valid data.\n");
        }

        printf("\nRight, now, you must enter the time that you will use to do that task: \n");

        if (scanf("%d", &hoursToCompleteTask))
        {
            printf("\nok");

            continue;
        } else {
            printf("Error: You must enter valid data.\n");
        }
        
        printf("\nRight, now, you must enter the digital time at you want finish, first you enter the hour and then the minutes: \n");

        if (scanf("%d %d", &hour, &minutes) == 2)
        {
            
        } else {

        }
        
    }
    
}