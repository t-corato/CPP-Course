#include <iostream>

using namespace std;


char get_random_operator(void);

int main(){

    srand(time(0));

    int num_1 = static_cast<size_t>(rand() % 200);
    int num_2 = static_cast<size_t>(rand() % 200);

    char op = get_random_operator();

    int result{};

    switch(op){
        case '*':{
            result = num_1 * num_2;
        }
        break;
        case '+':{
            result = num_1 + num_2;
        }
        break;
        case '-':{
            result = num_1 - num_2;
        }
        break;
        default: {
        }
        break;
    }

    cout << "Welcome to the greatest calculator on Earth!" << endl;
    cout << "What is the result of " << num_1 << " " << op << " " << num_2 << " : ";
    int user_result{};
    cin >> user_result;

    if (user_result == result){
        cout << "Congratulations! You got the result " << result << " right!" << endl;
    }
    else{
        cout << "Naah! the correct result is : " << result << endl;
    }
    return 0;
}

char get_random_operator(void){
    char operators[3] = {'*', '+', '-'};
    int selector = static_cast<int>(rand() % 3);

    return  operators[selector];
}