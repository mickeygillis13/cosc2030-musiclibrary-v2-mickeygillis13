#include <iostream>
#include <string>
#include "Artist.h"
using namespace std;


class Song {
    private:
        string title;
        string album;
        Artist artist;
        int duration;
        string genre;
        int releaseYear;
    public:
        Song(string t, string a, Artist art, int d, string g, int year);
        string getTitle() const {return title;}
        string getAlbum() const {return album;}
        Artist getArtist() const {return artist;}
        int getDuration() const {return duration;}
        string getGenre() const {return genre;}
        int getReleaseYear() const {return releaseYear;}

        void setTitle(string t){
            title = t;
        }
        void setAlbum(string a){
            album = a;
        }
        void setArtist(Artist art){
            artist = art;
        }
        void setDuration(int d){
            duration = d;
        }
        void setGenre(string g){
            genre = g;
        }
        void setReleaseYear(int year){
            releaseYear = year;
        }
        void display() const{
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

}; 

Song::Song(string t, string a, Artist art, int d, string g, int year) : artist(art) {
            title = t;
            album = a;
            duration = d;
            genre = g;
            releaseYear = year;
        }

int main() {
    // Create instance of Artist object 
    Artist artist1("Taylor Swift", "Pop", 2006, true);

    // Create instance of Song object
    Song song1("Love Story", "Fearless", artist1, 235, "Country Pop", 2008);

    // Call song instance display function 
    song1.display();

    return 0; 
}