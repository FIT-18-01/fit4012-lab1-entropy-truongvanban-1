#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = (double)pair.second / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    double H = calculate_entropy(text);
    double max_entropy = log2(alphabet_size);
    return 1.0 - (H / max_entropy);
}

int main() {
    string input;
    getline(cin, input); 

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << fixed << setprecision(4); 
    cout << "Entropy: " << entropy << endl;
    cout << "Redundancy: " << redundancy << endl;

    return 0;
}