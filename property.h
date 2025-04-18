#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class property
{
private:
	string titel;
	string location;
	double price;
	int bedrooms;
	int bathrooms;
	double area;
	string type;
public:
	property(string t, string l,double p, int bedr, int bath, double Area, string Type);
	void displaySummary();
	void displayDetails();
	bool matchesFilter(string l,double p,double minp,double maxp,string ty);

};

