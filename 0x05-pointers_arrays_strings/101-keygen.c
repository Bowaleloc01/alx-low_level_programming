#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomChar() {
    int randomNum = rand() % 62;
    
    if (randomNum < 10) {
        return '0' + randomNum;
    } else if (randomNum < 36) {
        return 'A' + (randomNum - 10);
    } else {
        return 'a' + (randomNum - 36);
    }
}

void generatePassword() {
    char password[PASSWORD_LENGTH + 1];
    int i;
    
    srand(time(NULL));
    
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    
    password[PASSWORD_LENGTH] = '\0';
    
    printf("Generated Password: %s\n", password);
}

int main() {
    generatePassword();
    return 0;
}
