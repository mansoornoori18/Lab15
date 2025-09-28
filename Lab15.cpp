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
    if (!inFile)


    cout << "hello" << endl;

    return 0;

}