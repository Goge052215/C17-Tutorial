#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void square() {
    /* Prints a table of squares using a 'while' statement */
    int i, n;

    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++; // i stays in the loop until it reaches 'n'
    }

    printf("\n");
}

void sums() {
    /* Sums a series of numbers */
    int n, sum = 0;

    printf("Enter the integer (0 to terminate): ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }

    printf("\n");
}

void num_digit() {
    /* Calculates the number of digits in an integer */
    int digits = 0, n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s)\n", digits);
}

void square_mod() {
    /* Prints a table of squares using a 'for' statement */
    int i, n;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    printf("\n");
}

void square_mod_2(){
    /* Prints a table of squares using an 'odd' function */

    int i, n, odd, square;

    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    printf("\n");
}

void square_3() {
    int i, n, odd, square;

    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    printf("\n");
}

/* void loop_def() {
    int i; i = 10;

    // 3 loops: while, do, for

    while (i > 0) {
        printf("T minus %d and counting\n", i);
        i--; // i subtracted by 1 for all i greater than 0
    }

    do {
        printf("T minus %d and counting\n", i);
        i--; // 'do' loop is similar to the 'while' loop
    } while(i > 0);

    for (i = 10; i > 0;) {
        printf("T minus %d and counting\n", i);
        i--;
    }
}
*/

// exit loop: break
void break_def() {
    int d, n;
    int isPrime = 1; // Assume the number is prime

    printf("Enter the number: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            isPrime = 0; // if there is a factor then the number is not prime
            break; // break the loop
        }
    }

    if (isPrime) {
        printf("%d is prime\n", n);
    }
    else {
        printf("%d is divisible by %d\n", n, d);
    }

    printf("\n");
}

// The usage of the 'goto' statement:
void check_prime(int n) {
    int d;

    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            goto not_prime;
        }
    }

    printf("%d is prime\n", n);
    return;

    not_prime:
    printf("%d is divisible by %d\n", n, d);
}

// Here are some examples of programs using the loop:

void checkings() {
    /* Balances a checkbook */
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");

    for(;;) {
        printf("Enter command: ");
        scanf("%d", &cmd);

        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of the credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter the amount of the debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                exit(0);
            default:
                printf("Commands: 0=clear, 1=credit, 2=debit, ");
                printf("3=balance, 4=exit\n\n");
                break;
        }
    }
}

void max_non_negative() {
    /* Finds the maximum non-negative number */
    float i, max;
    printf("Enter a number: ");
    scanf("%f", &i);

    max = 0.0f;

    while (i > 0) {
        printf("Enter a number: ");
        scanf("%f", &i);

        if (i > max) max = i;
        if (i <= 0) {
            printf("The largest number is %f", max);
        }
    }
}

int gcd(int m, int n) {
    /* Using the Euclid Algorithm to find the greatest common divisor */
    int temp;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) { // if n =! 0, find the divisor of m/n and save it to m
        temp = m % n;
        m = n;
        n = temp;
    }

    // if n = 0, return m, the greatest common divisor:
    return m;
}

void fraction() {
    /* Simplify the fraction by finding the greatest common divisor */
    int nom, denom, sim_nom, sim_denom, max_gcd;

    printf("Enter the fraction: ");
    scanf("%d/%d", &nom, &denom);

    max_gcd = gcd(nom, denom);
    sim_nom = nom / max_gcd;
    sim_denom = denom / max_gcd;

    printf("Simplified fraction: %d/%d\n", sim_nom, sim_denom);
}

void broker_loop_mod(){
    /* Calculates a broker's commission*/
    float commission, value;

    do {
        printf("Enter the value of trade: ");
        scanf("%f", &value);

        if (value < 0) {
            printf("Invalid value. Please enter a positive number.\n");
            continue;
        }

        if (value < 2500.00f){
            commission = 30.00f + .017f * value;
        }
        else if (value < 6250.00f){
            commission = 56.00f + .0066f * value;
        }
        else if (value < 20000.00f){
            commission = 76.00f + .0034f * value;
        }
        else if (value < 50000.00f){
            commission = 100.00f + .0022f * value;
        }
        else if (value < 500000.00f){
            commission = 155.00f + .0011f * value;
        }
        else {
            commission = 255.00f + .0009f * value;
        }

        if (commission < 39.00f){
            commission = 39.00f;
        }

        printf("The commission is: $%.2f\n", commission);
        printf("\n");
    } while (value > 0);
}

void chapter6_practice() {
    int i, j;

    for (i = 5, j = i - 1; i > 0 && j > 0; --i, j = i - 1) {
        printf("%d", i);
    }
    for (i = 10; i >= 1; i /= 2) {
        printf("%d", i++); // This loop will be an infinite loop
    }
}

void uni_reversal() {
    int num, reversed = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("The reversal is: %d\n\n", reversed);
}

void even_square_num() {
    int n, n_sqrt;

    printf("Enter the square number: ");
    scanf("%d", &n);

    n_sqrt = sqrt(n);

    if((int)n_sqrt % 2 != 0) {
        n_sqrt--;
    }

    for(; n_sqrt > 0; n_sqrt -= 2) {
        printf("%d ", (int)(n_sqrt * n_sqrt));
    }
}

void calendar() {
    int day, weekdays, i;

    printf("Enter number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week (1=SUN, 7=SAT): ");
    scanf("%d", &weekdays);

    // Print leading spaces for the first day
    for(i = 1; i < weekdays; i++) {
        printf("   ");
    }

    for(i = 1; i <= day; i++, weekdays++) {
        printf("%2d ", i);
        if (weekdays % 7 == 0) {
            printf("\n");
        }
    }
}

void e_calc() {
    int n, i;
    float e = 1.0f, fact = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
        e += 1 / fact;
    }

    printf("e = %.5f", e);
}

int main(void) {
    square();
    sums();
    num_digit();
    square_mod();
    square_mod_2();
    square_3();
    break_def();
    checkings();
    max_non_negative();
    fraction();
    broker_loop_mod();
    uni_reversal();
    even_square_num();
    calendar();
    e_calc();
    return 0;
}
