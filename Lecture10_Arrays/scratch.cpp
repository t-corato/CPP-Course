#include <iostream>

bool is_collection_sorted(int numbers[], unsigned int collection_size){

  // Don't modify anything above this line
  //Your code will go below this line
  for (unsigned int i = 0; i < collection_size - 1; i++){
      if (numbers[i] > numbers[i + 1]){
          return false;
      }
  }
 
  //Your code will go above this line
  //Don't modify anything below this line
  return true;
}

int main(){
    int data[] {1, 112, 4, 5, 8, 12, 13, 16, 71, 92};
    int len = sizeof(data)/sizeof(int);
    bool is_sorted = is_collection_sorted(data, len);
    std::cout << is_sorted << std::endl;

    return 0;
}