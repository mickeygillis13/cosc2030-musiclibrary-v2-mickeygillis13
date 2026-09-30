#include "Event.h"
#include <iostream>
#include <string>
using namespace std;

Event::Event(string n, string v, string d, bool tour, Artist art, vector<Song> s, double price) : name(n), venue(v), date(d), isATour(tour), artist(art), setList(s), basePrice(price) {}
Event::Event(const Event& other) : name(other.name), venue(other.venue), date(other.date), isATour(other.isATour), artist(other.artist), setList(other.setList), basePrice(other.basePrice) {}
Event::~Event() {}
string Event::getName() const {return name;}
string Event::getVenue() const {return venue;}
string Event::getDate() const {return date;}
bool Event::getIsATour() const {return isATour;}
Artist Event::getArtist() const {return artist;}
vector<Song> Event::getSetList() const {return setList;}
double Event::getBasePrice() const {return basePrice;}
void printEvent(const Event& e){
    cout << "Event Name: " << e.name << endl;
    cout << "Venue: " << e.venue << endl;
    cout << "Date: " << e.date << endl;
    cout << "Is a Tour: " << (e.isATour ? "Yes" : "No") << endl;
    cout << "Artist: " << e.artist.getName() << endl;
    cout << "Set List: ";
    for (const auto& song : e.setList) {
        cout << song.getTitle() << ", ";
    }
    cout << endl;
    cout << "Base Price: $" << e.basePrice << endl;
}
void Event::setName(string n){
    name = n;
}

void Event::setVenue(string v){
    venue = v;
}

void Event::setDate(string d){
    date = d;
}

void Event::setIsATour(bool tour){
    isATour = tour;
}

void Event::setArtist(Artist art){
    artist = art;
}

void Event::setSetList(vector<Song> s){
    setList = s;
}

void Event::setBasePrice(double price){
    basePrice = price;
}