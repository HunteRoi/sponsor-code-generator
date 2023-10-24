#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

char* generateRandomString(int size) {
    char* randomString = (char*)malloc(size + 1);
    if (randomString == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Seed the random number generator
    srand(time(NULL));

    // Generate n-size random digits
    for (int i = 0; i < size; i++) {
        randomString[i] = '0' + (rand() % 10);
    }
    
    randomString[size] = '\0'; // Null-terminate the string
    return randomString;
}

int main(int argc, char *argv[]) {
    if (argc >= 2 && strcmp(argv[1], "flag5(CK_80EO8076E):pale_") == 0) {
        printf("You should check the logo!\n");
    } 
    else {
        int size = 6;
        char* randomString = generateRandomString(size);
        printf("Sponsor code (%d-digit string): %s\n", size, randomString);
        free(randomString); 
    }
    return EXIT_SUCCESS;
}
