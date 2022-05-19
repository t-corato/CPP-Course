#include <iostream>
#include <ctime>

using namespace std;

void print_prediction(void);

int main(){
    srand(time(0)); //set the seed 
    
    bool end{false};

    const int max_length{15};
    char name[max_length]{};

    cout << "What's your name dear? " << endl;
    cin.getline(name, max_length); // Get input with spaces

    while(!end){
        cout << "Oh dear " << name << ", I see ";

        print_prediction();

        cout << "Do you want to try again? (Y | N): ";

        char go_on;
        cin >> go_on;
        
        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

}

string get_prediction(int n){
    string predictions[11] { 
        "a lot of kids runnning in the backyard!",
        "a of empty beer bottles on your work table.",
        "you partying too muhc with kids wearing weird clothes.",
        "you running away from something really scary.",
        "clouds gathering in the sky and an army standing ready for war.",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your PC",
        "you yelling at your boos. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        "humm, I don't see anything"};

    return predictions[n];
}


void print_prediction(void){
    size_t rand_num = static_cast<size_t>(rand() % 11);

    string pred = get_prediction(rand_num);

    cout << pred << endl;

}
