/*
Aditya Patra
Movie Class Assignment

Purpose:
Code a Movie class that has the screen writer, the year released, and the title as its private member variables. It has the standard setters and getters for each private member variable. Also code a print() method which prints the object data in a simple format.

Your code should read data from an input file, using the data below, which lists data in this order: title, year released, screen writer name.

Read this data into a temporary Movie object. Then append that object to your container.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Movie {
    private:
        string title;
        string writer;
        int year;
    public:
        Movie(string Title, string Writer, int Year) {
            title = Title;
            writer = Writer;
            year = Year;
        }
        string getWriter() {
            return writer;
        }
        string getTitle() {
            return title;
        }
        int getYear() {
            return year;
        }
        void setTitle(string val) {
            title = val;
        }
        void setWriter(string val) {
            writer = val;
        }
        void setYear(int val) {
            year = val;
        }
        void print() {
            cout << "Movie Title: " << title << "\n    Year: " << year << "\n    Writer: " << writer << endl;
        }
};
int main() {
    ifstream file("file.txt");
    string line;
    string tempTitle;
    string tempWriter;
    int tempYear;
    vector<Movie> movies;
    if(file.good()) {
        for (int i = 0; i < 4; i++) {
            getline(file, line);
            tempTitle = line;
            getline(file, line);
            tempYear = stoi(line);
            getline(file, line);
            tempWriter = line;
            Movie temp = Movie(tempTitle, tempWriter, tempYear);
            movies.push_back(temp);
        }
        for(int i= 0; i < 4; i++) {
            movies[i].print();
        }
    }
}
