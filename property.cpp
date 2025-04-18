#include "property.h"
property::property(string t, string l, double p, int bedr, int bath, double Area, string Type)
{
	titel = t;
	location = l;
	price = p;
	bedrooms = bedr;
	bathrooms = bath;
	area = Area;
	type = Type;

}
void property::displaySummary()
{
	cout << "Titel->" << titel << " , Location->" << location << " , Price->" << price <<"EGP ." << endl;
}
void property::displayDetails()
{
	cout << "Titel ->" << titel << endl;
	cout << "Location ->" << location << endl;
	cout << "Price ->" << price << "EGP." << endl;
	cout << "BedRooms ->" << bedrooms << endl;
	cout << "BathRooms ->" << bathrooms << endl;
	cout << "Area ->" << area << endl;
	cout << "Type ->" << type << endl;

}
bool property::matchesFilter(string l, double p, double minp, double maxp, string ty)
{
	return (location == l && price == p && price >= minp && price <= maxp && type == ty);
}

