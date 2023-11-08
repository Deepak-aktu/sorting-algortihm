#include<iostream>
using namespace std ;
void insertionsort(int arr[], int  size ){
  for (int i=1  ;i<= size ;i++){
    int temp = arr[i];
  int j=i-1 ;
  while (j>=0 && temp<arr[j]){
    arr[j+1]=arr[j];
    j--;
  }
    arr[j+1]=temp;
}
  for (int i=0;i<= size ;i++){
    cout<<arr[i];
  }
}
     
int main(){
      int size ;
    cout<<" enter an size of an array "<<"\n";
    cin>>size;
    int arr[size];
    cout<<"enter an array element "<<"\n";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
  cout<<" array is ";
  insertionsort(arr,size );
  
}