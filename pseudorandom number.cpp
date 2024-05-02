#include <iostream>
#include <random>

using namespace std;

int main() {
    // Input seed value
    int seed;
    cout << "Enter seed value: ";
    cin >> seed;

    // Create a random number engine with the specified seed
    default_random_engine generator(seed);

    // Generate a pseudorandom number
    int result = generator();

    // Output the generated pseudorandom number
    cout << "Generated pseudorandom number: " << result << endl;

    return 0;
}
