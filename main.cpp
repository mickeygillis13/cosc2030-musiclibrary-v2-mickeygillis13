#include <iostream>
#include <string>
#include "Artist.h"
#include "Song.h"
#include "StadiumConcert.h"
#include "GAConcert.h"
using namespace std;
#include <vector>



int main() {
    // Create instance of Artist object 
    Artist artist1("Taylor Swift", "Pop", 2006, true);

    // Create 4 instances of song objects
    Song song1("Love Story", "Fearless", artist1, 235, "Country Pop", 2008);
    Song song2("Blank Space", "1989", artist1, 231, "Pop", 2014);
    Song song3("Shake It Off", "1989", artist1, 219, "Pop", 2014);
    Song song4("You Belong With Me", "Fearless", artist1, 219, "Country Pop", 2008);
    Song song5("Cardigan", "Folklore", artist1, 242, "Indie Pop", 2020);
    Song song6("Willow", "Evermore", artist1, 214, "Indie Pop", 2020);
    Song song7("Anti-Hero", "Midnights", artist1, 210, "Pop", 2022);

    // create empty song vectors to store songs
    vector<Song> setList1 = {};
    vector<Song> setList2 = {};

    // add songs to the vectors
    setList1.push_back(song1);
    setList1.push_back(song2);
    setList1.push_back(song3);
    setList1.push_back(song4);
    setList2.push_back(song5);
    setList2.push_back(song6);
    setList2.push_back(song7);

    // Call one song instance display function 
    song1.display();

    // Create instance of StadiumConcert object
    StadiumConcert stadiumConcert1("Eras Tour", "MetLife Stadium", "2024-07-15", true, artist1, setList1, 150.0, 300.0, 50000);

    // Create instance of GAConcert object
    GAConcert gaConcert1("Eras Tour", "Central Park", "2024-08-01", true, artist1, setList2, 120.0, 250.0, 2000);

    // Print concert details using printEvent();
    cout << "------------------------" << endl;
    cout << "Stadium Concert Details:" << endl;
    printEvent(stadiumConcert1);
    cout << "------------------------" << endl;
    cout << "General Admission Concert Details:" << endl;
    printEvent(gaConcert1);
    cout << "------------------------" << endl;

    return 0; 
}