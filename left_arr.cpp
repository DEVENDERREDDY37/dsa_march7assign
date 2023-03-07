#include<bits/stdc++.h>
using namespace std;
void R(int arr[],int d,int n)
{
	 int e=1;
    while(e<=d){
        int lt=arr[0];
        for (int i =0; i<n-1;i++) {
            arr[i]=arr[i+1];
        }
        arr[n-1] =lt;
        e++;
    }
}
void pfarray(int arr[],int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int N=sizeof(arr)/sizeof(arr[0]);
	int d;
	cin>>d;
	R(arr,d,N);
	pfarray(arr,N);
	return 0;
	
}