#include <iostream>
#include <windows.h>
#include <cmath>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()

{
    int bench;
    int squat;
    int deadlift;
    system("title NICK'S LIFTING HELPER");

    cout << "Please enter your stats for LIFTING." << endl;

    cout << "Bench:" << endl;
    cin >> bench;
    if(bench>=225)
    {
        cout << "You got Crazy Horse!" << endl;
    }

    if(bench>=250)
    {
        cout << "You got Clydesdale Club!" << endl;
    }
    cout << endl;
    cout << "Squat:" << endl;
    cin >> squat;
    cout << endl;
    cout << "Deadlift:" << endl;
    cin >> deadlift;
    cout << endl;

    int squatbench = squat + bench;
    int total = bench + squat + deadlift;
    cout << "Your Total is: ";
    cout << total << endl;
    if(total>=1000)
    {
        cout << "You Are in the 1000 Pound Club!" << endl;
    }
    else
    cout << "Sorry, you didn't get the 1000 Pound Club.(1000+)" << endl;
    cout << endl;
    cout << "Your Bench and Squat Total is: ";
    cout << squatbench << endl<<endl;
    int squatdeadlift = squat + deadlift;
    cout << "Your Squat and Deadlift Total is: ";
    cout << squatdeadlift << endl;
    if(squatdeadlift>=700)
    {
        cout << "You Got Tree Trunk!" << endl;
    }
else
cout <<"Sorry, you didn't get Tree Trunk.(700+)"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;


cout<<"See if you are close to beating one of Holly's records, or maybe have beaten it."<<endl;
cout<<endl;
cout<<endl;

cout << "HOLLY LIFTING RECORDS" <<endl<<endl;

cout << "Weight Class	    Name	         Total Bench and Squat	       Year" << endl;
cout << "   114           Nick Sammut(ME)               425                      10" << endl;
cout << "   123           Tony Reyes                    475                      10" << endl;
cout << "   132           Vince Grasso                  560                      09" << endl;
cout << "   145           Brandon Stout                 640                      08" << endl;
cout << "   165           Aaron Morehead                685                      09" << endl;
cout << "   181           James Nichols                 685                      09" << endl;
cout << "   194           James Nichols                 745                      10" << endl;
cout << "   207           Danny Gregory                 730                      10" << endl;
cout << "   220           Christian Jensen              810                      08" << endl;
cout << "   221+          Trent Worthington             850                      06" << endl;

system("pause");
return 0;
}
