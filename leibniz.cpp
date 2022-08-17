#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int imin = std::numeric_limits<int>::min(); // minimum value
int imax = std::numeric_limits<int>::max(); // maximum value (2147483647)

typedef numeric_limits< double > dbl;

int main(){
    
    long double sum=0;
    long double sign=1;
    int j=0,a;

    cout << "How many repeats:" << endl;
    cin >> a;

    while(j < a){

    for(int i=0;i < imax;i++){
        
        if(i%2==0)
            sum+=4/sign;
        else
            sum-=4/sign;

        sign+=2;
  
    }
    j++;    
    }

    cout.precision(dbl::max_digits10);
    cout << fixed <<  sum << endl;
    cout << "3.14159265358979323846264338327950288419716939937510" << endl;
}