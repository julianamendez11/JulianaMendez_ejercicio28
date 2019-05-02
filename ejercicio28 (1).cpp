#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int main()
{
  int K=200;
  int c=900;
  int rho=2700;
  int i;
  int j;
  int n;

  float delta_x=0.01;
  float delta_t=0.5;

  double temperatura_old[201];
  double temperatura_new[201];
    
  ofstream outfile;
  
  for(i=1;i<(201);i++)
      {
      temperatura_old[i]=300.0;
      if (i=80 && i<121){
          temperatura_old[i]=500.0;
          }
      }
    
   n=(K*delta_t)/(c*rho*delta_x*delta_x);   
    
   outfile.open("temperaturas.dat");   
      
      
  for(j=1;j<200;j++)
  {
      for(i=1;i<200;i++)
      {
          temperatura_new[i]=temperatura_old[i]+n*(temperatura_old[i+1]+temperatura_old[i-1]-(2*temperatura_old[i]));
      } 
     for(i=0;i<200;i++)
     {
		std::cout<< temperatura_new[i] << std::endl;
        outfile << temperatura_new[i] << endl;
     }
      outfile << "\n";
  }
    
    
  return 0;
}
