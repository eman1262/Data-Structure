#include"Property.h"
#include<vector>
int main()
{
	vector<Property>P;
	P.push_back(Property("Stdio", "nasr city","ciro", 30000.0, 3, 2, 180, "apartment"));
	P.push_back(Property("Modren Apartment","ciro", " mdentiy", 18000.0, 2, 1, 120, "apartment"));
	P.push_back(Property("Stdio", "nasr city","ciro", 26000.0, 3, 2, 200, "apartment"));
	for (int i = 0;i < P.size();i++)
	{
		P[i].displayDetails();
	}
	

	
}