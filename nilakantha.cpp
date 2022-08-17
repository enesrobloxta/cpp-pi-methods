#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int imin = std::numeric_limits<int>::min(); // minimum value
int imax = std::numeric_limits<int>::max(); // maximum value (2147483647)

typedef numeric_limits< double > dbl;

long long x=1000000000;//max 19 digits

int main(){
    
    long double sum=3;
    int sign=1;
    long double n=2;

    int j=0,a;

    cout << "How many repeats:" << endl;
    cin >> a;

    while(j < a){

    for(int i=0;i < imax;i++){
        
       sum=sum+(sign*(4/((n)*(n+1)*(n+2))));
       
       sign=sign*-1;

       n=n+2;
  
        }
    j++;    
    }

    cout.precision(dbl::max_digits10);
    cout << fixed <<  sum << endl;
    cout << fixed <<  sum*x << endl;
    cout << "3.14159265358979323846264338327950288419716939937510" << endl;
}