#include <stdio.h>
#include <math.h>

void variables_def(){
    int height, length, width, volume;

    height = 8; // Define the integer value of height, length, and width
    length = 12;
    width = 10;

    volume = height * length * width; // Define the volume equals the multiplication of height, length, width

    printf("Height: %d\n", height); printf("Length: %d\n", length); printf("Width: %d\n", width);
    printf("Volume: %d\n", volume);
    printf("\n");
}

void input_var(){
    int height, length, width, volume, weight;

    printf("Enter the height of the box: "); scanf("%d", &height); // 'scanf' function: input the value
    printf("Enter the length of the box: "); scanf("%d", &length);
    printf("Enter the width of the box: "); scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume: %d\n", volume); printf("Weight: %d\n", weight);
}

void def_const(){
# define Inches_per_pound 166 // Define constant value
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;
    weight = (volume + Inches_per_pound - 1) / Inches_per_pound;

    printf("Volume: %d\n", volume); printf("Weight: %d\n", weight);
    printf("\n");
}

// Some examples

void celsius(){
    /* Converts a Farenheit temperature to Celsius */
# define Freezing_pt 32.0f
# define Scale_factor (5.0f / 9.0f)
    float celsius, farenheit;

    printf("Enter farenheit temperature: "); scanf("%f", &farenheit);

    celsius = (farenheit - Freezing_pt) * Scale_factor;
    printf("Celsius temperature: %.1f\n", celsius);
}

void sphere(){
    /* Calculates the volume of a sphere*/
#define Pi 3.14159f
#define scale (4.0f / 3.0f)
    float radius, volume;
    printf("Enter the radius of the sphere: "); scanf("%f", &radius);
    volume = pow(radius, 3) * scale * Pi;
    printf("Volume of sphere: %.2f\n", volume);
}

void equation(){
    /* Enter a value of x and calculate the value of the equation */
    float x, eq;
    printf("Enter the value of x: "); scanf("%f", &x);
    eq = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
    printf("The value of the equation is: %.2f\n", eq);
}

int main(void){
    variables_def();
    input_var();
    def_const();
    celsius();
    sphere();
    equation();
    return 0;
}
