#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double tempA[7];
	double tempB[7];
	double tempC[7];
	
	
	cout<<"Enter temperature for week of Province A, Province B and Province C: "<<endl;
	for(int x = 0; x < 7; x++){
		cout<<"Province A, Day "<<x+1<<": ";
		cin>>tempA[x];
	}

	for(int y = 0; y < 7; y++){
		cout<<"Province B, Day "<<y+1<<": ";
		cin>>tempB[y];
	}

	for(int z = 0; z < 7; z++){
		cout<<"Province C, Day "<<z+1<<": ";
		cin>>tempC[z];
	}
	cout<<endl;

	cout<<"Displaying Values: "<<endl;
	for(int x = 0; x < 7; x++){
		cout<<"Province A, Day "<<x+1<<"= "<<tempA[x]<<endl;
	}
	for(int y = 0; y < 7; y++){
		cout<<"Province B, Day "<<y+1<<"= "<<tempB[y]<<endl;
	}
	for(int z = 0; z < 7; z++){
		cout<<"Province C, Day "<<z+1<<"= "<<tempC[z]<<endl;
	}
}
