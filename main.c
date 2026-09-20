#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

// TODO: return 1 if the password matches one of a few common weak passwords, else 0
int is_common_password(const char *password) {
    const char *common_passwords[] = {"password", "123456", "qwerty", "letmein", "iloveyou"};
    int num_common = 5;
    for (int i = 0; i < num_common; i++) {
        if (strcmp(common_passwords{i}, password) == 0) {
         return 1;   
        }
    }
    return 0;
}

// TODO: check if the password contains at least one uppercase letter
int has_uppercase(const char *password) {
    for (int i = 0; i <strlen(password); i++) {
        if (isupper(password[i])) {
            return 1;
        }
    }
    return 0;
}

// TODO: check if the password contains at least one lowercase letter
int has_lowercase(const char *password) {
    for (int i = 0; i <strlen(password); i++) {
        if (islower(password[i])) {
            return 1;
        }
    }
    return 0;
}

// TODO: check if the password contains at least one digit
int has_digit(const char *password) {
    return 0;
}

// TODO: check if the password contains at least one special character (e.g. !@#$%^&*)
int has_special(const char *password) {
    return 0;
}

int main(void) {
    char password[MAX_LEN];

    printf("Enter a password to check: ");
    scanf(" %99[^\n]", password);

    int length = strlen(password);
    int score = 0;

    printf("\n--- Password Analysis ---\n");

    // TODO: check length, print a message, and adjust score
    // TODO: call has_uppercase/has_lowercase/has_digit/has_special,
    //       print a message for each missing one, and adjust score
    // TODO: call is_common_password and print a warning if true

    // TODO: based on final score, print "Weak", "Medium", or "Strong"

    return 0;
}