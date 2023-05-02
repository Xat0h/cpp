#include <iostream>
#include <string>
#include <unordered_map>

using std::cout;
using std::string;
using std::unordered_map;

const string &
more_frequent(
    const unordered_map<string, int> &word_counts,
    const string &word1,
    const string &word2) {
        return word_counts.at(word1) > word_counts.at(word2) ? word1 : word2;
    }

int main () {
    cout << "Hello World!" << "\n";
    return 0;
}