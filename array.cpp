PRINTING ARRAY WITH THE HELP OF A FUNCTION 
#include <iostream>
using namespace std ; 

void printarray (int arr [] , int size){
  for(int i =0;i<size ; i++){
    cout<<arr[i]<< " "; 
  }
  cout<<endl;
}

int main (){
  int arr[] = {2,3,4,5,6};
  int size = 5;
  printarray(arr, size );
}


// PRINTING LINEAR SEARCH ARRAY WITH THE USE OF ARRAY 
#include <iostream>
using namespace std ; 

bool linearsearch(int arr[] , int size , int target ){
  for(int i=0; i<size ; i++){
    if (arr[i] == target){
      return true ; 
    }
  }
  return false ;
} 

int main (){
  int arr[] = {2,3,4,5,10};
  int size = 5;
  int target =10;
  bool ans = linearsearch(arr , size , target);
  if (ans == 1){
    cout<< "target found "<<endl ;
  }
  else {
    cout<< " target not found "<< endl ; 
  }
}

#include <iostream>
using namespace std ; 

void countzero(int arr[], int size ){
  int zerocount = 0;
  int onecount = 0;

  for(int i =0; i<size ; i++){
    if (arr[i]==0){
      zerocount++;
    }
    if (arr[i]==1){
      onecount++;
    }
  }
  cout<<"zero count is :"<<zerocount<<endl;
  cout<<"one count is :"<<onecount<<endl;
    
}

int main (){
  int arr[]={0,1,1,1,0,0,0,1,1,1};
  int size = 10;
  countzero(arr,size);
}




//NEW HEADER FILE 

#include<limits.h>
#include <iostream>
using namespace std ; 
int main(){
  cout<<INT_MIN<<endl;
  cout<<INT_MAX<<endl;
}



//FIND SMALLEST NUMBER IN A ARRAY 


#include<limits.h>
#include <iostream>
using namespace std ; 



// Min number in a array 
int findmin(int arr[], int size ){
  //ans store karnne ke liye variable create krlo 
  int minAns= INT_MAX; 

  for (int i=0; i<size ; i++)
    {
      if (arr[i]< minAns){
        minAns= arr[i];
      }
    }
  return minAns;
  
}



int main(){
  int arr[]={1,5,9,10,1,56,85,125};
  int size =7;
  int minimun = findmin(arr,size );
  cout<<"minimum number "<<minimun<<endl ;

  
}