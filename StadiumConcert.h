#ifndef STADIUMCONCERT_H
#define STADIUMCONCERT_H
#include "Event.h"
#include <string>
using namespace std;

class StadiumConcert : public Event {
    private:
        int totalSeating;
        int numTiers;
    public:
        StadiumConcert(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price, int total, int tiers);
        StadiumConcert(const StadiumConcert& other);
        ~StadiumConcert();
        int getTotalSeating() const;
        int getNumTiers() const;
        void setTotalSeating(int total);
        void setNumTiers(int tiers);
        double calculateTicketPrice(int tier) const override;
};

#endif