#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int km;
	float C ,combu;
	
	cin >> km;
	cin >> combu;
	
	C = km / combu;
	
	cout << fixed << setprecision(3) << C << " km/l\n";
	
	return 0;
}
