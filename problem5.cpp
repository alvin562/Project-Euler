#include <iostream>


//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?



// returns true if n is divisible by every number b/n 1 and d
int divisibleByAll(int n, int d)
{
    for(int i = 1; i <= d; i++) {
        
        if(n % i != 0)
            return 0;
    }
    
    return 1;
}



// returns the smallest positive number that can be divided by every number b/n 1 and n
int smallestMultiple(int n)
{
    int num = n;
    
    while(!divisibleByAll(num, n)) {
        
        // the smallest number must be divisible by
        // n so we increment the number by n until
        // we find a number divisible by all
        // positive values less than n
        num += n;
    }
    
    return num;
}



int main(int argc, const char * argv[])
{
    int answer = smallestMultiple(20);
    std::cout << "Project Euler - Problem 5: " << answer << std::endl;
    return 0;
}
