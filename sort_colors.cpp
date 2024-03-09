#include<bits/stdc++.h>
using namespace std;
// int sortcolor(vector<int>&arr){
//     int zero,one,two;
//     zero=one=two=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         else if(arr[i]==1){
//             one++;
//         }
//         else{
//             two++;
//         }
//     }

//     int i=0;
//     while(zero--){
//         arr[i]=0;
//         i++;
//     }
//     while(one--){
//         arr[i]=1;
//         i++;
//     }
//     while(two--){
//         arr[i]=2;
//         i++;
//     }
// }

int sortcolor(vector<int>&arr){
    int m=0 , l=0,h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++,l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
}

int main(){
    vector<int>arr={0,1,1,1,2,0,0,2,1,1,2,2,2,1,0};
    sortcolor(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}