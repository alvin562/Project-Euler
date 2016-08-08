

#include <iostream>


// returns true if number is prime; false otherwise
int isPrime(int n)
{
    if(n <= 1)
        
        return 0;
    
    for(int i = 2; i <= n/2; i++) {
        
        if(n % i == 0)
            
            return 0;
    }
    
    return 1;
}


int main(int argc, const char * argv[])
{
    for(int i = 1; i <= 30; i++) {
        
        if(isPrime(i))
            
            std::cout << i << " is prime" << std::endl;
        else
            
            std::cout << i << " is not prime" << std::endl;
    }
}
