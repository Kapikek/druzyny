#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "Druzyna.h"

bool porownaj(Druzyna& druzyna1,Druzyna& druzyna2) {

    if (druzyna1.punkty() != druzyna2.punkty())
        return druzyna1.punkty() > druzyna2.punkty();
    if (druzyna1.wygrane != druzyna2.wygrane)
        return druzyna1.wygrane > druzyna2.wygrane;
    if (druzyna1.przegrane != druzyna2.przegrane)
        return druzyna1.przegrane < druzyna2.przegrane;
    if (druzyna1.gole != druzyna2.gole)
        return druzyna1.gole > druzyna2.gole;
    return druzyna1.stracone < druzyna2.stracone;

}

int main() {
    vector<Druzyna> liga;
    liga.push_back(Druzyna("Druzyna A", 2, 5, 2, 12, 4));
    liga.push_back(Druzyna("Druzyna B", 1, 3, 5, 25, 5));
    liga.push_back(Druzyna("Druzyna C", 2, 1, 6, 16, 7));
    liga.push_back(Druzyna("Druzyna D", 5, 4, 0, 13, 10));
    liga.push_back(Druzyna("Druzyna E", 1, 1, 7, 11, 7));
    liga.push_back(Druzyna("Druzyna F", 3, 4, 2, 5, 14));
    liga.push_back(Druzyna("Druzyna G", 4, 1, 4, 13, 6));
    liga.push_back(Druzyna("Druzyna H", 4, 5, 0, 6, 21));
    liga.push_back(Druzyna("Druzyna I", 1, 5, 3, 9, 16));
    liga.push_back(Druzyna("Druzyna J", 5, 2, 2, 10, 5));

    sort(liga.begin(), liga.end(), porownaj);

    for (auto& druzyna : liga) {
        druzyna.wyswietl();
    }

    return 0;
}