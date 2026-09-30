#ifndef EVENT_H
#define EVENT_H
#include <string>
#include <vector>
#include "Artist.h"
#include "Song.h"
using namespace std;

class Event {
    private:
        string name;
        string venue;
        string date;
        bool isATour;
        Artist artist;
        vector<Song> setList;
    protected:
        double basePrice;
    public:
        Event(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price);
        Event(const Event& other);
        string getName() const;
        string getVenue() const;
        string getDate() const;
        bool getIsATour() const;
        Artist getArtist() const;
        vector<Song> getSetList() const;
        double getBasePrice() const;
        void setName(string n);
        void setVenue(string v);
        void setDate(string d);
        void setIsATour(bool tour);
        void setArtist(Artist art);
        void setSetList(vector<Song> s);
        void setBasePrice(double price);
        virtual double calculateTicketPrice(int tier) const = 0;
        virtual ~Event();
        friend void printEvent(const Event& e);
};

#endif