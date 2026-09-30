#include "GAConcert.h"
#include <stdexcept>
using namespace std;

GAConcert::GAConcert(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price, double vip, int capacity) : Event(n, v, d, tour, art, s, price), vipUpcharge(vip), maxCapacity(capacity) {}
GAConcert::GAConcert(const GAConcert& other) : Event(other), vipUpcharge(other.vipUpcharge), maxCapacity(other.maxCapacity) {}
GAConcert::~GAConcert() {}
int GAConcert::getMaxCapacity() const {return maxCapacity;}
double GAConcert::getVipUpcharge() const {return vipUpcharge;}
void GAConcert::setVipUpcharge(double vip) {vipUpcharge = vip;}
void GAConcert::setMaxCapacity(int capacity) {maxCapacity = capacity;}
double GAConcert::calculateTicketPrice(int tier) const {
    if (tier == 1) {
        return basePrice;
    }
    if (tier == 2) {
        return basePrice + vipUpcharge;
    } 
    throw invalid_argument("Invalid tier");
}