#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

  int main (int argc, char *argv[])
{
  int matA [2][2]=  {4, 2, 8, 10};
int j,k;
  cout<<"Matriks A"<<endl;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matA[i] [j]<<" ";
}
cout<<endl;
}
      cout<<"Hasil Transpos Matriks A"<<endl;
        for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      cout<<matA[j] [i]<<" ";
}
cout<<endl;
}
system ("PAUSE");
return 0;
}
