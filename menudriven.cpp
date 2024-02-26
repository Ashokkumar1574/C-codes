#include <iostream>
void add() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Sum: " << num1 + num2 << std::endl;
}

void subtract() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Difference: " << num1 - num2 << std::endl;
}
void multiply() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Product: " << num1 * num2 << std::endl;
}

void divide() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    if (num2 != 0) {
        std::cout << "Quotient: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: Division by zero" << std::endl;
    }
}

int main() {
    int choice;
    while (true) {
        std::cout << "Simple Calculator Menu" << std::endl;
        std::cout << "1. Add" << std::endl;
        std::cout << "2. Subtract" << std::endl;
        std::cout << "3. Multiply" << std::endl;
        std::cout << "4. Divide" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                std::cout << "Exiting program. Goodbye!" << std::endl;
                return 0; 
                 default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    }

    return 0;
}
