//BIRTHDAY PARADOX PROBLEM
//The birthday paradox, also known as the birthday problem, states that in a random group of 23 people, there is about a 50 percent chance that two people have the same birthday.
//derivation
//let the probablity of 2 diff person will be p(same) na p(diff)
//therefore,p(same)=1-p(diff);
//p(diff) can be 1*((364/365)*(363/365)*(362/365).....(1-(n-1)/365)
//APPROXIMATION OF ABOVE PROBLEM 
//we can use taylor series
//e^x=1+x+x/2!.....
//e^x~1+x
//let set x=-a/365;
//e^(-a/365)~1+(-a/365)
//the above expression can be written as 
//1*(1-(1/365)+(1-(2/365))+(1-(3/365))+....+(1-(n-1)/365))
//1*(e^(-1)/365)(e^(-2)/365)*(e^(-3)/365).....(e^-(n-1)/365)
//1*(e^((-(n(n-1)))/2)/365)
//as p(same)=1-p(diff)
//p(same)~1-(e^-(n^2)/730)
//therefore formula becomes
//n~sqrt(2*365log(1/1-p(same)))
#include <cmath> 
#include <iostream> 
using namespace std; 
  
// Returns approximate number of people for a given probability 
int find(double p) 
{ 
    return ceil(sqrt(2*365*log(1/(1-p)))); 
} 
  
int main() 
{ 
   cout << find(0.5); 
}
