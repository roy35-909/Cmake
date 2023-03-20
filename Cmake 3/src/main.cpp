#include <iostream>
#include <Eigen/Dense>
#include "./../include/matrix_operations.hpp"

int main() {

    // Define two Eigen matrices
    Eigen::MatrixXd y1(2, 3);
    Eigen::MatrixXd y2(3, 2);

    // Initialize the matrices with some values
    y1 << 1,2,3,4,5,6;
    y2 << 2,4,1,8,3,6;

    // Create an instance of the MatrixOperation class
    MatrixOperation matrixOperation;

    

    


    // Multiply the two matrices using the multiply() method of the MatrixOperation class
    Eigen::MatrixXd result = matrixOperation.multiply(y1,y2);

    // Print the result on the console
    std::cout << "Result:\n" << result << std::endl;

    return 0;
}
