#include <iostream>
#include "Vector.h"
#include "List.h"
#include <time.h>
using namespace std;
double elapsed_time(clock_t start, clock_t finish) {
	
	return (finish-start) / (double)(CLOCKS_PER_SEC / 1000);
}
int main()
{
//Basic personal information
cout << "[Chenzheng Li]" << endl << "[301417091]" << endl << "[cla429]" << endl<< "Program: [Part1]" << endl;

cout << "Type of Elements : [integer]" << endl ;
cout << "Time units : [milliseconds]" << endl;
cout << "Number of elements : [100000000]" << endl;
// integer datetype time test;
	clock_t time1,time2;
	int size = 100000000;     // size of vector and list;

	// Vector insert [integer][size:100000000];
	time1 = clock();
	Vector<int> v1;
	for (int i = 0; i < size; i++)
	{
		v1.push_back(i);
	}
	time2 = clock();
	float VectorIntotalTime = elapsed_time(time1, time2);
	cout << "Time for vector Insertion: " << VectorIntotalTime << endl;

	// List insert [integer][size:100000000];
	clock_t time3 = clock();
	List<int> l1;
	for (int i = 0; i < size; i++)
	{
		l1.push_back(i);
	}
	clock_t time4 = clock();
	float ListIntotalTime = elapsed_time(time3, time4);
	cout << "Time for list Insertion: " << ListIntotalTime << endl;
	
	//Vector visit [integer][size:100000000];
	clock_t time5 = clock();
    v1.visitAll();
    clock_t time6 = clock();
    float VectorVisittotalTime = elapsed_time(time5, time6);
	cout <<"Time for Vector Visiting: " << VectorVisittotalTime << endl;

	//List visit  [integer][size:100000000]; 
	clock_t time7 = clock();
	l1.visitAll();
	clock_t time8 = clock();
	float ListVisittotalTime = elapsed_time(time7, time8);
	cout << "Time for List Visiting: " << ListVisittotalTime << endl;

	cout << endl;
	// double datetype time test;
	cout << "Type of Elements : [double]" << endl ;
	cout << "Time units : [milliseconds]" << endl;
	cout << "Number of elements : [100000000]" << endl;

	// Vector insert [double][size:100000000];
	clock_t time21, time22;
	time21 = clock();
	Vector<double> v2;
	for(int i=0; i < size;i++)
	{
		v2.push_back(i);
	}
	time22 = clock();
	float VectorInTotalTime2 = elapsed_time(time21, time22);
	cout << "Time for Vector Insertion: " << VectorInTotalTime2 << endl;

	// List insert [double][size:100000000];
	clock_t time23, time24;
	time23 = clock();
	List<double> l2;
	for(int i=0; i < size; i++)
	{
		l2.push_back(i);
	}
	time24 = clock();
	float ListIntotalTime2 = elapsed_time(time23,time24);
	cout << "Time for List Insertion: " << ListIntotalTime2 << endl;
	
	//Vector visit [double][size:100000000];
	clock_t time25, time26;
	time25 = clock();
	v2.visitAll();
	time26 = clock();
	float VectorVisittotalTime2 = elapsed_time(time25,time26);
	cout << "Time of Vector Visiting: " << VectorVisittotalTime2 << endl;
	
	//List visit [double][size:100000000];
	clock_t time27, time28;
	time27 = clock();
	l2.visitAll();
	time28 = clock();
	float ListVisittotalTime2 = elapsed_time(time27,time28);
	cout << "Time of List Visiting: " << ListVisittotalTime2 << endl;
	

    
    return 0;
}








