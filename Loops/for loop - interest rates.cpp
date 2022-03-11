#include <iostream>

using namespace std;


// binary exponentiation
float expo(float b, int e) {
    if (e == 1) return b;
    float res = 1;
    while(e > 0) {
        if (e % 2 == 1) res *= b;
        b *= b;
        e /= 2;
    }
    return res;
}

void interest_rates() {
    // start with $10,000 with a rate of return %3 per day
    float a, principal = 10000, rate = 1.03;

    cout << "principal: " << principal << endl;

    float gain = rate;
    // return after each day // total 0f 30 days
    for (int day = 1; day <= 30; day++, gain*=rate) {
        a = principal * gain;
        printf("%2d ----- $ %.2f \n", day, a);
    }
}

int main()
{
    //interest_rates();
    switch_case();
    return 0;
}
