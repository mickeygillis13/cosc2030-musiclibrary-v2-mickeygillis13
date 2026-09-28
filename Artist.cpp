#include "Artist.h"
#include <iostream>

Artist::Artist(string n,string g, int year, bool active) : name(n), genre(g), debutYear(year), isActive(active) {} 
string Artist::getName() const {return name;} 
string Artist::getGenre() const {return genre;} 
int Artist::getDebutYear() const {return debutYear;} 
bool Artist::getIsActive() const {return isActive;} 

void Artist::setName(string n){
    name = n;
}
void Artist::setGenre(string g){
    genre = g;
}
void Artist::setDebutYear(int year){
    debutYear = year;
}
void Artist::setIsActive(bool active){
    isActive = active;
} 
void Artist::display() const{
    cout << "Artist: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Debut Year: " << debutYear << endl;
    cout << "Is Active: " << (isActive ? "Yes" : "No") << endl;
}