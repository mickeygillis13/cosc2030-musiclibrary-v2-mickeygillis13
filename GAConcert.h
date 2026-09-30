#ifndef GACONCERT_H
#define GACONCERT_H
#include "Event.h"
using namespace std;

class GAConcert : public Event {
    private:
        double vipUpcharge;
        int maxCapacity;
    public:
        GAConcert(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price, double vip, int capacity);
        GAConcert(const GAConcert& other);
        ~GAConcert();

        double getVipUpcharge() const;
        int getMaxCapacity() const;
        void setVipUpcharge(double vip);
        void setMaxCapacity(int capacity);
        double calculateTicketPrice(int tier) const override;
};

#endif
