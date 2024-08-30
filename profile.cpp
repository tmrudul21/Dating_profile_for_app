#include<iostream>
#include"profile.hpp"
#include<vector>
using namespace std;

Profile::Profile(string new_name , int new_age , string new_city , string new_country , string new_pronouns , vector<string> new_hobbies){
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
  hobbies = new_hobbies;
}

string Profile::view_profile(){
  string bio = "Name: "+name ;
  bio += "\nAge: "+to_string(age);
  bio += "\nCity: "+city;
  bio += "\nCountry: "+country;
  bio += "\nPronoun: "+pronouns;
  bio += "\nHobbies: ";
  for(int i=0 ; i<hobbies.size() ; i++){
    bio += hobbies[i] + ", ";
  }
  bio += "\n";
  return bio;
}