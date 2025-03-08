#include <iostream>
#include <string>
#include <cstdlib>  // для atoi

using namespace std;

unsigned long long factorial(unsigned long long n);

int main(int argc, char* argv[])
{
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    unsigned long long n = atoi(argv[1]);

    if (n > 20) {
        cerr << "Error: Number must be less than or equal to 20." << endl;
        return 1;
    }

    cout << factorial(n) << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
