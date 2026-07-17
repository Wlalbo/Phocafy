#include <stdio.h>
#include <string.h> // Required for strcmp to compare text

int main() {
    // This creates a text variable that can hold up to 19 characters + 1 null terminator
    char choice[20];

    printf("Enter a word (type help for options) to get a fact: ");
    
    // Use %s for strings. Notice that there is no need for the '&' symbol for char arrays in scanf!
    scanf("%19s", choice); 

    // strcmp returns 0 if the two strings match perfectly
    if (strcmp(choice, "help") == 0) {
        printf("\n--- Phocafy Keywords ---\n");
        printf("* grey\n");
        printf("* harbor\n");
        printf("* sealbreath\n");
        printf("* sealfood\n");
        printf("* seal\n");
    } else if (strcmp(choice, "grey") == 0) {
        printf("Grey seals are mammals.\n");
    } else if (strcmp(choice, "harbor") == 0) {
        printf("Harbor seals are mammals.\n");
    } else if (strcmp(choice, "sealbreath") == 0) {
        printf("While humans only swap out about 20%% of the air in their lungs with a single breath, seals can exchange up to 90%%. This, combined with high levels of oxygen-binding proteins in their blood and muscles, allows some species (like the Elephant Seal) to hold their breath for up to two hours and dive deeper than 2,000 feet!\n");
    } else if (strcmp(choice, "sealfood") == 0) {
        printf("Seals eat a lot of things, and that includes mostly fish, though, don't get it twisted, they aren't restricted to only eating fish. They eat anything from the aforementioned fish to in rare cases sharks.\n");
    } else if (strcmp(choice, "seal") == 0) {
        printf("Seals are marine mammals that are part of the pinniped family. They are known for their streamlined bodies, flippers, and ability to thrive in aquatic environments. Seals can be found in various regions around the world, from the Arctic and Antarctic to temperate and tropical waters.\n");
    } else {
        printf("Invalid word. Access denied to the seal knowledge. Try again.\n");
    }

    return 0;
}

// better than microsoft encarta. truly the best seal encyclopedia.