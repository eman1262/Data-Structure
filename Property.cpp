#include "Property.h"

Property::Property(string t, string l,string c, double p, int bedr, int bath, double a, string ty) {
    title = t;
    location = l;
    city = c;
    price = p;
    bedrooms = bedr;
    bathrooms = bath;
    area = a;
    type = ty;
}


string Property::getTitle() const {
    return title;
}

string Property::getLocation() const {
    return location;
}

string Property::getCity() const {
    return city;
}

double Property::getPrice() const {
    return price;
}

int Property::getBedrooms() const {
    return bedrooms;
}

int Property::getBathrooms() const {
    return bathrooms;
}

double Property::getArea() const {
    return area;
}

string Property::getType() const {
    return type;
}


void Property::displaySummary() const {
    cout << "Title->" << title << " , Location->" << location
        << " , Price->" << price << " EGP." << endl;
}

void Property::displayDetails() const {
    cout << "Title: " << title << endl;
    cout << "Location: " << location << endl;
    cout << "City: " << city << endl;
    cout << "Price: " << price << " EGP" << endl;
    cout << "Bedrooms: " << bedrooms << endl;
    cout << "Bathrooms: " << bathrooms << endl;
    cout << "Area: " << area << " sqm" << endl;
    cout << "Type: " << type << endl;
}

bool Property::matchesFilter(string l, double p, double minp, double maxp, string ty) const {
    return (location == l && price == p && price >= minp && price <= maxp && type == ty);
}