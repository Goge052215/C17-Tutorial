#include <stdio.h>
#include <math.h>

void operators(){
    /* Introduce the different operators*/
    int i, j, k, a, b, c;

    printf("Enter the value of integer i: "); scanf("%d", &i);
    printf("Enter the value of integer j: "); scanf("%d", &j);
    printf("Enter the value of integer k: "); scanf("%d", &k);

    if (i < j && j < k){ // && means two conditions need to be satisfied, same as 'and'
        a = 1, b = 0, c = 1;
        printf("a, b, c = %d, %d, %d\n", a, b, c);
        printf("\n");
    }
    else if (i == j || j == k){ // || means only need to satisfy one condition, same as 'or'
        a = 0, b = 0, c = 0;
        printf("a, b, c = %d, %d, %d\n", a, b, c);
        printf("\n");
    }
    else if (i > j && j > k){
        a = 0, b = 1, c = 0;
        printf("a, b, c = %d, %d, %d\n", a, b, c);
        printf("\n");
    }
    else if (i > j && j < k){
        a = 1, b = 1, c = 0;
        printf("a, b, c = %d, %d, %d\n", a, b, c);
        printf("\n");
    }
    else if (i < j && j > k){
        a = 0, b = 1, c = 1;
        printf("a, b, c = %d, %d, %d\n", a, b, c);
        printf("\n");
    }
}

void broker(){
    /* Calculates a broker's commission*/
    float commission, value;

    printf("Enter the value of trade: ");
    scanf("%f", &value);

    if (value < 2500.00f){
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f && value >= 2500.00f){
        commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f && value >= 6250.00f){
        commission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f && value >= 20000.00f){
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f && value >= 50000.00f){
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
}

void broker_mod(){
    /* Modify the original 'broker' function */
   float stock_num, stock_price, value, commission, commission_rival;

    int ret;

    printf("Enter the number of stocks you purchased: ");
    ret = scanf("%f", &stock_num);
    if (ret != 1) {
        printf("Invalid input. Please enter a number.\n");
        return;
    }

    printf("Enter the price per one stock: $");
    ret = scanf("%f", &stock_price);
    if (ret != 1) {
        printf("Invalid input. Please enter a number.\n");
        return;
    }

    value =  stock_price * stock_num;

    if (value < 2500.00f){
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f && value >= 2500.00f){
        commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f && value >= 6250.00f){
        commission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f && value >= 20000.00f){
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f && value >= 50000.00f){
        commission = 155.00f + .0011f * value;
    }
    else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f){
        commission = 39.00f;
    }

    if (stock_num < 2000){
        commission_rival = 33.00f * stock_num + 0.03f;
    }
    else {
        commission_rival = 33.00f * stock_num + 0.02f;
    }

    printf("The commission is: $%.2f\n", commission);
    printf("The rival's commission is: $%.2f\n", commission_rival);
    printf("\n");
}

void conditional_operator(){
    int i, j, k;

    i = 1;
    j = 2;

    // This statement return 1 value of 'k'
    // i > j ? i : j means if 'i > j' is true, then return i, else return j
    k = i > j ? i : j; // k is 2
    k = (i >= 0 ? i : 0) + j; // k is 3

    /* It is same as:
    if (i > j){
        return i;
    else {
        return j;
    }*/
}

void def_bool(){
#define TRUE 1
#define FALSE 0

    int flag;

    /* We can define the value of flag as below:
    flag = FALSE;
    flag = TRUE;

    if we want to judge whether the variable 'flag' is true or not, we use:
    if (flag == TRUE/FALSE){
         ...
    }
    or,
    if (flag){} / if (!flag){}
    */

    // We can even use a type of macro of BOOL:
#define BOOL int
    // BOOL flag; // or we can change it to:
    // _Bool flag;
}

void judge_bool(){
    int i = 2, j = 3, k = 1, a, b ,c;
    printf("%d\n", a = i * j == 6); // return 1 (True)
    printf("%d\n", k > i < j); // return 0 (False)
    printf("%d\n", i < j == j < k); // return 0 (False)
}

