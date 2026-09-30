#include "StadiumConcert.h"
#include <iostream>
using namespace std;

StadiumConcert::StadiumConcert(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price, int total, int tiers) : Event(n, v, d, tour, art, s, price), totalSeating(total), numTiers(tiers) {}
StadiumConcert::StadiumConcert(const StadiumConcert& other) : Event(other), totalSeating(other.totalSeating), numTiers(other.numTiers) {}
StadiumConcert::~StadiumConcert() {}
int StadiumConcert::getTotalSeating() const {return totalSeating;}
int StadiumConcert::getNumTiers() const {return numTiers;}
void StadiumConcert::setTotalSeating(int total){totalSeating = total;}
void StadiumConcert::setNumTiers(int tiers){numTiers = tiers;}
double StadiumConcert::calculateTicketPrice(int tier) const {
    if (tier < 1 || tier > numTiers) {
        throw invalid_argument("Invalid tier number");
    }
    double tierMultiplier = 1.0 + (tier - 1) * 0.1; // Each tier increases the price by 10%
    return basePrice * tierMultiplier;
}
