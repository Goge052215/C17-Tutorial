#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

#define N 10

// Function to reverse and print a series of numbers
void reverse() {
    // Declare an array 'a' to store the numbers and an integer 'i' for iteration
    int a[N], i;

    // Prompt the user to enter N numbers
    printf("Enter %d numbers: ", N);

    // Loop to read N numbers from the user and store them in the array 'a'
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]); // Read and store each number in the array
    }

    // Print the message indicating the start of reversed order numbers
    printf("In reverse order: ");
    // Loop to print the numbers in reverse order
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]); // Print each number in reverse order
    }
    // Print a newline character after printing all numbers in reverse order
    printf("\n");
}

void repdigit() {
    // Initialize an array to keep track of digits that have been seen.
    bool digit_seen[10] = {false};
    int digit; // Variable to store the current digit being checked.
    long n; // Variable to store the user input number.

    // Prompt the user to enter a number.
    printf("Enter a number: ");
    scanf("%ld", &n); // Read the user input into variable n.

    // Loop until all digits of the number have been checked or a repeated digit is found.
    while (n > 0) {
        digit = n % 10; // Extract the last digit of n.
        // Check if the digit has been seen before.
        if (digit_seen[digit]) {
            break; // If digit has been seen, exit the loop.
        }
        digit_seen[digit] = true; // Mark the digit as seen.
        n /= 10; // Remove the last digit from n.
    }

    // After exiting the loop, check why the loop was exited.
    if (n > 0) {
        // If n is greater than 0, a repeated digit was found.
        printf("Repeated digit\n");
    } else {
        // If n is not greater than 0, all digits were unique.
        printf("No repeated digit\n");
    }
}

void interest() {
    /* Prints a table of compound interest */
#define NUM_RATES ((int) (sizeof(value)) / sizeof(value[0]))
#define INITIAL_BALANCE 100.00
    int i, low_rate, num_years, years;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter the number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for(years = 1; years <= num_years; years++) {
        printf("%3d    ", years);
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}

// Function to simulate dealing a hand of cards
void deal() {
    // Define constants for the number of suits and ranks
#define NUM_SUITS 4
#define NUM_RANKS 13

    // Initialize a 2D array to keep track of which cards are in hand
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;

    // Arrays to map numerical rank and suit to their character codes
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                              '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    // Seed the random number generator
    srand((unsigned) time(NULL));

    // Prompt user for the number of cards in hand
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    // Deal the cards and print them out
    printf("Your hand: ");
    while (num_cards > 0) {
        // Generate a random suit and rank
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        // Check if the card is already in hand
        if (!in_hand[suit][rank]) {
            // If not, add the card to the hand and print it
            num_cards--;
            printf("  %c%c", rank_code[rank], suit_code[suit]);
        }
    }

    // Print a newline at the end
    printf("\n");
}

void reverse2() {
    /* This is an improved version of reversing the digit order you entered */
    int i, n;

    printf("How many numbers do you want to reverse: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("In reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }

    printf("\n");
}

void repdigit2() {
    /* This is an improved version of checking repeating digit */
    bool digit_seen[10] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    n = labs(n); // Handle negative numbers
    i = 0; // Initialize an indicator

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("The repeated digit: %d\n", digit);
            i++; // The indicator +1 after every repeated digit appears;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (i > 0) {
        // If the indicator is greater than 0, a repeated digit was found.
        printf("Repeated digit\n");
        printf("Exiting indicator value: %d\n", i);
    } else {
        // If the indicator is not greater than 0, all digits were unique.
        printf("No repeated digit\n");
    }
}

void repdigit3() {
    /* V3.0!! */
    bool digit_seen[10] = {false};
    int digit_count[10] = {0}; // Array to count occurrences of each digit
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    n = labs(n); // Ensure n is positive

    while (n > 0) {
        digit = n % 10;
        if (!digit_seen[digit]) {
            digit_seen[digit] = true; // Mark digit as seen
        }
        digit_count[digit]++; // Increment the count for this digit
        n /= 10;
    }

    printf("Digit occurrences:\n");
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 0) {
            printf("Digit %d: %d time(s)\n", i, digit_count[i]);
        }
    }
}

void repdigit4() {
    for (;;) { // Infinite loop
        bool digit_seen[10] = {false}; // Reset digit_seen for each new number
        int digit;
        long n;

        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n < 0) {
            exit(0); // Exit the program if a negative number is entered
        }

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                printf("Repeated digit\n");
                break; // Exit the inner loop if a repeated digit is found
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n == 0) {
            printf("No repeated digit\n"); // Print this if the loop completes without finding a repeated digit
        }
    }
}

int main(void) {
    reverse();
    repdigit();
    interest();
    deal();
    reverse2();
    repdigit2();
    repdigit3();
    return 0;
}
