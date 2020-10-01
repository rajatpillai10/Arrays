#include<iostream>
#include<algorithm>
using namespace std;	

int main(){
freopen("input.txt","r", stdin) ;
freopen("output.txt","w", stdout) ;
 int n,m,k,arr[1000];
 cin>>n;
 for(int i=0;i<n;i++){
		cin>>arr[i];
}
cin>>k;
sort(arr,arr+n);
for(int i=0;i<n-2;i++){
int s=i+1;
int e=n-1;
while(s<e){
	
	int sum=arr[s]+arr[e]+arr[i];
	 if(sum<k){
		s++;
	}
	else if(sum>k){
		e--;
	}
	else{
		cout<<arr[i]<<" , "<<arr[s]<<" and "<<arr[e]<<endl;
		s++;
		e--;
	}
	}
	}

return 0;
}
/*INPUT :
9
5 7 9 1 2 4 6 8 3 
10

OUTPUT :
1 , 2 and 7
1 , 3 and 6
1 , 4 and 5
2 , 3 and 5

*/