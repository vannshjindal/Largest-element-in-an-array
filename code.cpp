#include <iostream>
using namespace std;

int main(){
int arr[6] = {-5,-12,-22,-1,-15,-24};
int size=6;
int largest=arr[0];

for(int i =0; i<size; i++){
  if(arr[i]>largest){
    largest=arr[i];
    ;
  }
  
}
cout<<"the largest element is "<<largest<<endl;
return 0;




  
}
