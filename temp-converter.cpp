#include <iostream>

void convertCelsiusToFahrenheit() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

void convertFahrenheitToCelsius() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double celsius = 5.0 / 9.0 *(fahrenheit + 32.0);
    
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
}

void convertCelsiusToKelvin() {
    std::cout << "Enter the temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;

    double kelvin = celsius + 273.15;
    
    std::cout << celsius << " degrees Celsius is " << kelvin << " degrees Kelvin." << std::endl;
}

void convertFahrenheitToKelvin() {
    std::cout << "Enter the temperature in Celsius: ";
    double fahrenheit;
    std::cin >> fahrenheit;

    double kelvin = 9.0 * 5.0 / (fahrenheit + 459.67);
    
    std::cout << fahrenheit << " degrees is Fahrenheit" << kelvin << " degrees Kelvin." << std::endl;
}


void convertKelvinToCelsius() {
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double celsius = kelvin - 273.15;
    
    std::cout << kelvin << " degrees Kelvin is " << celsius << " degrees Celsius." << std::endl;
}

void convertKelvinToFahrenheit() {
    std::cout << "Enter the temperature in Kelvin: ";
    double kelvin;
    std::cin >> kelvin;

    double fahrenheit = (5.0 / 9.0 * kelvin) - 459.67;
    
    std::cout << kelvin << " degrees Kelvin is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}

int main() {
    char userInput;

    std::cout << "Enter 1 if you want to convert from Celsius to Fahrenheit" << std::endl;
    std::cout << "Enter 2 if you want to convert from Celsius to Kelvin" << std::endl;
    std::cout << "Enter 3 if you want to convert from Fahrenheit to Celsius" << std::endl;
    std::cout << "Enter 4 if you want to convert from Fahrenheit to Kelvin" << std::endl;
    std::cout << "Enter 5 if you want to convert from Kelvin to Celsius" << std::endl;
    std::cout << "Enter 6 if you want to convert from Kelvin to Fahrenheit" << std::endl;
    std::cout << "input:";
    std::cin >> userInput;

    switch(userInput){
        case '1':
            convertCelsiusToFahrenheit();
            break;
        case '2':
            convertCelsiusToKelvin();
            break;
        case '3':
            convertFahrenheitToCelsius();
            break;
        case '4':
            convertFahrenheitToKelvin();
            break;
        case '5':
            convertKelvinToCelsius();
            break;
        case '6':
            convertKelvinToFahrenheit();
            break;
        default:
            std::cout << "Incorrect input. Please try again later" << std::endl;
            break;
    }

    return 0;
}
