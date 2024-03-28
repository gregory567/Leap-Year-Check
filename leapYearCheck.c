#include <stdbool.h>

bool leapYearCheck(int year){

    int check;

    check = year / 4;
    if(check * 4 == year){
        check = year / 100;
        if(check * 100 == year){
            check = year / 400;
            if(check * 400 == year){
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}
