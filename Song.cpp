#include "Song.h"
#include <iostream>
#include <string>
using namespace std;

Song::Song(string t, string a, Artist art, int d, string g, int year) : title(t), album(a), artist(art), duration(d), genre(g), releaseYear(year) {}
string Song::getTitle() const {return title;}
string Song::getAlbum() const {return album;}
Artist Song::getArtist() const {return artist;}
int Song::getDuration() const {return duration;}
string Song::getGenre() const {return genre;}
int Song::getReleaseYear() const {return releaseYear;}

void Song::setTitle(string t){
    title = t;
}
void Song::setAlbum(string a){
    album = a;
}
void Song::setArtist(Artist art){
    artist = art;
}
void Song::setDuration(int d){
    duration = d;
}
void Song::setGenre(string g){
    genre = g;
}
void Song::setReleaseYear(int year){
    releaseYear = year;
}
void Song::display() const{
    cout << "Song Title: " << title << endl;
    cout << "Album: " << album << endl;
    cout << "Artist: " << endl;
    cout << "------------------" << endl;
    artist.display();
    cout << "------------------" << endl;
    cout << "Duration: " << duration << " seconds" << endl;
    cout << "Genre: " << genre << endl;
    cout << "Release Year: " << releaseYear << endl;
}