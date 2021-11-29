/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 6 ex 4
 *  Copyright 2021 kirsten blair
 */

 #include "std_lib_facilities.h"
  
  

 class Name_value
 { 
    public: string name; int values;

    Name_value(string names, int val):name(names), values(val){}
 };
 
 vector<Name_value> value;


 bool uniqueName(string string)
 {
     for (int i = 0; i < value.size(); i++)
     {
         if (string == value[i].name)
         {
             return false;
         }
     }

     return true;
 }

 int main()
 {
     cout << "Enter name and their score: ";

     int s;
     string n;

     while (cin >> n >> s)
     {
         if (n == "NoName" || s == 0)
         {
             cerr << "Error.\n";
         }

         if (uniqueName(n))
         {
             Name_value val = Name_value(n, s);
             value.push_back(val);
         }
         else 
         {
             cerr << "Error.\n";
             break;
         }

         for (int i = 0; i < value.size(); i++)
         {
             cout <<"Name == "<< value[i].name <<  "\n";
             cout << "Score == " << value[i].values << "\n";
         }
     }


     return 0;

 }
