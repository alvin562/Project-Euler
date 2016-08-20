

#include <iostream>
#include <cmath>


//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.



// returns true if n is a palindrome
int isPalindrome(int n)
{
    std::string str_num = std::to_string(n);
    int i = 0;
    int j = str_num.length()-1;
    
    while(i <= j) {
        
        if(str_num.at(i) != str_num.at(j))
            return 0;
        
        i++;
        j--;
    }
    
    return 1;
}


// Finds largest palindrome made from the product
// of two n-digit numbers
int largestPalindrome(int n)
{
    // both n1 and n2 initially set to largest possible n-digit number
    int n1 = pow(10, n)-1;
    int n2 = n1;
    
    // lowerBound is the smallest possible n-digit number
    int lowerBound = pow(10, n-1);
    
    int maxPalindrome = -1;
    
    
    // generate products of 2 n-digit numbers
    // checking if each product is a palindrome
    while(n1 >= lowerBound) {
        
        while(n2 >= lowerBound) {
            
            int product = n1*n2;
            
            if(product > maxPalindrome && isPalindrome(product))
                maxPalindrome = product;
            
            n2--;
        }
        
        n1--;
        n2 = n1;
    }
    
    return maxPalindrome;
}


int main(int argc, const char * argv[])
{
    int answer = largestPalindrome(3);
    std::cout << "Project Euler - Problem 4: " << answer << std::endl;
    return 0;
}
