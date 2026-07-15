#include <stdio.h>
#include <string.h> // Required for strcmp to compare text

int main() {
    // This creates a text variable that can hold up to 19 characters + 1 null terminator
    char choice[20];

    printf("Enter the secret word ('grey', 'harbor' or 'sealbreath') to unlock a fact: ");
    
    // Use %s for strings. Notice that there is no need for the '&' symbol for char arrays in scanf!
    scanf("%19s", choice); 

    // strcmp returns 0 if the two strings match perfectly
    if (strcmp(choice, "grey") == 0) {
        printf("Grey seals are mammals.\n");
    } else if (strcmp(choice, "harbor") == 0) {
        printf("Harbor seals are mammals.\n");
    } else if (strcmp(choice, "sealbreath") == 0) {
        printf("While humans only swap out about 20%% of the air in their lungs with a single breath, seals can exchange up to 90%%. This, combined with high levels of oxygen-binding proteins in their blood and muscles, allows some species (like the Elephant Seal) to hold their breath for up to two hours and dive deeper than 2,000 feet!\n");
    } else {
        printf("Invalid word. Access denied to the seal knowledge. Try again.\n");
    }

    return 0;
}

// Educational software. Better than a textbook or wikipedia