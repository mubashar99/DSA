/*Students need to check the availability of a book in the library
based on its ID. Create an ordered list which will contain only
book id. Implement a C program to search whether a particular
book is available in the list or not.*/


#include <stdio.h>

#define MAX_BOOKS 100 // Maximum number of books (adjust as needed)

// Assume an ordered list of book IDs
int bookList[MAX_BOOKS] = {101, 205, 310, 415, 520}; // Example book IDs

int searchBook(int bookId, int numBooks) {
    // Binary search to find the book
    int left = 0;
    int right = numBooks - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (bookList[mid] == bookId)
            return 1; // Book found
        else if (bookList[mid] < bookId)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0; // Book not found
}

int main() {
    int numBooks = 5; // Number of books in the list

    int bookIdToSearch;
    printf("Enter the book ID to check availability: ");
    scanf("%d", &bookIdToSearch);

    if (searchBook(bookIdToSearch, numBooks))
        printf("Book with ID %d is available in the library.\n", bookIdToSearch);
    else
        printf("Book with ID %d is not available.\n", bookIdToSearch);

    return 0;
}
