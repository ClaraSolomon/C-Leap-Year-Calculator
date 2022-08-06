#include <iostream>

using namespace std;

int main()
{
    
int year; //inserted by the user
bool leapTrue = true; // if year is leap
bool leapFalse = false; //if year isnt leap


cout<<"Welcome to the leap year calculator."<<endl;
cout<<"Please Enter a Year"<<endl;
cin>>year;

//Calculation if a year is evenly divisible by 4 (leap year)
if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
    cout<<"The year "<<year<<" is a leap year."<<endl;//leapTrue<<endl;
}
//Calculation if a year is evenly divisible by 100 (not a leap year)
    else if (year % 4 == 0 && year % 100 != 0 ){
        cout<<"The year "<<year<<" is a leap year."<<endl;//leapFalse;
    } 
    else if (year % 4 ==0 && year % 100 == 0 && year % 400 != 0){
        cout<<"The year "<<year<<" is not a leap year."<<endl; 
    } 
    else{
        cout<<"The year is not a leap year."<<endl;
    }
    
return 0;
} 
