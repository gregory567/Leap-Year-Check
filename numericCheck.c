#include <stdbool.h>

bool numericCheck(const char* yearInput, int lengthOfYearInput){
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int reachedEndOfString = 0;

    for(int i = 0; i <= lengthOfYearInput; i++){
        if(yearInput[i] == '\0' && reachedEndOfString == 0){
            reachedEndOfString = 1;
            for(int j = 0; j < i; j++){
                int isNumeric = 0;
                for(int k = 0; k < 10; k++){
                    if(yearInput[j] == numbers[k]){
                        isNumeric = 1;
                        break;
                    }
                }
                if(isNumeric == 0){
                    // non-numeric character found
                    return false;
                }
            }
        }
    }

    // all characters in the char array are numeric
    return true;
}
