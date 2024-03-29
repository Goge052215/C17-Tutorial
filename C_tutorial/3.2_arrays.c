// Including necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
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

    while (n != 0) {
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
    int digit_display[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int digit_count[10] = {0}; // Array to count occurrences of each digit
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    n = labs(n); // Ensure n is positive

    while (n != 0) {
        digit = n % 10;
        digit_count[digit]++; // Increment count for every occurrence
        digit_seen[digit] = true; // Mark digit as seen
        n /= 10;
    }

    printf("Digit:     ");
    for (i = 0; i < 10; i++) {
        printf(" %d", digit_display[i]); // Added space for readability
    }
    printf("\nOccurrence:"); // Fixed typo and added newline for formatting
    for (i = 0; i < 10; i++) {
        printf(" %d", digit_count[i]); // Added space for readability
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
            exit(-1); // Exit the program if a negative number is entered
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

void reverse_mod() {
    /* This program helps calculate the length of the array */
    int a[N], i;
    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]); // Read and store each number in the array
    }

    printf("In reverse order: ");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]); // Print each number in reverse order
    }

    printf("The size of array: %llu", sizeof(a) / sizeof(a[0]));
    printf("\n");
}

// Function to apply the B1FF filter to a user-entered message
void b1ff_filter_system() {
    int i; // Loop counter
    char origin_sentence[100]; // Array to store the original sentence
    printf("Enter message: ");

    // Loop to read characters one by one
    for (i = 0; i < 100; i++) {
        scanf("%c", &origin_sentence[i]); // Reads a single character from input
        if (origin_sentence[i] == '\n') { // Checks if the character is a newline
            origin_sentence[i] = '\0'; // Replaces newline with null character to end the string
            break; // Exits the loop if newline is found
        }
        origin_sentence[i] = toupper(origin_sentence[i]); // Converts character to uppercase
        // The following conditions check for specific characters to replace
        if (origin_sentence[i] == 'A') {
            origin_sentence[i] = '4'; // Replaces 'A' with '4'
        } else if (origin_sentence[i] == 'B') {
            origin_sentence[i] = '8'; // Replaces 'B' with '8'
        } else if (origin_sentence[i] == 'E') {
            origin_sentence[i] = '3'; // Replaces 'E' with '3'
        } else if (origin_sentence[i] == 'O') {
            origin_sentence[i] = '0'; // Replaces 'O' with '0'
        }
    }

    printf("In B1ff speak: ");
    // Loop to print the modified sentence character by character
    for (int n = 0; n < i; n++) { // Iterates over each character in the modified sentence
        printf("%c", origin_sentence[n]); // Prints the current character
    }
    printf(" !!!!!!!!!!\n"); // Prints a series of exclamation marks at the end
}

