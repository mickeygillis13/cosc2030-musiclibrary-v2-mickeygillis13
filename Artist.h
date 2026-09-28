#ifndef ARTIST_H
#define ARTIST_H
#include <string>
using namespace std;


class Artist{
    private:
        string name;
        string genre;
        int debutYear;
        bool isActive;
    public:
        Artist(string n,string g, int year, bool active);
        string getName() const;
        string getGenre() const; 
        int getDebutYear() const; 
        bool getIsActive() const;
        void setName(string n); 
        void setGenre(string g);
        void setDebutYear(int year);
        void setIsActive(bool active);
        void display() const;
};      

#endif