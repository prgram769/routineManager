/*This is a routine manager, the program will ask you a routine with hours, breaks and hour to finish, if you complete
properly, you will get a "reward"*/

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void) {
    __int8_t option = 1;
    __int8_t whileComprobation = 0;

    char myTask[512];
    int hoursToCompleteTask;

    printf("You must enter a short name for your task: \n");

    fgets(myTask, sizeof(myTask), stdin);
    
    printf("\nRight, now, you must enter the time that you will use to do that task: \n");

    if (scanf("%d", &hoursToCompleteTask) == 1)
    {
        printf("\nok\n");
    } else {
        printf("Error: You must enter valid data.\n");

        whileComprobation = 1;
    }
    
    while (whileComprobation == 1)
    {
        printf("\nRight, now, you must enter the time that you will use to do that task: \n");

        if (scanf("%d", &hoursToCompleteTask) == 1)
        {
            printf("\nok\n");

            whileComprobation = 0;
        } else {
            printf("Error: You must enter valid data.\n");

            whileComprobation = 1;
        }
    }
    
}