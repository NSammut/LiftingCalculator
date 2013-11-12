#include <iostream>
#include <cstdlib>
using namespace std;

    int bench_max, deadlift_max, squat_max, weight_benched;
    double weight;

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

system("pause");
return 0;
}
