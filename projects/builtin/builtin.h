typedef enum {
    STRCMP_EQUAL_LENGTH = 0,
    STRCMP_FIRST_LONGER = 1,
    STRCMP_SECOND_LONGER = 2
} StrCmpResult;
typedef enum {
    FAILURE = -1,
    SUCCESS = 1,
} strConcat,strCpy;
int strLength(char arr[]);
int strCmpLength(char str[],char str2[]);
void toLower(char str[]);
void toUpper(char str[]);
int strConcat(char str[],char str2[],int str_size);
int strCpy  (char str[],char str2[],int str_size);
