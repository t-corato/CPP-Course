#include <iostream>

// This coulde would cause a compliation error because there 
//is no semicolon at the end
/*
int main(){

    std::cout << "Hello World!" << std::endl
    return 0;
}
*/

// Run time error
int main(){
    std::cout << "Hello World!" << std::endl;
    7/0;
    return 0;
}
