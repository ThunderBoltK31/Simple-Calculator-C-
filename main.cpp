#include <iostream>

int main() {
    double num1, num2;
    char op;
    char choice;

    std::cout << "🧮 Welcome to SimpleCalc!\n";

    do {
        std::cout << "\nEnter an expression (e.g., 4 + 5): ";
        std::cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                std::cout << "Result: " << (num1 + num2) << "\n";
                break;
            case '-':
                std::cout << "Result: " << (num1 - num2) << "\n";
                break;
            case '*':
                std::cout << "Result: " << (num1 * num2) << "\n";
                break;
            case '/':
                if (num2 != 0)
                    std::cout << "Result: " << (num1 / num2) << "\n";
                else
                    std::cout << "❌ Cannot divide by zero!\n";
                break;
            default:
                std::cout << "❌ Invalid operator!\n";
        }

        std::cout << "Do you want to calculate again? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "👋 Goodbye!\n";
    return 0;
}
