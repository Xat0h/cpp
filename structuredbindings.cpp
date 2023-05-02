#include <iostream>
#include <unordered_map>
#include <string>

using std::cout;
using std::unordered_map;
using std::string;

void loop_map_items() {
    unordered_map<string, string> colors = {
        {"RED", "#FF0000"},
        {"GREEN", "#00FF00"},
        {"BLUE", "#0000FF"}
    };

    for (const auto&[name, hex]: colors) {
        cout << "name: " << name << ", hex: " << hex << '\n';
    }

}