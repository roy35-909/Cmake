#include "./../include/matrix_operations.hpp"

MatrixOperation::MatrixOperation() {

}

Eigen::MatrixXd MatrixOperation::multiply(Eigen::MatrixXd x1,Eigen::MatrixXd x2) {
    return x1 * x2;
}
