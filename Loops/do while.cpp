#include <iostream>

using namespace std;

int main() {
    int in, sum, average, cnt = -1;
    cout << "Enter a value, 0 to quit ";
    do {
        cin >> in;
        sum += in;
        cnt++;
    } while (in); // will end if and only if in is equal to 0
    average = sum / cnt;
    cout << "\n" << cnt << " values entered" << endl;;
    cout << "average: " << average << endl;
    cout << "sum: " << sum << endl;
}
