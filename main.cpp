#include <iostream>
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
        string getName() const {return name;} 
        string getGenre() const {return genre;} 
        int getDebutYear() const {return debutYear;} 
        bool getIsActive() const {return isActive;} 

        void setName(string n){
            name = n;
        }
        void setGenre(string g){
            genre = g;
        }
        void setDebutYear(int year){
            debutYear = year;
        }
        void setIsActive(bool active){
            isActive = active;
        } 
        void display() const{
            cout << "Artist: " << name << endl;
            cout << "Genre: " << genre << endl;
            cout << "Debut Year: " << debutYear << endl;
            cout << "Is Active: " << (isActive ? "Yes" : "No") << endl;
        }
};

Artist::Artist(string n,string g, int year, bool active){
            name = n;
            genre = g;
            debutYear = year;
            isActive = active;
        }

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