#include<stdio.h>

void conversion_specification(){
    int i, j;
    float x, y;

    i = 10;
    j = 20;
    x = 43.2825f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f", i, j, x, y);
    // The conversion spec for 'int' is '%d'
    // The conversion spec for 'float' is '%f'
    printf("\n");
}

void further_conversion_specification(){
    /* Print int and float in various formats */
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    // %5d: express the variable i in 5 spaces; because '40' uses 2 spaces, it adds 3 blank spaces in the front
    // %-5d: express the variable i in 5 spaces, and adds 3 blank spaces after the output '40', align it to the right
    // %5.3d: express the variable i in 5 spaces and 3 digits, and align it to the left
    // %10.3f: express the variable x in 10 spaces, and remain 3 decimal places
    // %10.3e: express the variable x in exponential form (e) in 10 spaces, and remain 3 decimal places
    // %-10g: express the variable x in decimal or exponential form in 10 spaces, and align it to the left
    printf("\n");
}

void escape_consequence(){
    printf("\a"); // \a: alarm call
    printf("\b"); // \b: backspace
    printf("\n"); // \n: line feed
    printf("\t"); // \t: horizontal tab
    printf("\"Hello\"\n"); // \": character ""
    printf("\n");
}

void scanf_def(){
    int i, j;
    float x, y;

    printf("Enter i, j, x, y: "); scanf("%d%d%f%f", &i, &j, &x, &y);
    printf("i, j, x, y: %d,%d,%f,%f\n", i, j, x, y);
    printf("\n");
}

// Examples of using the 'scanf()' function:

void addfrac(){
    /* Add two fractions */
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter the first fraction: "); scanf("%d/%d", &num1, &denom1);
    printf("Enter the second fraction: "); scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is: %d/%d\n", result_num, result_denom);
    printf("\n");
}

void Check_books(){
    /* Analyze the ISBN code */
    int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit;

    printf("Enter your ISBN code: "); scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier,
                                            &Publisher_code, &Item_number, &Check_digit);

    printf("GSI prefix: %d\n", GS1_prefix);
    printf("Group identifier: %d\n", Group_identifier);
    printf("Publisher code: %d\n", Publisher_code);
    printf("Item number: %d\n", Item_number);
    printf("Check digit: %d\n", Check_digit);
    printf("\n");
}

void phone_number(){
    int phone_num1, phone_num2, phone_num3;

    printf("Enter your phone number: ");
    scanf(" (%d) %d-%d", &phone_num1, &phone_num2, &phone_num3);
    //Add the space here to specify the two scanf() functions
    printf("You entered: %d.%d.%d\n", phone_num1, phone_num2, phone_num3);
    printf("\n");
}

void matrix_output(){
    int i1_j1, i2_j1, i3_j1, i4_j1,
    i1_j2, i2_j2, i3_j2, i4_j2,
    i1_j3, i2_j3, i3_j3, i4_j3,
    i1_j4, i2_j4, i3_j4, i4_j4,
    sum_row1, sum_row2, sum_row3, sum_row4;

    printf("Enter the number from 1 to 16 in any order\n: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i1_j1, &i2_j1, &i3_j1, &i4_j1,
          &i1_j2, &i2_j2, &i3_j2, &i4_j2,
          &i1_j3, &i2_j3, &i3_j3, &i4_j3,
          &i1_j4, &i2_j4, &i3_j4, &i4_j4);

    printf("The matrix you entered: \n"
           " %d %d %d %d\n %d %d %d %d\n %d %d %d %d\n %d %d %d %d\n",
           i1_j1, i2_j1, i3_j1, i4_j1,
           i1_j2, i2_j2, i3_j2, i4_j2,
           i1_j3, i2_j3, i3_j3, i4_j3,
           i1_j4, i2_j4, i3_j4, i4_j4);

    sum_row1 = i1_j1 + i2_j1 + i3_j1 + i4_j1;
    sum_row2 = i1_j2 + i2_j2 + i3_j2 + i4_j2;
    sum_row3 = i1_j3 + i2_j3 + i3_j3 + i4_j3;
    sum_row4 = i1_j4 + i2_j4 + i3_j4 + i4_j4;

    printf("The sum of the 1st row: %d\n", sum_row1);
    printf("The sum of the 2nd row: %d\n", sum_row2);
    printf("The sum of the 3rd row: %d\n", sum_row3);
    printf("The sum of the 4th row: %d\n", sum_row4);
    printf("\n");
}

// Of course, here is another way:

void matrix_output_1(){
    int matrix[4][4];
    int sum[4] = {0};

    printf("Enter the number from 1 to 16 in any order\n: ");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix you entered: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
            sum[i] += matrix[i][j];
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++) {
        printf("The sum of the %d row: %d\n", i+1, sum[i]);
    }
}

// We can further modify the addfrac() function:

void addfrac_mod(){
    int nom1, denom1, nom2, denom2, result_num, result_denom;

    printf("Enter your 2 fractions: ");
    scanf("%d/%d + %d/%d", &nom1, &denom1, &nom2, &denom2);

    result_num = nom1 * denom2 + nom2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is: %d/%d\n", result_num, result_denom);
    printf("\n");
}

void product_info_input(){
    /* Input the product's spec to form a list of information */
    int item_num, purchase_month, purchase_date, purchase_year;
    float price;

    printf("Enter the item number: "); scanf("%d", &item_num);
    printf("Enter the unit price: "); scanf("%f", &price);
    printf("Enter the purchase date (mm/dd/yy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_date, &purchase_year);
    printf("\n");

    printf("Item  Unit   Purchase\n");
    printf("      Price  Date\n");
    printf("%-5d $%-5.1f %d/%d/%d", item_num, price, purchase_month, purchase_date, purchase_year);
}

int main(void){
    conversion_specification();
    further_conversion_specification();
    escape_consequence();
    scanf_def();
    addfrac();
    Check_books();
    phone_number();
    matrix_output();
    addfrac_mod();
    product_info_input();
    return 0;
}
