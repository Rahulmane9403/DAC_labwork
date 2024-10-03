#include<iostream> 
using namespace std;
int maxele(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		int max = arr[0];
		if(max<arr[i]){
			max=arr[i];
		}
		return max;
	}
	

}
int main(){
	maxele();
}
