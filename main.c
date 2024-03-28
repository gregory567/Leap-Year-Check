#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "numericCheck.h"
#include "charArrayToInt.h"
#include "leapYearCheck.h"

int main(){

    printf("Welcome to the Leap Year Check Application!\n"
           "Please enter a year and the program will automatically check if it is a leap year or not.\n"
           "You are only allowed to enter numeric values.\n");


    char continueDecision;
    char yearInput[5];
    int year;

    do{

        printf("\nPlease provide the year you would like to check here: ");

        scanf("%s", yearInput);
        printf("\nYou have entered: %s\n", yearInput);

        if(numericCheck(yearInput, 5) == true){
            year = charArrayToInt(yearInput);
            if(leapYearCheck(year) == true){
                printf("\nThe year %i is a leap year.\n", year);
            } else {
                printf("\nThe year %i is not a leap year.\n", year);
            }
        } else {
            printf("\nThe string '%s' you have entered contains invalid characters.\n"
                   "Please enter a new number.\n", yearInput);
            continue;
        }

        printf("\nDo you wish to continue with checking another year?\n"
               "Type 'Y' or 'y' for yes or any other button to exit: ");
        fflush(stdin);
        scanf("%c", &continueDecision);

    }while(continueDecision == 'Y' || continueDecision == 'y');


    return 0;
}

