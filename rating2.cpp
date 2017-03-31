#include"rating2.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cmath>
        Rating::Rating(){
        K=0;
        RA=0;
        RB=0;
        }
    void Rating::setK(int data1){
        K=data1;
        }
    void Rating::setRA(int data2){
        RA=data2;
        }
    void Rating::setRB(int data3){
        
        RB=data3;
        }
    double Rating::findEA(){
        double a=10;
        double po=(RB-RA)/400;
        EA=1/(1+pow(a,po));
        }
    double Rating::findEB(){
        double a=10;
        double po=(RA-RB)/400;
        EB=1/(1+pow(a,po));
        }
        void Rating::findNewRA(){
                NewRA=RA+K*(result-EA);
        }
        void Rating::findNewRB(){
        NewRB=RB+K*(1-result-EB);
        }
    void Rating::resetStatus(double data4){
        result=data4;
        findEA();
        findEB();
        findNewRA();
        findNewRB();
        RA=NewRA;
        RB=NewRB;
        getRA();
        getRB();
        }
    int Rating::getRA(){
        int display=round(RA);
        return  display;  
        }
    int Rating::getRB(){
        int display=round(RB);
        return  display;
        }