// Function to calculate the sum of each row and column in a 5x5 matrix
void sum_row_total() {
    int i;
    // Declare arrays to store individual row values
    int row_1[5], row_2[5], row_3[5], row_4[5], row_5[5];
    // Initialize arrays to store the sum of rows and columns
    int sum_row[5] = {0}, sum_column[5] = {0};

    // Loop to read and sum values for row 1
    for (i = 0; i < 5; i++) {
        printf("Enter row 1: ");
        scanf("%d", &row_1[i]);
        sum_row[0] += row_1[i]; // Add current element to row 1 sum
    }
    // Repeat the process for rows 2 to 5
    for (i = 0; i < 5; i++) {
        printf("Enter row 2: ");
        scanf("%d", &row_2[i]);
        sum_row[1] += row_2[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter row 3: ");
        scanf("%d", &row_3[i]);
        sum_row[2] += row_3[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter row 4: ");
        scanf("%d", &row_4[i]);
        sum_row[3] += row_4[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter row 5: ");
        scanf("%d", &row_5[i]);
        sum_row[4] += row_5[i];
    }

    // Calculate the sum of each column
    for(i = 0; i < 5; i++) {
        sum_column[i] = row_1[i] + row_2[i] + row_3[i] + row_4[i] + row_5[i];
    }

    // Print the total sum of each row
    printf("The Row Totals: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sum_row[i]);
    }
    printf("\n");

    // Print the total sum of each column
    printf("The Column Totals: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sum_column[i]);
    }
    printf("\n");
}

void sum_row_total_mod() {
    int i;
    int math[5], English[5], physics[5], chemistry[5], economics[5];
    int sum_row[5] = {0}, sum_column[5] = {0};
    float average_subjects[5] = {0}, average_students[5] = {0};

    for (i = 0; i < 5; i++) {
        printf("Enter 5 students' math score: ");
        scanf("%d", &math[i]);
        sum_row[0] += math[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter 5 students' English score: ");
        scanf("%d", &English[i]);
        sum_row[1] += English[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter 5 students' physics score: ");
        scanf("%d", &physics[i]);
        sum_row[2] += physics[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter 5 students' chemistry score: ");
        scanf("%d", &chemistry[i]);
        sum_row[3] += chemistry[i];
    }
    for (i = 0; i < 5; i++) {
        printf("Enter 5 students' economics score: ");
        scanf("%d", &economics[i]);
        sum_row[4] += economics[i];
    }

    for (i = 0; i < 5; i++) {
        sum_column[i] = math[i] + English[i] + physics[i] + chemistry[i] + economics[i];
    }

    for (i = 0; i < 5; i++) {
        average_subjects[i] = sum_row[i] / 5.0; // Use float division
        average_students[i] = sum_column[i] / 5.0; // Use float division
    }

    printf("The 5 subjects total scores (MATH, Eng, PHY, CHEM, ECON): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sum_row[i]);
    }
    printf("\n");

    printf("The 5 students' total scores: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sum_column[i]);
    }
    printf("\n");

    printf("Average 5 subjects score (MATH, Eng, PHY, CHEM, ECON): ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", average_subjects[i]); // Print with 2 decimal places
    }
    printf("\n");

    printf("Average 5 students' score: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", average_students[i]); // Print with 2 decimal places
    }
    printf("\n");
}

// Function to check if all four positions around the current one are occupied
bool allPositionsOccupied(int i, int j, char board[10][10]) {
    // Check if the position above is occupied or out of bounds
    bool up = (i == 0) || (board[i - 1][j] != '.');
    // Check if the position below is occupied or out of bounds
    bool down = (i == 9) || (board[i + 1][j] != '.');
    // Check if the position to the left is occupied or out of bounds
    bool left = (j == 0) || (board[i][j - 1] != '.');
    // Check if the position to the right is occupied or out of bounds
    bool right = (j == 9) || (board[i][j + 1] != '.');

    // If all directions are either out of bounds or occupied, return true
    return up && down && left && right;
}

void steps() {
    // Initialize the board with '.' to indicate empty spaces
    char board[10][10];
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            board[x][y] = '.';
        }
    }

    // Define an array of alphabet letters to place on the board
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                         'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                         'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i, j, rand_num_mod, a;

    // Initialize random seed
    srand(time(NULL));
    // Randomly select the starting position
    i = rand() % 10;
    j = rand() % 10;

    // Place 'A' at the starting position
    board[i][j] = 'A';

    for (a = 1; a < 26; a++) {
        // Before placing the next letter, check if all adjacent positions are occupied
        if (allPositionsOccupied(i, j, board)) {
            // If all positions around are occupied, print message and terminate
            printf("All positions around (%d, %d) are occupied. Terminating.\n", i, j);
            exit(0);
        }

        // Randomly choose a direction for the next letter
        rand_num_mod = rand() % 4;

        // Based on the chosen direction, place the next letter if possible
        switch (rand_num_mod) {
            case 0: if (i > 0) board[--i][j] = alphabet[a]; break; // Move up if not at the top edge
            case 1: if (i < 9) board[++i][j] = alphabet[a]; break; // Move down if not at the bottom edge
            case 2: if (j > 0) board[i][--j] = alphabet[a]; break; // Move left if not at the left edge
            case 3: if (j < 9) board[i][++j] = alphabet[a]; break; // Move right if not at the right edge
            default: printf("error!\n"); exit(-1); // Handle unexpected case
        }
    }
}

void flight_match() {
    int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hr_enter, min_enter, hr_arrive, min_arrive, hr_depart, min_depart, time, i;

    printf("Enter your departure time (24hr, hr:min)");
    scanf("%d:%d", &hr_enter, &min_enter);

    time = hr_enter * 60 + min_enter;

    for(i = 0; i < 8; i++) {
        if (time < departure[i]){
            min_depart = departure[i] % 60;
            min_arrive = arrival[i] % 60;
            hr_depart = departure[i] / 60;
            hr_arrive = arrival[i] / 60;

            printf("Your departure time: %02d:%02d\n", hr_depart, min_depart);
            printf("Your arrival time: %02d:%02d\n", hr_arrive, min_arrive);
            break;
        }

        if (time >= departure[7]) {
            min_depart = departure[0] % 60;
            min_arrive = arrival[0] % 60;
            hr_depart = departure[0] / 60;
            hr_arrive = arrival[0] / 60;

            printf("Your departure time: %02d:%02d\n", hr_depart, min_depart);
            printf("Your arrival time: %02d:%02d\n", hr_arrive, min_arrive);
            break;
        }
    }

    printf("\n");
}

// Define a function to encrypt a message using the Caesar cipher method.
void Julius_Caesar_code() {
#define MAX_SIZE 1000 // Define a constant for the maximum size of the message to be encrypted.

    int i, shifter; // shifter - to store the number of positions each letter should be shifted
    unsigned char message[MAX_SIZE];
    // Declare an array to store the message, using unsigned char to accommodate extended ASCII characters if needed.

    printf("Enter the message to be encrypted: ");
    // Use fgets to read the message from standard input, including spaces, until a newline or EOF is encountered.
    fgets(message, MAX_SIZE, stdin);

    // Prompt the user to enter the number of positions to shift the letters by.
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shifter);

    // Print the encrypted message.
    printf("Encrypted message: ");
    // Iterate over each character in the message until the null terminator is encountered.
    for (i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'a' && message[i] <= 'z') { // Check if the current character is a lowercase letter.
            printf("%c", ((message[i] - 'a' + shifter) % 26) + 'a');
        }
        else if (message[i] >= 'A' && message[i] <= 'Z') { // Check if the current character is an uppercase letter.
            printf("%c", ((message[i] - 'A' + shifter) % 26) + 'A');
        }
        else { // If the current character is neither a lowercase nor an uppercase letter,
            printf("%c", message[i]);
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
    repdigit4();
    reverse_mod();
    b1ff_filter_system();
    sum_row_total();
    steps();
    Julius_Caesar_code();
    return 0;
}
