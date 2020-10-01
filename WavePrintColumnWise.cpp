#include<iostream>
using namespace std;

void WavePrint(int arr[][50],int n ,int m)
{
	for(int j=0;j<m;j++){
		
		if(j%2==0){
			for(int i=0;i<n;i++){
	cout<<arr[i][j]<<" ,";			
	}
		
		}
		else
		{
			for(int i=n-1;i>=0;i--){
		cout<<arr[i][j]<<" ,";		
			}
		
		}
		}
	}

	

int main(){
freopen("input.txt","r", stdin) ;
freopen("output.txt","w", stdout) ;
 int n,m;
 cin>>n;
 cin>>m;
int arr[50][50];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>arr[i][j];
	}
	
}
 WavePrint(arr,n,m);
return 0;
}
/*INPUT :
4 4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16

OUTPUT :
1 ,5 ,9 ,13 ,14 ,10 ,6 ,2 ,3 ,7 ,11 ,15 ,16 ,12 ,8 ,4 ,
*/