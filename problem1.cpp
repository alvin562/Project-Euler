#include <iostream>


//calculates the sum of all the numbers that are
//multiples of num1 or num2 below a certain value
int calculateSum(int value, int num1, int num2)
{
    int sum = 0;
    
    for(int i = 1; i < value; i++) {
        
        if(i % num1 == 0 || i % num2 == 0)
            
            sum += i;
    }
    
    return sum;
}



int main(int argc, const char *argv[])
{
    int answer = calculateSum(1000, 3, 5);
    std::cout << "Project Euler - Problem 1: " << answer << std::endl;
    return 0;
}
