#include <iostream>

using namespace std;


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
    interest_rates();
    return 0;
}
