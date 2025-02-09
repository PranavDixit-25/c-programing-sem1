#include <stdio.h>


int main() {
    // Printing team member information
    printf("Tanya Choudhary 590013811 \n");
    printf("Pranav Dixit  590014481 \n");
    printf("Ayush Tyagi 590012594 \n");
    printf("Inder Mohindra 590011910 \n");
	int max_book = 100;
    int max;  // Variable to store the maximum number of books the user can add
    printf("Enter the maximum number of books in the library (up to %d): \n", max_book);
    scanf("%d", &max);  // Take input from the user for maximum books

    // Ensure that the user doesn't exceed the maximum allowed number of books
    if (max > max_book)
	{
        printf("Exceeded maximum allowed books. Setting to %d.\n", max_book);
        max = max_book;
    }
    // Arrays to store details of the books
    int id[max_book];           // Stores the ID of each book
    char title[max_book][100];  // Stores the title of each book
    char author[max_book][100]; // Stores the author of each book
    int is_borrowed[max_book];  // Stores whether the book is borrowed (0: available, 1: borrowed)

    // Arrays to keep track of borrowed books and students who borrowed them
    int borrowed_book_ids[max_book]; // Stores the IDs of borrowed books
    int student_ids[max_book];       // Stores the IDs of students who borrowed books
    int days_late[max_book];         // Stores the number of days a book was returned late

    int book_count = 0;     // Counter to keep track of the number of books in the library
    int borrowed_count = 0; // Counter to keep track of the number of borrowed books

    
    while (1) {  // Infinite loop to keep showing the menu until the user chooses to exit
        int choice;  // Variable to store the user's choice from the menu
        // Display the menu options
        printf("\nLibrary Management System\n");
        printf("1. Add a Book\n");
        printf("2. Borrow a Book\n");
        printf("3. Return a Book\n");
        printf("4. Generate Reports\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  // Read the user's choice

        // Switch statement to handle the user's choice
        switch (choice) {
            case 1:  // Option to add a new book
                if (book_count >= max) {  // Check if the library is already full
                    printf("Library is full! Cannot add more books.\n");
                } else {
                    // Adding a new book
                    printf("Enter Book ID: ");
                    scanf("%d", &id[book_count]);  // Input for the book ID
                    getchar();  // To consume the leftover newline character after scanf
                    printf("Enter Book Title: ");
                    fgets(title[book_count], sizeof(title[book_count]), stdin);  // Input for the book title
                    
                    printf("Enter Book Author: ");
                    fgets(author[book_count], sizeof(author[book_count]), stdin);  // Input for the author
                    
                    is_borrowed[book_count] = 0; // Mark the book as available (0 means available)
                    book_count++;  // Increment the book counter
                    printf("Book Added Successfully.\n");
                }
                break;

            case 2: {  // Option to borrow a book
                int student_id, book_id, i;  // Variables to store student and book IDs
                printf("Enter Student ID: ");
                scanf("%d", &student_id);  // Input for student ID
                printf("Enter Book ID: ");
                scanf("%d", &book_id);  // Input for book ID

                // Check if the book with the given ID is available in the library
                int found = 0;  // Flag to check if the book was found
                for (i = 0; i < book_count; i++) {  // Iterate over the list of books
                    if (id[i] == book_id) {  // If the book ID matches
                        found = 1;  // Mark the book as found
                        if (is_borrowed[i]) {  // Check if the book is already borrowed
                            printf("Book is already borrowed.\n");
                        } else {  // If the book is available for borrowing
                            is_borrowed[i] = 1;  // Mark the book as borrowed (1 means borrowed)
                            borrowed_book_ids[borrowed_count] = book_id;  // Track the borrowed book's ID
                            student_ids[borrowed_count] = student_id;  // Track the student who borrowed the book
                            days_late[borrowed_count] = 0;  // Initialize late days to 0
                            borrowed_count++;  // Increment the borrowed book counter
                            printf("Book Borrowed Successfully by Student %d.\n", student_id);
                        }
                        break;
                    }
                }
                if (!found) {  // If no book with the given ID is found
                    printf("Book not found.\n");
                }
                break;
            }

            case 3: {  // Option to return a borrowed book
                int student_id, book_id, days_late_value, i, j;  // Variables to store necessary details
                printf("Enter Student ID: ");
                scanf("%d", &student_id);  // Input for student ID
                printf("Enter Book ID: ");
                scanf("%d", &book_id);  // Input for book ID

                // Check if the student has borrowed the book
                int found = 0;  // Flag to check if the borrowed record exists
                for (i = 0; i < borrowed_count; i++) {  // Iterate over borrowed books
                    if (borrowed_book_ids[i] == book_id && student_ids[i] == student_id) {  // Match student and book
                        found = 1;  // Borrowed record found
                        printf("Enter Number of Days Late: ");
                        scanf("%d", &days_late_value);  // Input for number of days late

                        days_late[i] = days_late_value;  // Store the late days
                        if (days_late_value > 0) {  // If the book is returned late
                            int fine = days_late_value * 10;  // Calculate fine (Rs. 10 per day late)
                            printf("Fine of Rs. %d Applied.\n", fine);
                        }
                        printf("Book Returned Successfully.\n");

                        // Mark the book as available again
                        for (j = 0; j < book_count; j++) {
                            if (id[j] == book_id) {
                                is_borrowed[j] = 0;  // Mark the book as available
                            }
                        }
                        break;
                    }
                }
                if (!found) {  // If no borrowed record found for the student and book
                    printf("No record found for this book and student.\n");
                }
                break;
            }

            case 4: {  // Option to generate reports (list of available and borrowed books)
                int i;
                // Display all available books
                printf("\nList of All Available Books:\n");
                for (i = 0; i < book_count; i++) {  // Iterate over all books
                    if (!is_borrowed[i]) {  // If the book is available (not borrowed)
                        printf("Book ID: %d, Title: \"%s\", Author: \"%s\"\n", id[i], title[i], author[i]);
                    }
                }

                // Display all borrowed books
                printf("\nList of Borrowed Books:\n");
                for (i = 0; i < borrowed_count; i++) {  // Iterate over borrowed books
                    printf("Student ID: %d, Borrowed Book ID: %d\n", student_ids[i], borrowed_book_ids[i]);
                }
                break;
            }

            case 5:  // Option to exit the program
                return 0;  // Exit the program

            default:  // Handle invalid menu choices
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;  // End of the program
}
