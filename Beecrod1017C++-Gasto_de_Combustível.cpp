#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int tempo,kmmedia;
	float KM,L;
	
	cin >> tempo;
	cin >> kmmedia;
	
	KM=kmmedia * tempo;
	L= KM / 12;
	
	cout  << fixed << setprecision(3) << L;


	return 0;	
}
