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
using namespace std;
class Color {
    private:
        string title;
        string writer;
        int year;
    public:
        Color(string Title, string Writer, int Year) {
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
            cout << "Movie Title: " << title << "\n    Writer: " << writer << "\n    Year: " << year << endl;
        }
};
int main() {
    ifstream file("file.txt");
    string line;
    string tempTitle;
    string tempWriter;
    int tempYear;
    while (getline(file, line)) {
        int firstComma = line.find(',');
        int secondComma = line.find(',', firstComma+1);
        tempTitle = line.substr(0, firstComma);
        tempWriter = line.substr(firstComma + 1, secondComma);
        tempYear = stoi(line.substr(secondComma+1));

    }
}
