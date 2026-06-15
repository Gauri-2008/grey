#include <iostream>
#include <cmath>

int main() {
    
    char choice;
    do {
        char op;
        double num1;
        double num2;
        double result;

        std::cout<< "*******WELCOME TO CALCULATOR*******\n";
        std::cout<<"Enter operator (+, -, *, /,^,%): ";
        std::cin>> op;

        std::cout<<"first number: ";
        std::cin>> num1;

        std::cout<<"second number: ";
        std::cin>> num2;

        switch(op) {
            case '+':
                result = num1 + num2;
                std::cout<< num1 << " + " << num2 << " = " << result;
                break;
            case '-':                   
                result = num1 - num2;
                std::cout<< num1 << " - " << num2 << " = " << result;
                break;
            case '*':
                result = num1 * num2;       
                std::cout<< num1 << " * "<< num2<< " = " << result;
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    std::cout<< num1 << " / " << num2 << " = " << result;
                } else {
                    std::cout<< "Error: Division by zero!";
                }
                break;
            case '^':
                result = std::pow(num1, num2);
                std::cout<< num1 << " ^ " << num2 << " = " << result;
                break;
            case '%':
                if(num2 != 0) {
                    result = fmod(num1, num2);
                    std::cout<< num1 << " % " << num2 << " = " << result;
                } else {
                    std::cout<< "Error: Division by zero!";
                }
                break;
            default:
                std::cout<< "Error: Invalid operator!";
                break;
    }
        std::cout << "\nThe program is running...\n";
        std::cout << "Do you want to start again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y'); // Loops back if 'y'
    
    std::cout << "Goodbye!";

}