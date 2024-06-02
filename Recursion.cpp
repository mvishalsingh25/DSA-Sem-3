#include<iostream>
using namespace std;

// void printNumbers(int n){
//     if(n==0){
//         return;
//     }
//     printNumbers(n-1);
// cout<<n<<" "<<endl;
// }
// int main(){
// printNumbers(5);
// return 0;
// }


// #include<iostream>
// using namespace std;
// int printSum(int n,int sum){
//     if(n==1){
//        sum+=n;
//        cout<<sum<<endl;
//     }
//     sum+=n;
    
//   printSum(n-1,sum);
// }
// int main(){
//     int sum=0;
// int ans= printSum(4,sum);
// cout<<ans<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int printfact(int n,int fact){
//     if(n==0){
//        return fact;;
//     }
//    fact*=n;
//    printfact(n-1,fact);
// }
// int main(){
//     int fact=1;
// int ans=printfact(5,fact);
// cout<<ans<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int printFib(int a, int b,int n){
// if(n==0){
//     return 0;
// }
// int c=a+b;
// cout<<c<<" ";
// printFib(b,c,n-1);
// }

// int main(){
// int a=0;
// int b=1;
// int n=7;
// cout<<a<<" "<<b<<" ";
// printFib(a,b,n-2);
// cout<<endl;
// return 0;
// }



// #include<iostream>
// using namespace std;
// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     if(x==0){
//         return 0;
//     }
// int xpown1=pow(x,n-1);
// int xpown=xpown1*x;
// return xpown;
// }
// int main(){
// int ans=pow(2,5);
// cout<<ans<<endl;
// return 0;
// }


#include<iostream>
using namespace std;
// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }

//    if(n%2==0){
//     return pow(x,n/2) * pow(x,n/2);
//    }
//    else{
// return  pow(x,n/2) * pow(x,n/2)*x;
//    }
// }
// int main(){
// int ans=pow(2,10);
// cout<<ans<<endl;
// return 0;
// }

// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }

//    if(n%2==0){
//     int res= pow(x,n/2) ;
//     return res*res;
//    }
//    else{
//     int res= pow(x,n/2) ;
//     return res*res*x;
//    }
// }
// int main(){
// int ans=pow(2,20);
// cout<<ans<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int lb,int ub){
//     for(int i=lb;i<=ub;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// bool binary_Search(int arr[],int lb,int ub,int key){
//     cout<<endl;
//     print(arr,lb,ub);
// if(lb>ub){
//     return false;
// }
// int mid=(lb+ub)/2;
// if(arr[mid]==key){
//     return true;
// }
// if(arr[mid]<key){
//     return binary_Search(arr,mid+1,ub,key);
// }
// else{
//     return binary_Search(arr,lb,mid-1,key);
// }
// }
// int main(){
// int arr[]={2,4,6,10,14,18};
// int n=6;
// int key=18;
// cout<<binary_Search(arr,0,n-1,key);
// return 0;
// }

// #include<iostream>
// using namespace std;

// bool issorted(int arr[],int n){
//     if(n==0||n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         issorted(arr+1,n-1);
//     }
// }

// void binary_Search(int arr[],int lb,int ub,int key){
// if(lb>ub){
//     return;
// }
// int mid=(lb+ub)/2;
// if(arr[mid]==key){
//     cout<<key<<" is found at index "<<mid;
// }
// else if(key<arr[mid]) binary_Search(arr,lb,mid-1,key);
// else binary_Search(arr,mid+1,ub,key);
// }
// int main(){
// int arr[]={1,2,3,6,5};
// int n=sizeof(arr)/sizeof(arr[0]);
// int key=2;
// binary_Search(arr,0,n-1,key);
// return 0;
// }

// #include<iostream>
// using namespace std;
// void reversstring(int i,int j,string &str){
//     cout<<str<<endl;
//     if(i>j){
//     return;
//     }
//    if(str[i]!=str[j]){
//     cout<<"not palindrome"<<endl;
//    }
//    else{
//     reversstring(i+1,j+1,str);
//    } // swap(str[i],str[j]);
//     // i++;
//     // j--;
//     reversstring(i,j,str);
//     return;
// }
// int main(){
// string name="babber";
// reversstring(0,name.length()-1,name);
// cout<<name;
// return 0;
// }


#include<iostream>
using namespace std;
void sortarr(int arr[],int n){
    if(n==0||n==1){
        return;
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]>arr[i+1]){
    //         swap(arr[i],arr[i+1]);
    //     }
    // }

    int min=0;
    for(int i=0;i<n;i++){
   if(arr[min]>arr[i+1]){
    swap(arr[min],arr[1]);
   }
    }
    sortarr(arr+1,n-1);
}
int main(){
int arr[]={1,4,0,3,2};
int n=5;
sortarr(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}