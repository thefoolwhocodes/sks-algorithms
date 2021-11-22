/**
    This code generates the nth fibonacci number.
*/

#include<iostream>

using namespace std;

//Recursion 
int fibRecursion(int n)
{
    if (n <= 1)
        return n;
    return fibRecursion(n-1) + fibRecursion(n-2);
}
 

//Dynamic programming
int fibDynamicProg()
{
    
}

int main ()
{
    int n = 9;
    std::cout << fibRecursion(n) << std::endl;
    return 0;
}
