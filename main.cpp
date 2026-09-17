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
    //TODO
}; 

int main() {
    // Create instance of Artist object 

    // Create instance of Song object

    // Call song instance display function 

    return 0; 
}