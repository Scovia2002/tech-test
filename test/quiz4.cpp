/*quetion :fizzbuzz
include <iostream>
#include <string>

class FizzBuzz {
public:
    void printFizzBuzz() const {
        for (int i = 1; i <= 100; ++i) {
            if (i % 3 == 0 && i % 5 == 0)
                std::cout << "FizzBuzz\n";
            else if (i % 3 == 0)
                std::cout << "Fizz\n";
            else if (i % 5 == 0)
                std::cout << "Buzz\n";
            else
                std::cout << i << "\n";
        }
    }
};

int main() {
    FizzBuzz fizzBuzzObject;
    fizzBuzzObject.printFizzBuzz();
    return 0;
}
















write a program that prints the numbers from 1 to 100.For multiples of 3,print"fizz"; for multiplesof 5,print"Buzz"and for numbers that are multiples of both 3 and 5,print""fizzbuzz"'.


class FibonacciSequence {
public:
    void generateFibonacci(int limit) const {
        int a = 0, b = 1, temp;
        while (a <= limit) {
            std::cout << a << " ";
            temp = a;
            a = b;
            b = temp + b;
        }
    }
};



/*write a program that takes an integer as input and returns true if the input is a power of two*/
#include <iostream>

class PowerOfTwo {
public:
    bool isPowerOfTwo(int num) const {
        return num > 0 && (num & (num - 1)) == 0;
    }
};

int main() {
    PowerOfTwo powerObject;
    std::cout << std::boolalpha;  // to print bool values as true/false
    std::cout << powerObject.isPowerOfTwo(8) << "\n";  // Returns true
    std::cout << powerObject.isPowerOfTwo(6) << "\n";  // Returns false
    return 0;
}
/*write a program that accepts a string as input,capitalizes the first letter of each word in the string and then returns the result string*/

//Question 4:capitalize words//

#include <iostream>

class Capitalizer {
public:
    std::string capitalizeWords(const std::string& inputStr) const {
        std::istringstream iss(inputStr);
        std::ostringstream result;
        std::string word;

        while (iss >> word) {
            if (!result.str().empty())
                result << " ";
            word[0] = std::toupper(word[0]);
            result << word;
        }

        return result.str();
    }
};

int main() {
    Capitalizer capitalizerObject;
    std::cout << capitalizerObject.capitalizeWords("hi") << "\n";  // Returns "Hi"
    std::cout << capitalizerObject.capitalizeWords("i love programming") << "\n";  // Returns "I Love Programming"
    return 0;
}





