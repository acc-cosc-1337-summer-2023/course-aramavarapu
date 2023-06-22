#include "func.h"
#include <iostream>
int main() 
{
	std::vector<int> vectorForMaxValues = {5, 7, -1, 99, -100, 10};
    std::vector<int> vectorForSquare = {6, 1, 8, 9, 4};
	int pick;
    do {
        std::cout << "Menu:\n";
        std::cout << "1 - Get max value\n";
        std::cout << "2 - Get square of elements\n";
        std::cout << "3 - Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> pick;
		switch (pick) {
            case 1: {
                int max = get_vector_max_value(vectorForMaxValues);
                std::cout << "Max value: " << max << "\n";
                break;
            }
			case 2: {
                std::vector<int> squares = get_square_of_each_element(vectorForSquare);
                std::cout << "The Squared values: ";
                for (const auto& num : squares) {
                    std::cout << num << " ";
                }
                std::cout << "\n";
                break;
            }
            case 3: {
                std::cout << "Stopping program" << "\n";
                break;
            }
            default:
                std::cout << "Invalid choice" << "\n";
                break;
        }
    } while (pick != 3);

    return 0;
}