#include <iostream>

void fizzBuzz(int num);

int main() {
    fizzBuzz(50);
    return 0;
}

void fizzBuzz(int num) {
    for(int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            std::cout << i << " FizzBuzz" << "\n";
        else if (i % 3 == 0)
            std::cout << i << " Fizz " << "\n";
        else if (i % 5 == 0)
            std::cout << i << " Buzz " << "\n";
        else
            std::cout << i << "\n";
    }
    return;
}
