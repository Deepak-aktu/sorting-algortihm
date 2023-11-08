#include <iostream>
using namespace std ;
void selection(int arr[],int size ){
  for(int i =0;i<=size -1;i++){
    int minimum=i;
    for(int j=i+1;j<=size;j++){
      if(arr[j]<arr[minimum]){
        minimum=j;
      }
      
    }
     swap(arr[minimum],arr[i]);
  }
  for(int k=0;k<=size;k++)
 cout<<arr[k];
  
}
int main() {
  int size ;
  cout<<"enter an size of an array";
  cin>>size;
 int arr[size];
  cout<<"enter an array element "<<"\n";
  for(int i=0;i<=size;i++){
    cin>>arr[i];
  }
  cout<<"sorted array are "<<"\n";
selection(arr,size);
  
}