void grade_calc(){
    /* Classify the grades */
    int grade;

    printf("Enter your grade: "); scanf("%d", &grade);

    switch (grade) {
        case 4: printf("Excellent\n");      break;
        case 3: printf("Good\n");           break;
        case 2: printf("Average\n");        break;
        case 1: printf("Poor\n");           break;
        case 0: printf("Failing\n");        break;
        default: printf("Invalid grade\n"); break; // handle grades outside 0-4
    }
}

// Here is a more practical use:
void date(){
    int month, day, year;

    printf("Enter your date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated this %d", day);

    switch (day) {
        case 1: case 21: case 31:
            printf("st"); break;
        case 2: case 22:
            printf("nd"); break;
        case 3: case 23:
            printf("rd"); break;
        default:
            printf("th"); break;
    }

    printf(" day of ");

    switch (month) {
        case 1: printf("January");   break;
        case 2: printf("February");  break;
        case 3: printf("March");     break;
        case 4: printf("April");     break;
        case 5: printf("May");       break;
        case 6: printf("June");      break;
        case 7: printf("July");      break;
        case 8: printf("August");    break;
        case 9: printf("September"); break;
        case 10: printf("October");  break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month entered!"); break;
    }

    printf(", 20%.2d\n", year);
    printf("\n");
}

void area_code(){
    int code;

    printf("Enter your area code: "); scanf("%d", &code);

    switch (code) {
        case 229: printf("The area is Albany\n");                                 break;
        case 404: case 470: case 678: case 770: printf("The area is Atlanta\n");  break;
        case 478: printf("The area is Macon\n");                                  break;
        case 706: case 762: printf("The area is Columbus\n");                     break;
        case 912: printf("The area is Savannah\n");                               break;
        default: printf("Area code not recognized\n");                            break;
    }

    printf("\n");
}

void digits(){
    int number;

    printf("Enter the number(from 0 to 100000): "); scanf("%d", &number);

    if (number < pow(10, 1)){
        printf("The number %d has 1 digit\n", number);
    }
    else if (number >= pow(10, 1) && number < pow(10, 2)) {
        printf("The number %d has 2 digits\n", number);
    }
    else if (number >= pow(10, 2) && number < pow(10, 3)) {
        printf("The number %d has 3 digits\n", number);
    }
    else if (number >= pow(10, 3) && number < pow(10, 4)) {
        printf("The number %d has 4 digits\n", number);
    }
    else if (number >= pow(10, 4) && number < pow(10, 5)) {
        printf("The number %d has 5 digits\n", number);
    }
    else if (number > pow(10, 5)){
        printf("Please enter a number between 0 to 100000!\n");
    }
    else {
        printf("The number %d has 6 digits\n", number);
    }

    printf("\n");
}

void time_conversion(){
    int hour, minute;

    printf("Enter a 24-hour time (hr/min): ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 0 && hour < 12 && minute >= 0 && minute < 60){
        printf("Equivalent time: %d:%d AM\n", hour, minute);
    }
    else if (hour >= 12 && hour < 24 && minute >= 0 && minute < 60){
        if (hour > 12) hour -= 12;
        printf("Equivalent time: %d:%d PM\n", hour, minute);
    }
    else if (hour == 0 && minute >= 0 && minute < 60){
        hour = 12;
        printf("Equivalent time: %d:%d AM\n", hour, minute);
    }
    else {
        printf("Please enter a valid time!\n");
    }

    printf("\n");
}

void comparison(){
    int i, j, k, l;
    int max, min;

    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &i, &j, &k, &l);

    max = min = i;

    if (j > max) max = j; else if (j < min) min = j;
    if (k > max) max = k; else if (k < min) min = k;
    if (l > max) max = l; else if (l < min) min = l;

    printf("The largest number: %d\n", max);
    printf("The smallest number: %d\n", min);
}

void score_grade(){
    int score;

    printf("Enter your numerical score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("The score you entered is invalid!");
        return;
    }

    switch (score / 10) {
        case 10: case 9: printf("Letter grade: A\n"); break;
        case 8: printf("Letter grade: B\n");          break;
        case 7: printf("Letter grade: C\n");          break;
        case 6: printf("Letter grade: D\n");          break;
        default: printf("Letter grade: F\n");         break;
    }

    printf("\n");
}

int main(void){
    operators();
    broker();
    broker_mod();
    judge_bool();
    grade_calc();
    date();
    area_code();
    digits();
    time_conversion();
    comparison();
    score_grade();
    return 0;
}


