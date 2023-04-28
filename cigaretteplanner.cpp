#include <iostream>

using namespace std;

int main()
{
    int cigAvg;

    cout << "Cigarette Planner for AUD -> PHP over 2 weeks" << endl;
    cout << "Enter how many cigarettes you go through a day on average: " << endl;
    cin >> cigAvg;

    double conversion = 36.817449;
    int days = 14;
    int cigTotal = cigAvg * days;;
    int cigsPerPack = 20;
    double numOfPacks = cigTotal / cigsPerPack;
    double cost = 15;
    double priceAud = numOfPacks * cost;
    double pricePhp = priceAud * conversion;
    double costPhpDiscount = 2;
    double pricePhpDiscount = numOfPacks * costPhpDiscount * conversion;
    double priceAudDiscount = pricePhpDiscount / 36.817449;

    cout << "Cost of one pack in Australia: " << cost << endl;
    cout << "Price in AUD: " << priceAud << endl;
    cout << "Conversion into PHP: " << pricePhp << endl;
    cout << "Cost of one pack in Phillipines: " << costPhpDiscount << endl;
    cout << "Cheap Phillipines Packs: " << pricePhpDiscount << endl;
    cout << "Conversion into AUD: " << priceAudDiscount << endl;

}
