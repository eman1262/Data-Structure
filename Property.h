//#ifndef PROPERTY_H
//#define PROPERTY_H

#include <string>
#include <iostream>
#include<vector>

using namespace std;

class Property {
private:
    string title;
    string location;
    string city;
    double price;
    int bedrooms;
    int bathrooms;
    double area;
    string type;

public:
    Property(string t, string l ,string c, double p, int bedr, int bath, double a, string ty);


    string getTitle() const;
    string getLocation() const;
    string getCity() const;
    double getPrice() const;
    int getBedrooms() const;
    int getBathrooms() const;
    double getArea() const;
    string getType() const;

   
    void displaySummary() const;
    void displayDetails() const;
      bool matchesFilter(string l, double p, double minp, double maxp, string ty) const;
      
};

//#endif