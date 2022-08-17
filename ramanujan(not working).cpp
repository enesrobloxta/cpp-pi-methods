#include <iostream>
#include <cmath>
#include <ctime>
#include <limits>
#include "timer.hpp"

using namespace std;

typedef numeric_limits< double > dbl;

Timer timer;

int fac(int x){
    if(x==0)
        return 1;
    else
        return x*fac(x-1);
}
int ramanpi(){

    return 1;
}

int main(){

    timer.start();
    long double sum=0;
    long double n=0;
    long double i=sqrt(8)/9801;
    long double timerd=0.0;

    while(true){
        long double tmp;
        tmp = i*(fac(4*n)/pow(fac(n),4))*((26390*n+1103)/pow(396,4*n));
        sum+=tmp;

        timer.stop();

        timerd+=timer.duration();
        
        cout << fixed << timerd << endl;

        if(timerd > 10.00)
            break;
        n++;

        timer.start();
    }


    cout.precision(dbl::max_digits10);
    cout << fixed << 1/sum<< endl;
    cout << "3.14159265358979323846264338327950288419716939937510" << endl;


}