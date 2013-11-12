/*
Holly All-Time Lifting Records (Bench + Squat)
114 Class, Nick Sammut, 425, 2010
123 Class, Tony Reyes, 475, 2010
132 Class, Vince Grasso, 560, 2009
145 Class, Jake Albritton, 645, 2010
155 Class, Aaron Morehead, 685, 2009
165 Class, Mike Hoffman, 690, 2007
181 Class, Pat O'Connor, 720, 2012
194 Class, James Nichols, 745, 2010
207 Class, Cory Printz, 745, 2011
220 Class, Christian Jensen, 810, 2008
221+ Class, Trent Worthington, 850, 2006
*/

#include <iostream>
#include <cstdlib>

using namespace std;

    int bench_max, deadlift_max, squat_max, weight_benched;
    double weight;

void record_board_beater(int squat_max, int bench_max, double weight){
    if(weight <= 114 && weight >= 0){
        cout << "You are going up against\n114 Class, Nick Sammut, 425, 2010\n";
        if(squat_max + bench_max > 425){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 123){
        cout << "You are going up against\n123 Class, Tony Reyes, 475, 2010\n";
        if(squat_max + bench_max > 475){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 132){
        cout << "You are going up against\n132 Class, Vince Grasso, 560, 2009\n";
        if(squat_max + bench_max > 560){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 145){
        cout << "You are going up against\n145 Class, Jake Albritton, 645, 2010\n";
        if(squat_max + bench_max > 645){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 155){
        cout << "You are going up against\n155 Class, Aaron Morehead, 685, 2009\n";
        if(squat_max + bench_max > 685){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 165){
        cout << "You are going up against\n165 Class, Mike Hoffman, 690, 2007\n";
        if(squat_max + bench_max > 690){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 181){
        cout << "You are going up against\n181 Class, Pat O'Connor, 720, 2012\n";
        if(squat_max + bench_max > 720){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 194){
        cout << "You are going up against\n194 Class, James Nichols, 745, 2010\n";
        if(squat_max + bench_max > 745){
            cout << "YOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 207){
        cout << "You are going up against\n207 Class, Cory Printz, 745, 2011\n";
        if(squat_max + bench_max > 745){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight <= 220){
        cout << "You are going up against\n220 Class, Christian Jensen, 810, 2008\n";
        if(squat_max + bench_max > 810){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else if(weight >= 221){
        cout << "You are going up against\n221+ Class, Trent Worthington, 850, 2006\n";
        if(squat_max + bench_max > 850){
            cout << "\nYOU BEAT HIM!";
        }
        else{
            cout << "Sorry, you didn't beat a record.\n";
        }
    }
    else{
        cout << "YOU CAN'T WEIGH A NEGATIVE NUMBER!!!";
    }
}

int total(int bench_max, int squat_max, int deadlift_max){
    return bench_max + squat_max + deadlift_max;
}

int squat_and_bench(int bench_max, int squat_max){
    return bench_max + squat_max;
}

int squat_and_deadlift(int squat_max, int deadlift_max){
    return squat_max + deadlift_max;
}

void run_lifting_calculations(){
    cout << "Your total is " << total(bench_max, squat_max, deadlift_max) << "\n";
    cout << "Your bench and squat total is " << squat_and_bench(bench_max, squat_max) << "\n";
    cout << "Your squat and deadlift total is " << squat_and_deadlift(squat_max, deadlift_max) << "\n";
}

void display_awards(){
    if(bench_max >= 225 || weight_benched >= 10){
        cout << "\tCrazy Horse!\n";
            if(bench_max >= 250 || weight_benched >= 20){
                cout << "\tClydesdale Club!\n";
            }
    }
    if(total(bench_max, squat_max, deadlift_max) >= 1000){
        cout << "\t1000 Pound Club!\n";
    }
    if(squat_and_deadlift(squat_max, deadlift_max) >= 700){
        cout << "\tTree Trunk!\n";
    }
}

int main(){
    system("title Nick's Lifting Helper");
    cout << "Please enter the lifting information\n";
    cout << "Bench Max: ";
    cin >> bench_max;
    cout << "Squat Max: ";
    cin >> squat_max;
    cout << "Deadlift Max: ";
    cin >> deadlift_max;
    cout << "How much do you weigh? ";
    cin >> weight;
    cout << "How many times can you bench ~" << weight << " in one set? ";
    cin >> weight_benched;
    cout << "\n\n";
    run_lifting_calculations();
    cout << "\n\nYour Awards are:\n";
    display_awards();
    cout << "\n\nDid you beat one of Holly's Records?\n";
    record_board_beater(squat_max, bench_max, weight);

system("pause");
return 0;
}
