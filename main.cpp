#include<iostream>
#include"profile.hpp"
#include<vector>
using namespace std;

int main() {

  Profile Mrudul("Mrudul" , 20 ,"Nanded" , "India" , "He/Him" , {"Playing games","Bike riding","coding"} );

cout<<Mrudul.view_profile();
}