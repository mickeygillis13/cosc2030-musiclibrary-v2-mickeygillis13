#ifndef SONG_H
#define SONG_H
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
        string getTitle() const;
        string getAlbum() const;
        Artist getArtist() const;
        int getDuration() const;
        string getGenre() const;
        int getReleaseYear() const;
        void setTitle(string t);
        void setAlbum(string a);
        void setArtist(Artist art);
        void setDuration(int d);
        void setGenre(string g);
        void setReleaseYear(int year);
        void display() const;
};

#endif