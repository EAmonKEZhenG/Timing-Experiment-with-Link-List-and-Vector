#include <iostream>
#include "Vector2.h"
#include "List.h"
#include <time.h>
using namespace std;
float elapsed_time(clock_t start, clock_t finish) {
	
	return (finish-start) / (double)(CLOCKS_PER_SEC / 1000);
}
int main() {
  //Basic personal information
  cout << "[Chenzheng Li]" << endl << "[301417091]" << endl << "[cla429]" << endl<< "Program: [Part2]" << endl << "Type of Elements : [integer]" << endl;

  // integer datetype time test;
  cout << "Time units : [milliseconds]" << endl;
  cout << "Number of elements : [10000000]" << endl;
  int size=10000000;
  // Vector push_front [integer][size:10000000];
  clock_t time1, time2;
  time1 = clock();
  Vector<int> v1;
  for(int i=0; i < size;i++)
  {
    v1.push_front(i);  
  }
  time2 = clock();
  float total1 = elapsed_time(time1, time2);
  cout << "Time for vector push front is : "<< total1 << endl;
  
  // List push_front [integer][size:10000000];
  clock_t time3, time4;
  time3 = clock();
  List<int> l1;
  for(int i=0; i < size; i++)
  {
    l1.push_front(i);
  }
  time4 = clock();
  
  float total2 = elapsed_time(time3,time4);
  cout << "Time of list push front is: " << total2 << endl;
  cout << endl;
  cout << "Type of Elements : [double]" << endl;
   cout << "Time units : [milliseconds]" << endl;
  cout << "Number of elements : [10000000]" << endl;
  // Vector push_front [integer][size:10000000];
  clock_t time5, time6;
  double temp = 1.1;
  time5 = clock();
  Vector<double> v2;
  for(int i=0; i < size;i++)
  {
    v2.push_front(temp);  
  }
  time6 = clock();
  float total3 = elapsed_time(time5, time6);
  cout << "Time for vector push front is : "<< total3 << endl;
  
  // List push_front [integer][size:10000000];
  clock_t time7, time8;
  time7 = clock();
  List<double> l2;
  for(int i=0; i < size; i++)
  {
    l2.push_front(temp);
  }
  time8 = clock();
  
  float total4 = elapsed_time(time7,time8);
  cout << "Time of list push front is: " << total4 << endl;

  
  
  
  return 0;
}





