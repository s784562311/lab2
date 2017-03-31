#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "rating2.h"
using namespace std;

int main()
{
   Rating rate;

   int data1,data2,data3;
   double data4;

   ifstream inFile("file.in", ios::in);
   if(!inFile) {
   cerr << "Failed opening" << endl;
   exit(1);
   }//check read file
   
   inFile >> data1 >> data2 >> data3; 
   rate.setK(data1);
   rate.setRA(data2);
   rate.setRB(data3);

   ofstream outFile("file.out", ios::out);
   if(!outFile) {
   cerr << "Failed opening" << endl;
   exit(1);
   }//check write file
  
   outFile << data2 << "  "<< data3 << endl;
   while(inFile >> data4){
   rate.resetStatus(data4);	
   outFile << rate.getRA() <<"  "  << rate.getRB() << endl;
   }
	   

   return 0;
}                                                                                                                                     
