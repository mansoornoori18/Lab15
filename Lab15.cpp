#include<iostream>  // COMSC-210 | Lab 15 | Mansoor Noori
#include<string>    // IDE Visual Studio,
#include<fstream>   // for file input

using namespace std;

// Movie class definition
class Movie {
    private:
    string title;                  // Movie title
    int yearReleased;              // Year the movie was released
    string screenWriter;           // Screenwriter's name

    public:
    // Setter to assign values
    void setTitle(const string& t){ title = t; }
    void setYearReleased(int y) { yearReleased = y; }
    void setScreenWriter(const string& sw) { screenWriter = sw; }
    
    // Getter methods to retrieve values
    string getTitle() const { return title; }
    int getYearReleased() const { return yearReleased; }
    string getScreenWriter() const { return screenWriter; }

    // to display the  movie information
    void print() const {
        cout << "Movie: " << screenWriter << endl;
        cout << "    Year released: " << yearReleased << endl;
        cout << "    Screenwriter: " << title << endl;
        cout << endl;

    }
};

// main function 
int main(){

    // Open the input file
    ifstream inFile("input.txt");
    if (!inFile){
        cout << "Error opening input.txt" << endl;
        return 1;  // Exit if file couldn't be opened
    }

    const int SIZE = 4;            // there are 4 records
    Movie movies[SIZE];            // Array of 4 Movie objects

    string title, screenWriter;    // Temporary variables to hold input
    int year;

    // Read the file
    for (int i = 0; i < SIZE; ++i){
        getline(inFile, title);          // Read movie title
        inFile >> year;                  // Read year
        inFile.ignore();                // Skip the newline character after the number
        getline(inFile, screenWriter);  // Read screenwriter's name

        // Use setters to populate the Movie object
        movies[i].setTitle(title);
        movies[i].setYearReleased(year);
        movies[i].setScreenWriter(screenWriter);
    }

    // Output all movies
    for (int i = 0; i < SIZE; ++i){
        movies[i].print();       // Call for each movie and print
    }
    
    return 0;

}