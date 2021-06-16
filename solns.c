/* Enter your solutions in this file */
#include <stdio.h>

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
  int count=0;
   while (n !=1) {
        for (int i =2; i<=n ; i++){
           if (n%i ==0) {
               arr[count] = i;
                count++;
                n = n/i;
                break;
            }
       }
  }
  return count;
  }
  



