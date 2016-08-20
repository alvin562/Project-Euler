

#include <iostream>
#include <cmath>


//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.



// Takes n representing number of digits and
// returns the largest product of two n digit numbers
int largestProduct(int n)
{
    int largestNDigitNum = pow(10, n)-1;
    
    return largestNDigitNum*largestNDigitNum;
}



int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << largestProduct(3);
    return 0;
}
