#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    // Input Celsius value from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = celsiusToFahrenheit(celsius);

    // Output the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
