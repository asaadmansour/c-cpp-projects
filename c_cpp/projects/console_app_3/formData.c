#include "formData.h"
#include "input.h"
#include <stdio.h>
#include <string.h>

int read_input_with_esc(char* buffer, int max_length) {
    int pos = 0;
    buffer[0] = '\0';
    
    while (1) {
        int ch = input_getch();
        
        if (ch == 27) {
            return -1;
        }
        
        if (ch == '\n' || ch == '\r' || ch == 10 || ch == 13) {
            buffer[pos] = '\0';
            printf("\n");
            return pos;
        }
        
        if (ch == 127 || ch == 8) {
            if (pos > 0) {
                pos--;
                printf("\b \b");
            }
        }
        else if (ch >= 32 && ch < 127 && pos < max_length - 1) {
            buffer[pos++] = ch;
            printf("%c", ch);
        }
    }
}

FormData form_data_create(void) {
    FormData d;
    form_data_clear(&d);
    return d;
}

void form_data_clear(FormData* data) {
    if (!data) return;
    data->name[0] = '\0';
    data->email[0] = '\0';
    data->phone[0] = '\0';
    data->age = 0;
    data->is_valid = 0;
}

int form_data_is_empty(const FormData* data) {
    return data->name[0] == '\0';
}

int form_data_validate(const FormData* data) {
    if (!data) return 0;
    if (data->name[0] == '\0') return 0;
    if (data->email[0] == '\0') return 0;
    if (data->phone[0] == '\0') return 0;
    if (data->age <= 0) return 0;
    return 1;
}

