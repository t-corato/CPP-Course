#include <iostream> 
#include <string>


int main(){
    /*
    std::cout << "Hello World!" << std::endl;

    int age = 23;
    std::cout << "The age is : " << age << std::endl;

    //Errors
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log Messages
    std::clog << "std::clog output : This is a log message" << std::endl;

    // Get input from user
    std::string name;

    std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name; // store the input im variable name

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;
    */
    // There is a problem if we pass the name with a space, how to solve it
    std::string full_name;
    int age1;

    std::cout << "Please type your full name and age" << std::endl;

    std::getline(std::cin, full_name);

    std::cin >> age1;

    std::cout << "Hello " << full_name 
            << "! You are " << age1 << " years old" << std::endl;

    return 0;
}

