#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void CreateBoard(std::string matrix[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      matrix[i][j] = "_";
    }
  }
}

int main(){
  std::string matrix[3][3];
  CreateBoard(matrix);
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

