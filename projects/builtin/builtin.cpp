#include "builtin.h"

int strLength(char str[]) {
    int count =0;
    while(str[count]!='\0') {
        count++;
    }
    return count;
}
int strCmpLength(char str[],char str2[]){
    int length1 = strLength(str);
    int length2 = strLength(str2);
    if(length1 > length2) 
        return STRCMP_FIRST_LONGER; 
    else if(length2>length1) 
        return STRCMP_SECOND_LONGER;
    else 
        return STRCMP_EQUAL_LENGTH;
}
void toLower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   
        }
        i++;
    }
}
void toUpper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   
        }
        i++;
    }
}
int strConcat(char str[], char str2[], int str_size) {
    int len1 = strLength(str);
    int len2 = strLength(str2);
    if (str_size < len1 + len2 + 1) {
        return FAILURE; 
    }
    for (int i = 0; i < len2; i++) {
        str[len1 + i] = str2[i];
    }
    str[len1 + len2] = '\0';
    return SUCCESS; 
}
int strCpy(char str[], char str2[], int str_size) {
    int len2 = strLength(str2);
    if (str_size <= len2) {
        return FAILURE; 
    }

    for (int i = 0; i < len2; i++) {
        str[i] = str2[i];
    }
    str[len2] = '\0';

    return SUCCESS;
}
