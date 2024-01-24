#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void sum() {
    /* Sums a series of numbers (using long variables) */
    long int n, sum = 0;

    printf("This program sums a series of integers\n");

    printf("Enter integers (0 to terminate): ");
    scanf("%ld", &n);

    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is %ld\n\n", sum);
}

void int_type() {
    int m; // for 64-bit the range of int is between +- 2147483648
    unsigned int n; // the range of unsigned int is between 0 and 2147483648
    long int u; // the range of long int is between -+ 9223372036854775808
    unsigned long int x; // the range of unsigned long int is between 0 and 9223372036854775808
    short int a; // the range of short int is between -+ 32768
    unsigned short int b; // the range of short unsigned int is between 0 and 32767
}

void char_type() {
    char ch;

    ch = 'a'; // lower case a
    ch = 'A'; // upper case A
    ch = '0'; // zero
    ch = ' '; // space

    // In the ASCII system, 'a' = 97, 'A' = 65, '0' = 48, ' ' = 32, thus we have the following:
    char ch_1;
    int i;

    i = 'a'; // 'i' equals to 97
    ch_1 = 65; // ch_1 is 'A'
    ch_1 = ch_1 + 1; // ch_1 is 'B'
    ch_1++; // ch_1 is 'C'

    printf("The value of 'C' is: %c", ch_1); // prints "The value of 'C' is: C"

    // Converge the lower case into the upper case:
    char ch_2;

    ch_2 = 'A';
    if ('a' <= ch_2 && ch_2 <= 'z') {
        ch_2 = ch_2 - 'a' + 'A';
    }
}

void get_char() {
    /* Determines the length of a message */
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();

    while (ch != '\n') {
        len++;
        ch = getchar();
    }

    printf("Your message was %d character(s) long.\n", len);
}

// We can further simplify the function get_char() to the code below:

void get_char2() {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        len++;
        printf("Your message was %d character(s) long.\n", len);
    }
}

void square2() {
    int i, n, num;
    char ch;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();  // consume the newline character

    num = 0;

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        num++;

        if (num == 24) {
            printf("Press enter to continue...");

            ch = getchar(); // Get the character input from user
            if (ch == '\n') { // Check if the user pressed 'enter'
                num = 0;
                continue;
            }
            else {
                exit(0);
            }
        }
    }

    printf("\n");
}

/* Here is a modification of the function sum() above
by finding the sums of all the 'double' type numbers: */

void sum_mod() {
    /* Sums a series of numbers (using double variables) */
    double n, sum = 0.0;  // Declare sum as double

    printf("This program sums a series of integers\n");

    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is %.2lf\n\n", sum);  // Use %.2lf to print double with 2 decimal places
}

int letter_to_digit(char ch) {
    ch = toupper(ch);  // Convert to uppercase to handle lowercase input

    if (ch >= 'A' && ch <= 'C') return 2;
    if (ch >= 'D' && ch <= 'F') return 3;
    if (ch >= 'G' && ch <= 'I') return 4;
    if (ch >= 'J' && ch <= 'L') return 5;
    if (ch >= 'M' && ch <= 'O') return 6;
    if (ch >= 'P' && ch <= 'S') return 7;
    if (ch >= 'T' && ch <= 'V') return 8;
    if (ch >= 'W' && ch <= 'Z') return 9;

    return -1;  // Return -1 for non-alphabet characters
}

void convert_tel_number() {
    char tel_number[15];

    printf("Enter telephone number: ");
    scanf("%s", tel_number);

    printf("Converted telephone number: ");
    for (int i = 0; tel_number[i] != '\0'; i++) {
        if (isalpha(tel_number[i])) {  // If the character is a letter
            printf("%d", letter_to_digit(tel_number[i]));
        } else {  // If the character is not a letter (e.g., a digit or a dash)
            printf("%c", tel_number[i]);
        }
    }
    printf("\n");
}

int card_letter_to_digit(char ch) {
    ch = toupper(ch); // Convert lowercase to uppercase

    switch(ch) {
        case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
            return 1;
        case 'D': case 'G':
            return 2;
        case 'B': case 'C': case 'M': case 'P':
            return 3;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            return 4;
        case 'K':
            return 5;
        case 'J': case 'X':
            return 8;
        case 'Q': case 'Z':
            return 10;
        default:
            return -1;
    }
}

void convert_card() {
    char word[50];
    int total = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++){
        if(isalpha(word[i])) {
            total += card_letter_to_digit(word[i]);
        }
    }

    printf("Scrabble value: %d", total);
}

int main(void) {
    sum();
    char_type();
    square2();
    convert_tel_number();
    convert_card();
    return 0;
}