int form_data_input(FormData* data) {
    if (!data) return 0;

    printf(" (Press ESC to cancel and return to menu)\n\n");

    int valid = 0;
    int i;
    
    while (!valid) {
        printf(" Enter name: ");
        if (read_input_with_esc(data->name, MAX_NAME_LENGTH) == -1) {
            printf("\n Cancelled. Returning to menu...\n");
            return 0;
        }
        
        i = 0;
        while (data->name[i] == ' ') i++;
        if (data->name[i] == '\0') {
            printf(" Invalid name! Please enter a non-empty name.\n");
            continue;
        }
        
        int hasLetter = 0;
        int isValidName = 1;
        for (i = 0; data->name[i] != '\0'; i++) {
            if ((data->name[i] >= 'a' && data->name[i] <= 'z') || 
                (data->name[i] >= 'A' && data->name[i] <= 'Z')) {
                hasLetter = 1;
            } else if (data->name[i] != ' ') {
                isValidName = 0;
                break;
            }
        }
        
        if (!hasLetter || !isValidName) {
            printf(" Invalid name! Name should contain only letters and spaces.\n");
            continue;
        }
        
        valid = 1;
    }
    
    valid = 0;
    while (!valid) {
        printf(" Enter email: ");
        if (read_input_with_esc(data->email, MAX_EMAIL_LENGTH) == -1) {
            printf("\n Cancelled. Returning to menu...\n");
            return 0;
        }
        
        i = 0;
        while (data->email[i] == ' ') i++;
        if (data->email[i] == '\0') {
            printf(" Invalid email! Please enter a non-empty email.\n");
            continue;
        }
        
        int hasAt = 0;
        int hasDot = 0;
        int atPos = -1;
        int dotPos = -1;
        
        for (i = 0; data->email[i] != '\0'; i++) {
            if (data->email[i] == '@') {
                if (hasAt) {
                    hasAt = -1;
                    break;
                }
                hasAt = 1;
                atPos = i;
            } else if (data->email[i] == '.') {
                hasDot = 1;
                dotPos = i;
            }
        }
        
        if (!hasAt || hasAt == -1 || atPos == 0 || atPos == (int)strlen(data->email) - 1) {
            printf(" Invalid email! Email must contain @ symbol.\n");
            continue;
        }
        
        if (!hasDot || dotPos <= atPos + 1 || dotPos == (int)strlen(data->email) - 1) {
            printf(" Invalid email! Email must have a valid domain (e.g., @example.com).\n");
            continue;
        }
        
        valid = 1;
    }
    
    valid = 0;
    while (!valid) {
        printf(" Enter phone: ");
        if (read_input_with_esc(data->phone, MAX_PHONE_LENGTH) == -1) {
            printf("\n Cancelled. Returning to menu...\n");
            return 0;
        }
        
        i = 0;
        while (data->phone[i] == ' ') i++;
        if (data->phone[i] == '\0') {
            printf(" Invalid phone! Please enter a non-empty phone number.\n");
            continue;
        }
        
        int digitCount = 0;
        int isValidPhone = 1;
        for (i = 0; data->phone[i] != '\0'; i++) {
            if (data->phone[i] >= '0' && data->phone[i] <= '9') {
                digitCount++;
            } else if (data->phone[i] != ' ' && data->phone[i] != '-' && data->phone[i] != '+') {
                isValidPhone = 0;
                break;
            }
        }
        
        if (!isValidPhone) {
            printf(" Invalid phone! Phone should contain only digits, spaces, - or +.\n");
            continue;
        }
        
        if (digitCount < 7 || digitCount > 15) {
            printf(" Invalid phone! Phone number should be between 7-15 digits.\n");
            continue;
        }
        
        valid = 1;
    }
    
    valid = 0;
    while (!valid) {
        printf(" Enter age: ");
        char age_buffer[20];
        if (read_input_with_esc(age_buffer, 20) == -1) {
            printf("\n Cancelled. Returning to menu...\n");
            return 0;
        }
        
        i = 0;
        while (age_buffer[i] == ' ') i++;
        
        if (age_buffer[i] == '\0') {
            printf(" Invalid age! Please enter a valid positive number.\n");
            continue;
        }
        
        if (age_buffer[i] == '-' || age_buffer[i] == '+') {
            printf(" Invalid age! Age cannot be negative or have a sign.\n");
            continue;
        }
        
        if (age_buffer[i] < '0' || age_buffer[i] > '9') {
            printf(" Invalid age! Please enter a valid positive number.\n");
            continue;
        }
        
        if (age_buffer[i] == '0' && age_buffer[i+1] >= '0' && age_buffer[i+1] <= '9') {
            printf(" Invalid age! Leading zeros are not allowed.\n");
            continue;
        }
        
        data->age = 0;
        int hasDecimal = 0;
        while (age_buffer[i] != '\0') {
            if (age_buffer[i] >= '0' && age_buffer[i] <= '9') {
                data->age = data->age * 10 + (age_buffer[i] - '0');
            } else if (age_buffer[i] == '.') {
                hasDecimal = 1;
                break;
            } else if (age_buffer[i] != ' ') {
                printf(" Invalid age! Please enter only numbers.\n");
                data->age = -1;
                break;
            } else {
                break;
            }
            i++;
        }
        
        if (data->age == -1) {
            continue;
        }
        
        if (hasDecimal) {
            printf(" Invalid age! Age must be a whole number, not a decimal.\n");
            continue;
        }
        
        while (age_buffer[i] == ' ') i++;
        
        if (age_buffer[i] != '\0') {
            printf(" Invalid age! Please enter only numbers.\n");
            continue;
        }
        
        if (data->age <= 0) {
            printf(" Invalid age! Age must be a positive number.\n");
            continue;
        }
        
        if (data->age > 150) {
            printf(" Invalid age! Please enter a realistic age (1-150).\n");
            continue;
        }
        
        valid = 1;
    }

    data->is_valid = form_data_validate(data);
    return data->is_valid;
}

void form_data_print(const FormData* data) {
    if (!data) return;
    printf("  Name : %s\n", data->name);
    printf("  Email: %s\n", data->email);
    printf("  Phone: %s\n", data->phone);
    printf("  Age  : %d\n", data->age);
}
