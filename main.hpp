#include <iostream>
using namespace std;

void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);
int isPrime(int);


//assigns input values to the parameters
void getTwoValues(int &begin, int &end){
    do{
        cin >> begin >> end;
    } while (begin >= end);
}

//returns the next prime greater than begin
int getNextPrime(int begin){
    for(int i = begin + 1; ; i+=2){
        //odd numbers only
        if (i % 2 == 0){
            ++i;
        }
        //check if prime
        if(isPrime(i)){
            return i;
        }
    }
}

//get the previous prime less than end
int getPrevPrime(int end){
    for(int i = end - 1; i > 0; i -= 2){
        //odd numbers only
        if(i % 2 == 0){
            i--;
        }
        //check if prime
        if(isPrime(i)){
            return i;
        }
    }
    return -1;
}


int isPrime(int n){
    int prime = 1;
    int max = n/2;
    //iterate through each number smaller than half of n
    for(int i = 2; i <= max; ++i){
        if(n % i == 0){
            prime = 0;
        }
    }
    return prime;
}