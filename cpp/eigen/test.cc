#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
#include <eigen3/Eigen/Dense>
#include <iostream>
using namespace Eigen;
using namespace std;


int main(int, char**)
{
  auto mm = AngleAxisd(0, Vector3d::UnitX()) * AngleAxisd(0, Vector3d::UnitY()) * AngleAxisd(45/180.0*3.14, Vector3d::UnitZ());
  auto T = Translation3d(1,2,3);
  Eigen::Matrix3d mmm;
  Eigen::Affine3d m = T*mm; 
  Eigen::Vector3d x(1,1,1);
  auto xx = m * x;
  std::cout << "Now the matrix m is:" << std::endl << m.matrix() << std::endl;
  std::cout << m.linear() << endl;
  std::cout << m.translation() << endl;
  return 0;
}
