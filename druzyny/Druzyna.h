#pragma once
using namespace std;
#include <iostream>


class Druzyna{
public:
    string nazwa;
    int wygrane;
    int remisy;
    int przegrane;
    int gole;
    int stracone;

    Druzyna(string n, int w, int r, int p, int g, int s);
    void wyswietl();
    int punkty();
    
};

