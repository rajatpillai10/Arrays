	#include<iostream>
#include<cstring>
	using namespace std;
	int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char ch[1000],maxChar;
	cin>>ch;
	int n=strlen(ch);
	int freq[256]={0},max=0;

	for(int i=0;i<n;i++)
	{
	freq[ch[i]]++;
	if(freq[ch[i]]>max){
		max=freq[ch[i]];
		maxChar=ch[i];
	}

	}
	cout<<maxChar;
}
	


	/*
	INPUT:
	HELLO	
   
	OUTPUT:
	L

	*/