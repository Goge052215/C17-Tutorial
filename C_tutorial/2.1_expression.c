#include <stdio.h>

void arithmetic_def(){
    /* Basic definition of */
    float a, b, c, d, e, f;
    int g;

    printf("enter the value of a: "); scanf("%f", &a);
    printf("enter the value of b: "); scanf("%f", &b);
    printf("\n");

    c = a + b, d = a - b;
    e = a * b, f = a / b;
    g = (int)a % (int)b; // make sure to convert a, b to integer

    printf("a + b = %.1f\n", c); // +: add up numbers
    printf("a - b = %.1f\n", d); // -: subtract numbers
    printf("a * b = %.1f\n", e); // *: multiply numbers
    printf("a / b = %.2f\n", f); // /: divide numbers
    printf("the remainder of a/b is: %d", g); // %: find the remainder of a/b
    printf("\n"); printf("\n");
}

void upc(){
    /* Computes a Universal Product Code check digit */
    int d , i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, third_sum, total;

    printf("Enter the first (single) digit: "); scanf("%1d", &d);
    printf("Enter the first group of 5 digits: "); scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of 5 digits: "); scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    printf("\n");
}

void assignment(){
    int i, j, k;

    i = 5; // i is now 5
    j = i; // j is now i
    k = 10 + i * j; // k is now 55

    printf("i, j, k = %d, %d, %d\n", i, j, k);
    printf("\n");
}

void com_assignment(){
    int i, j, k, l, m, a, b, c;

    i = 1; i += 2;
    j = 1; j -= 2;
    k = 2; j *= 2;
    l = 2; l /= 2;
    m = 9; m %= 2;

    printf("i, j, k, l, m = %d, %d, %d, %d, %d\n", i, j, k, l, m);
    printf("\n");

    a = 2, b = 3;
    printf("The value of a, b before ++ is: %d, %d\n", a, b);

    c = ++a + b++;

    printf("The value of a, b after ++ is: %d, %d\n", a, b);
    printf("The value of ++a + b++ is: %d\n", c);
    printf("\n");
}

// Practice questions:

void reversal_2d() {
    int num, renum, a, b;

    printf("Enter the 2 digit number: "); scanf("%d", &num);

    a = num % 10;
    b = num / 10;
    renum = b * 10 + a;

    printf("The reversal is: %d\n", renum);
    printf("\n");
}

void reversal_3d(){
    int num, renum, a, b, c;

    printf("Enter the 3 digit number: "); scanf("%d", &num);

    a = num % 10;
    b = (num / 10) % 10;
    c = num / 100;
    renum = a * 100 + b * 10 + c;

    printf("The reversal is: %d\n", renum);
    printf("\n");
}

void reversal_3d_mod(){
    int num_1, num_2, num_3;

    printf("Enter the 3 digit number: "); scanf("%1d%1d%1d", &num_1, &num_2, &num_3);
    printf("The reversal is: %1d%1d%1d\n", num_3, num_2, num_1);
    printf("\n");
}

void octal(){
    int num, octnum, a, b, c, d, e;

    printf("Enter a number between 0 and 32767: "); scanf("%d", &num);

    a = num % 8;
    b = (num / 8) % 8;
    c = (num / 64) % 8;
    d = (num / 512) % 8;
    e = (num / 4096) % 8;
    octnum = 10000 * e + 1000 * d + 100 * c + 10 * b + a;

    printf("The number in octal is: %d\n", octnum);
    printf("\n");
}

void upc_mod(){
    int d , i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, third_sum, total;

    printf("Enter UPC code first 11 digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    printf("\n");
}

void EAN(){
    int i1, i3, i5, i7, i9, i11, j2, j4, j6, j8, j10, j12, first_sum, second_sum, result_num;

    printf("Enter your EAN code first 12 digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &i1, &j2, &i3, &j4, &i5, &j6, &i7, &j8, &i9, &j10, &i11, &j12);

    first_sum = j2 + j4 + j6 + j8 + j10 + j12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    result_num = 9 - (((3 * first_sum) + second_sum - 1) % 10);

    printf("Check digit: %d\n", result_num);
    printf("\n");
}

int main(void){
    arithmetic_def();
    upc();
    assignment();
    com_assignment();
    reversal_2d();
    reversal_3d();
    reversal_3d_mod();
    octal();
    upc_mod();
    EAN();
    return 0;
}
