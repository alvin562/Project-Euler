#include <iostream>


void updatePrevTwoTerms(int nextFibNum, int terms[])
{
    terms[0] = terms[1];
    terms[1] = nextFibNum;
}


int main(int argc, const char *argv[])
{
    //constant storage to calculate the next fibonacci number
    int prevTwoTerms[2] = {1, 2};
    int sum = 2;
    int firstTerm = prevTwoTerms[0];
    int secondTerm = prevTwoTerms[1];
    int nextFibNum = firstTerm + secondTerm;
    
    while(nextFibNum < 4000000) {
        
        if(nextFibNum % 2 == 0)
            sum += nextFibNum;
        
        updatePrevTwoTerms(nextFibNum, prevTwoTerms);
        
        nextFibNum = prevTwoTerms[0] + prevTwoTerms[1];
    }
    
    std::cout << "Project Euler - Problem 2: " << sum << std::endl;
    
    return 0;
}
