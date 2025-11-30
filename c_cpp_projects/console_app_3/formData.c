#include "formData.h"
#include <stdio.h>
#include <string.h>

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

    printf(" Enter name: ");
    fgets(data->name, MAX_NAME_LENGTH, stdin);
    data->name[strcspn(data->name, "\n")] = '\0';

    printf(" Enter email: ");
    fgets(data->email, MAX_EMAIL_LENGTH, stdin);
    data->email[strcspn(data->email, "\n")] = '\0';

    printf(" Enter phone: ");
    fgets(data->phone, MAX_PHONE_LENGTH, stdin);
    data->phone[strcspn(data->phone, "\n")] = '\0';

    printf(" Enter age: ");
    if (scanf("%d", &data->age) != 1) {
        while (getchar() != '\n');
        return 0;
    }
    while (getchar() != '\n');

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
