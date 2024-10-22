#include <iostream>
#include "complexNumber.h"
#include "sorting.h"

int main() 
{
    
    ComplexNumber numbers[] = {
        ComplexNumber(2, 3),
        ComplexNumber(4, 1),
        ComplexNumber(1, -1),
        ComplexNumber(-3, 4),
        ComplexNumber(5, 5)
    };

    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original Complex Numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " | Absolute Value: " << numbers[i].abs() << "\n";
    }

    ComplexNumber sum = numbers[0] + numbers[1];
    ComplexNumber diff = numbers[1] - numbers[2];
    ComplexNumber prod = numbers[2] * 2.0;


    std::cout << "\nOperations:\n";
    std::cout << "Sum of (2 + 3i) and (4 + 1i): " << sum << "\n";
    std::cout << "Difference of (4 + 1i) and (1 - 1i): " << diff << "\n";
    std::cout << "Product of (1 - 1i) and 2: " << prod << "\n";

    sortComplexNumbers(numbers, size);

    
    std::cout << "\nSorted Complex Numbers (by absolute value):\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " | Absolute Value: " << numbers[i].abs() << "\n";
    }

    return 0;
}
