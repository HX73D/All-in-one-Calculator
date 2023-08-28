#include <iostream>
#include <cmath>


int num1;
int num2;
void choosenumbers() {
    
    std::cout << "Enter the first number";
    std::cin >> num1;
    std::cout << "Enter the second number";
    std::cin >> num2;
}

void calculator() {
    std::cout << "\n1. +\n2. -\n3. x\n 4.:\n5. root of\n\nChoose your option: ";
    int choise;
    std::cin >> choise;
    switch (choise) {
    case 1:
        choosenumbers();
        std::cout << num1 << " + " << num2 << " is " << num1 + num2;
        system("pause");
        break;
    case 2:
        choosenumbers();
        std::cout << num1 << " - " << num2 << " is " << num1 - num2;
        system("pause");
        break;
    case 3:
        choosenumbers();
        std::cout << num1 << " x " << num2 << " is " << num1 * num2;
        system("pause");
        break;
    case 4:
        choosenumbers();
        std::cout << num1 << " : " << num2 << " is " << num1 / num2;
        system("pause");
        break;
    case 5:
        std::cout << "Enter the number you want to know the sqaure root of";
        std::cin >> num1;
        std::cout << "The sqaure root of " << num1 << " is " << sqrt(num1);
        system("pause");
        break;
    }
}

void bmicalculator() {
    double weight, height;

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    if (weight > 0 && height > 0) {
        std::cout << "your bmi is " << weight / (height * height);
        system("pause");
    }
}

void temperatureconversion() {
    std::cout << "1. celcius to fahrenheit\n 2.fahrenheit to celcius";
    int choise;
    std::cin >> choise;
    double degree;
    switch (choise) {
    case 1:
        std::cout << "enter the degree you want to calculate in celcius: ";
        std::cin >> degree;
        std::cout << degree << " celcius is this degree in fahrenheit " << (degree * 9 / 5) + 32;
        system("pause");
        break;
    case 2:
        std::cout << "enter the degree you want to calculate in fahrenheit: ";
        std::cin >> degree;
        std::cout << degree << " fahrenheit is this degree in celcius " << (degree - 32) * 5/9;
        system("pause");
        break;
    }
}

int main()
{
    std::cout << "1. Calculator\n2. BMI Calculator\n3. Temperature Conversion\n" ;
    int choise;
    std::cin >> choise;

    switch (choise) {
    case 1:
        calculator();
        break;
    case 2:
        bmicalculator();
        break;
    case 3:
        temperatureconversion();
        break;
    }
}
