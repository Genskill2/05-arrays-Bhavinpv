/* Enter your solutions in this file */
#include <stdio.h>
#include<math.h>

int max(int arr[], int n) {
  int maximum=arr[0];
  for(int i=0 ;i<n;i++) {
   if (arr[i] > maximum){
     maximum= arr[i];
     }
    }
    return maximum;
  }

  
  
  int min(int arr[], int n) {
  int minimum=arr[0];
  for(int i=0 ;i<n;i++) {
   if (arr[i] < minimum){
     minimum= arr[i];
     }
    }
    return minimum;
  }
  
  
  
  float average(int arr[], int n) {
  int total=0;
  for(int i=0 ;i<n;i++) {
   total += arr[i];
   }
    float avg;
    avg = (float)total / n ;
    return avg;
  }
    
    
  
  int mode(int arr[], int n) {
  int indx;
  int counts[n];
  for(int i=0 ; i<n ; i++) {
     counts[i] = 0 ;
     }
  int cou=0;  
    for(int i=0; i<n;i++) {
       int x = arr[i];
       cou ++;
       
       for(int j=i+1 ; j<n ; j++) {
           if( arr[j] ==x) {
           cou ++;
           }
           else{
           cou=cou;
         }
            }
   counts[i] =cou;
    }
    int maximum= counts[0];
  for (int indx=0; indx < n; indx++) {
   if (counts[indx] > maximum){
     maximum= counts[indx];
     }
   }
  return arr[indx];
  }
  
  
  
  int factors(int n , int arr[]) {
   int count_1=0;
  int count;
   while(n% 2 == 0) {
   count_1 +=1;
   n=n/2 ;  
   }
   for(int i=0; i<count_1;i++) {
   arr[i] = 2;
   }
   count=count_1;
   for( int i=3 ; i< pow(n,0.5) ; i+2) {
    int count_2=0;
    while(n % i ==0) {
    count_2 +=1;
    n= n/i ;
    }
    
    count += count_2;
    
     for(int j=0; j<count_2;j++) {
   arr[count- count_2+j] = i;
    }
     
   }
   
     if (n > 2) {
        arr[count] = n;
        }

 
    return count;
   }
    
     
