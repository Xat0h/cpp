#include <iostream>
#include <map>
#include <string>

// Define a structure to hold civilization information
struct Civilization {
    std::string uniqueUnit;
    std::string uniqueTechnology;
    std::string civilizationBonus;
};

std::map<std::string, Civilization> civMap() {
    // Create a map to store civilization data
    std::map<std::string, Civilization> civilizations;

    // Add civilizations and their statistics to the map
    civilizations["Aztecs"] = { "Jaguar Warrior", "Garland Wars", "Villagers carry +5" };
    civilizations["Britons"] = { "Longbowman", "Yeomen", "Town Centers cost -50%" };
    civilizations["Chinese"] = { "Chu Ko Nu", "Great Wall", "Farms provide +45 food" };
    civilizations["Franks"] = { "Throwing Axeman", "Bearded Axe", "Castles cost -25%" };
    civilizations["Byzantines"] = { "Cataphract", "Logistica", "Buildings have +10% HP" };
    civilizations["Celts"] = { "Woad Raider", "Stronghold", "Infantry move 15% faster" };
    civilizations["Goths"] = { "Huskarl", "Anarchy", "Infantry cost -25%" };
    civilizations["Huns"] = { "Tarkan", "Marauders", "Houses are not required" };
    civilizations["Japanese"] = { "Samurai", "Kataparuto", "Fishing Ships have +2 pierce armor" };
    civilizations["Koreans"] = { "War Wagon", "Shinkichon", "Villagers have +3 line of sight" };
    civilizations["Mayans"] = { "Plumed Archer", "El Dorado", "Resources last 20% longer" };
    civilizations["Mongols"] = { "Mangudai", "Drill", "Cavalry Archers fire 25% faster" };
    civilizations["Persians"] = { "War Elephant", "Mahouts", "Start with +50 food and +50 wood" };
    civilizations["Saracens"] = { "Mameluke", "Zealotry", "Market trade units cost -66%" };
    civilizations["Spanish"] = { "Conquistador", "Inquisition", "Cannon Galleons benefit from Ballistics" };
    civilizations["Teutons"] = { "Teutonic Knight", "Crenellations", "Units are more resistant to conversion" };
    civilizations["Turks"] = { "Janissary", "Sipahi", "Gunpowder units cost -50% gold" };
    civilizations["Vikings"] = { "Berserk", "Berserkergang", "Warships cost -15% gold" };
    civilizations["Malians"] = { "Gbeto", "Tigui", "Buildings cost -15% wood" };
    civilizations["Berbers"] = { "Camel Archer", "Kasbah", "Villagers move +10% faster" };
    civilizations["Portuguese"] = { "Organ Gun", "Carrack", "All units cost -15% gold" };
    civilizations["Ethiopians"] = { "Shotel Warrior", "Royal Heirs", "Archers fire faster" };
    civilizations["Bulgarians"] = { "Konnik", "Stirrups", "Militia line upgrades free" };
    civilizations["Tatars"] = { "Keshik", "Silk Armor", "Cavalry archers deal more damage" };
    civilizations["Cumans"] = { "Kipchak", "Steppe Husbandry", "Additional Town Center upon advancing to the next age" };
    civilizations["Vietnamese"] = { "Rattan Archer", "Chatras", "Reveal enemy positions at the start of the game" };
    civilizations["Koreans"] = { "War Wagon", "Panokseon", "Villagers have +3 line of sight" };
    civilizations["Italians"] = { "Genoese Crossbowman", "Pavise", "Advancing to the next age costs -15%" };
    civilizations["Saracens"] = { "Mameluke", "Madrasah", "Market trade cost -75 wood" };
    civilizations["Malay"] = { "Karambit Warrior", "Thalassocracy", "Advancing to the next age is 66% cheaper" };
    civilizations["Burmese"] = { "Arambai", "Howdah", "Relics generate gold over time" };
    civilizations["Khmer"] = { "Ballista Elephant", "Tusk Swords", "Battle Elephants have +15% HP" };
    civilizations["Ethiopians"] = { "Shotel Warrior", "Royal Heirs", "Archers fire faster" };
    civilizations["Burmese"] = { "Arambai", "Howdah", "Relics generate gold over time" };

    return civilizations;
}

int main() {
    // Call the civMap function to get the civilization map
    std::map<std::string, Civilization> civilizations = civMap();

    while (true) {
        // Print the list of civilization names
        std::cout << "Available civilizations:" << std::endl;
        for (const auto& pair : civilizations) {
            std::cout << "- " << pair.first << std::endl;
        }

        // Get the name of the civilization from the user
        std::string input;
        std::cout << "Enter the name of a civilization (or 'exit' to quit): ";
        std::getline(std::cin, input);

        if (input == "exit") {
            break; // Exit the loop if the user enters 'exit'
        }

        // Check if the civilization exists in the map
        auto it = civilizations.find(input);
        if (it != civilizations.end()) {
            // Civilization found, display its statistics
            Civilization civilization = it->second;
            std::cout << "Unique Unit: " << civilization.uniqueUnit << std::endl;
            std::cout << "Unique Technology: " << civilization.uniqueTechnology << std::endl;
            std::cout << "Civilization Bonus: " << civilization.civilizationBonus << std::endl;
        }
        else {
            // Civilization not found
            std::cout << "Civilization not found." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
