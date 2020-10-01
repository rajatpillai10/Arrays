	#include<iostream>
	using namespace std;

	void SumOfArrays(int a[],int n,int b[],int m){
	int j=n-1,i=m-1,k=n-1,carry=0,sum=0;
	int ans[n];

	while(i>=0){
	sum=a[j]+b[i]+carry;
	ans[k]=(sum % 10);
	carry=sum/10;
	j--;
	k--;
	i--;
	}
	while(j>=0){
	sum=a[j]+carry;
	ans[k]=sum%10;
	carry=sum/10;
	k--;
	j--;
	}
	if(carry!=0)
	cout<<carry<<", ";

	for(int i=0;i<=n-1;i++){
	cout<<ans[i]<<", ";
	}
	cout<<"END";
	}

	int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m;
	int a[1000],b[1000];
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
	cin>>b[i];
	}
	if(n>=m)
	SumOfArrays(a,n,b,m);
	else
	SumOfArrays(b,m,a,n);
	return 0;
	}

	/*
	INPUT:
	1
	1 0 2 9
	5
	3 4 5 6 7

	OUTPUT:
	3,5,5,9,6,END

	*/