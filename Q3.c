#include <stdio.h>
#include <stdlib.h>

struct ProductPacket {
    int productId;
    // Add other relevant fields here
};

int main() {
    int initialCapacity = 10;
    struct ProductPacket* inventory = (struct ProductPacket*)malloc(initialCapacity * sizeof(struct ProductPacket));

    if (inventory == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    // Initialize inventory data (e.g., product IDs)

    // Suppose demand increases, and we need to add more packets
    int newCapacity = 20;
    struct ProductPacket* resizedInventory = (struct ProductPacket*)realloc(inventory, newCapacity * sizeof(struct ProductPacket));

    if (resizedInventory == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        free(inventory); // Clean up previous allocation
        exit(1);
    }

    // Update pointers and continue using resizedInventory

    // When done, free allocated memory
    free(resizedInventory);

    return 0;
}
