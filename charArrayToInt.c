

int charArrayToInt(const char* yearInput){
    int result = 0;
    int i = 0;

    while(yearInput[i] != '\0'){
        // multiply the result by 10 and add the digit value
        // subtracting the ASCII value of '0' from the character code of any digit will give us the corresponding integer value
        result = result * 10 + (yearInput[i] - '0');
        i++;
    }

    return result;
}
