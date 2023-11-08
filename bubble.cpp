#include<iostream>
using namespace std ;
void bubblesort(int arr[],int size ){
    for(int i=0;i<=size -1;i++){
        for( int j=0;j<=size-i- 1 ;j++){
         if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
}

        }
    }
    for(int k=0;k<=size;k++){
        cout<<arr[k];
    }
}
int main(){
      int size ;
    cout<<" enetr an size of an array "<<"\n";
    cin>>size;
    int arr[size];
    cout<<"enetr an array element "<<"\n";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"sorted array is "<<"\n";
     bubblesort(arr,size );

}