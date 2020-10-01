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
int s=0;
int e=n-1;
while(s<e){
	
	int sum=arr[s]+arr[e];
	 if(sum<k){
		s++;
	}
	else if(sum>k){
		e--;
	}
	else{
		cout<<arr[s]<<" and "<<arr[e]<<endl;
		s++;
		e--;
	}
	
	}

return 0;
}
/*INPUT :
5 
1 3 4 2 0
5

OUTPUT :
1 and 4
2 and 3

*/