#include<stdio.h>

float c_f(float celsius)
{
    float farhen;
    farhen = (9.0/5)*celsius + 32;
    return farhen;
}

float f_c(float farhen)
{
    float celsius;
    celsius = (farhen - 32) * (9.0/5);
    return celsius;
}

float c_k(float celsius)
{
    float kelvin;
    kelvin = celsius + 273.15;
    return kelvin;
}

float k_c(float kelvin)
{
    float celsius;
    celsius = kelvin - 273.15;
    return celsius;
}

float k_f(float kelvin)
{
    float farhen;
    farhen = (9.0/5)*(kelvin - 273.15) + 32;
    return farhen;
}

float f_k(float farhen)
{
    float kelvin;
    kelvin = ((farhen - 32) * (9.0/5)) + 273.15;
    return kelvin;
}

int main()
{
    float degree;
    char choice;
    printf("Enter whether initial input is celsius(c), farhenheit(f) or kelvin(k): ");
    scanf("%c", &choice);

    printf("Enter degree %c: ", choice);
    scanf("%f", &degree);

    switch (choice)
    {
        case 'c':
        printf("Celsius (%f) to Farhenheit: %f\n", degree, c_f(degree));
        printf("Celsius (%f) to kelvin: %f\n", degree, c_k(degree));
        break;

        case 'f':
        printf("Farhenheit (%f) to Celsius: %f\n", degree, f_c(degree));
        printf("Farhenheit (%f) to kelvin: %f\n", degree, f_k(degree));
        break;

        case 'k':
        printf("Kelvin (%f) to Celsius: %f\n", degree, k_c(degree));
        printf("Kelvin (%f) to Farhenheit: %f\n", degree, k_f(degree));
        break;

        default:
        printf("Invalid input");
    }

    return 0;
}