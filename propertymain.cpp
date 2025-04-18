#include"property.h"
#include<vector>
int main()
{
	vector<property>P;
	P.push_back(property("Stdio", "nasr city", 30000.0, 3, 2, 180, "apartment"));
	P.push_back(property("Modren Apartment", " mdentiy", 18000.0, 2, 1, 120, "apartment"));
	P.push_back(property("Stdio", "nasr city", 26000.0, 3, 2, 200, "apartment"));
	for (int i = 0;i < P.size();i++)
	{
		P[i].displayDetails();
	}
	

	
}