#include <iostream>
#include <cmath>

int main() {
    char choice;
    do{ 
        int numbers;
        double num1;
        double num2;
        double num3;
        char op;
        char op2;
        double result;
        double result2;
        std::cout<< "*******WELCOME TO CALCULATOR*******\n";

        std::cout << "1: for Sin() {s}, Cos() {c}, Tan() {t}\n";
        std::cout << "2 or 3: for other operations like +,-,*,/, mod {%}, abs {a}";
        std::cout << "\nenter the anount of numbers u want to use(max 3): ";
        std::cin >> numbers;

        if (numbers == 1){

            std::cout<< "*******WELCOME TO BASIC TRIGO CALC*******\n";
            std::cout<<"Enter operator (s for Sin(), c for Cos(), t for Tan()): ";
            std::cin>> op;

            switch (op){
            case 's':
                std::cout << "enter the desired number: ";
                std::cin >> num1;
                std::cout << "Sin() of " << num1 << " is " << std::sin(num1);
                break;
            case 'c':
                std::cout << "enter the desired number: ";
                std::cin >> num1;
                std::cout << "Cos() of " << num1 << " is " << std::cos(num1);
                break;
            case 't':
                std::cout << "enter the desired number: ";
                std::cin >> num1;
                std::cout << "Tan() of " << num1 << " is " << std::tan(num1);
                break;
            default:
                break;
            }
            
        } else if(numbers == 2){
            std::cout<< "*******WELCOME TO NORMAL CALCULATOR*******\n";
            

            std::cout<<"first number: ";
            std::cin>> num1;

            std::cout<<"second number: ";
            std::cin>> num2;

            std::cout<<"\nEnter operator (+, -, *, /, ^, %, a): ";
            std::cin>> op;

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
                case 'a':
                    std::cout<< "absolutes values are: "<< std::abs(num1) << " and " << std::abs(num2); 
                    break;
                default:
                    std::cout<< "Error: Invalid operator!";
                    break;
            }
        }

        else if(numbers == 3){
            std::cout<< "*******WELCOME TO NORMAL CALCULATOR*******\n";
            

            std::cout<<"first number: ";
            std::cin>> num1;

            std::cout<<"second number: ";
            std::cin>> num2;

            std::cout<<"Third number: ";
            std::cin>> num3;

            std::cout << "For first two numbers: ";

            std::cout<<"\nEnter operator (+, -, *, /, ^, %): ";
            std::cin>> op;

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
            
            
            std::cout << "\nfor remaining third number: ";
            std::cout<<"\nEnter operator (+, -, *, /, ^, %, a): ";
            std::cin>> op2;

            switch(op2) {
                case '+':
                    result2 = result + num3;
                    std::cout<< result << " + " << num3 << " = " << result2;
                    break;
                case '-':                   
                    result2 = result - num3;
                    std::cout<< result << " - " << num3 << " = " << result2;
                    break;
                case '*':
                    result2 = result * num3;       
                    std::cout<< result << " * "<< num3 << " = " << result2;
                    break;
                case '/':
                    if(num3 != 0) {
                        result2 = result / num3;
                        std::cout<< result << " / " << num3 << " = " << result2;
                    } 
                    else {
                        std::cout<< "Error: Division by zero!";
                    }
                    break;
                case '^':
                    result2 = std::pow(result, num3);
                    std::cout<< result << " ^ " << num3 << " = " << result2;
                    break;
                case '%':
                    if(num3 != 0) {
                        result2 = fmod(result, num3);
                        std::cout<< result << " % " << num3 << " = " << result2;
                    } else {
                        std::cout<< "Error: Division by zero!";
                    }
                    break;
                case 'a':
                    std::cout<< "absolutes values are: "<< std::abs(num1) << ", " << std::abs(num2) << " and " << std::abs(num3); 
                    break;
                default:
                    std::cout<< "Error: Invalid operator!";
                    break;
            }
        } else { 
            std::cout << "please enter a valid no. it can range from 1 to 3 only";
        }

        std::cout << "\nThe program is running...\n";
        std::cout << "Do you want to start again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y'); // Loops back if 'y'
    
    std::cout << "Goodbye! Thank you (^-^)!! Have a nice day!!!";

    return 0;
}
