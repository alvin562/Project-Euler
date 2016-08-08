

#include <iostream>


// returns true if number is prime; false otherwise
int isPrime(long n)
{
    if(n <= 1)
        
        return 0;
    
    for(int i = 2; i <= n/2; i++) {
        
        if(n % i == 0)
            
            return 0;
    }
    
    return 1;
}


//return the largest prime factor
long largestPrimeFactor(long n)
{
    if(isPrime(n))
        
        return n;
    
    
    for(int i = 2; i <= n/2; i++) {
        
        
        //we enter this if statement for
        //any integer greater than 1 that
        //isn't already prime
        if(n % i == 0) {
            
            //we find the largest prime factor
            //from the left and right sub trees
            //of n's prime factorization tree
            long n1 = largestPrimeFactor(n/i);
            long n2 = largestPrimeFactor(i);
            
            //the largest prime factor is
            //the largest of the two
            return (n1 > n2) ? n1 : n2;
        }
    }
    
    //we should never get here
    return -1;
}


int main(int argc, const char * argv[])
{
    long answer = largestPrimeFactor(600851475143);
    
    std::cout << "Project Euler - Problem 3: " << answer << std::endl;
    return 0;
}
