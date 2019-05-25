#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int array[10], max, min;
	double sum = 0;
	double average = 0;
	
	cout<<"Please enter 10 integers: "<<endl;
	for(int x = 0; x < 10; x++){
		cin>>array[x];
		sum += array[x];
		average = sum / 10;
	}
	max = array[0];
	for(int y; y < 10; y++){
		if(max < array[y])
		max = array[y];
	}
	min = array[0];
	for(int z; z < 10; z++){
		if(min > array[z])
		min = array[z];
	}
	cout<<"The largest integer is: "<<max<<endl;
	cout<<"The smallest integer is: "<<min<<endl;
	cout<<"Total of all integers: "<<sum<<endl;
	cout<<"The average of all integers: "<<average<<endl;
}
