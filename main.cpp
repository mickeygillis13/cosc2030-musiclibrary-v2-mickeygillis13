#include <iostream>
#include <string>
#include "Artist.h"
#include "Song.h"
using namespace std;



int main() {
    // Create instance of Artist object 
    Artist artist1("Taylor Swift", "Pop", 2006, true);

    // Create instance of Song object
    Song song1("Love Story", "Fearless", artist1, 235, "Country Pop", 2008);

    // Call song instance display function 
    song1.display();

    return 0; 
}