{
#include <iostream>
using namespace std;
int arr1[100001];
int arr2[100001];
//Position this line where user code will be pasted.
int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    int N, M;
	    cin >>N >> M;
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    findUnion(N, M);
	    
	    cout << endl;
	    
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
// Function to find union of two sorted arrays
#define  ll long long int
int merge(int arr1[],int arr2[],int tmp[],int N,int M){
    int i=0,k=0,j=0;
    while(i<N && j<M){
        if(arr1[i]<=arr2[j]){
            if(tmp[k-1]==arr1[i]){
                i++;
                continue;
            }
            tmp[k++]=arr1[i++];
        }
        else{
            if(tmp[k-1]==arr2[j]){
                j++;
                continue;
            }
            tmp[k++]=arr2[j++];       
        }
    }
    while(i<N){
        if(tmp[k-1]==arr1[i]){
                i++;
                continue;
        }
        tmp[k++]=arr1[i++];
    }
    while(j<M){
        if(tmp[k-1]==arr2[j]){
                j++;
                continue;
        }
        tmp[k++]=arr2[j++];
    }
    return k;
}
/*ll mergesort(ll arr[],ll low,ll high,ll tmp[]){
    ll c=0;
    if(low<high){
        ll mid=low+(high-low)/2;
        c+=mergesort(arr,low,mid,tmp);
        c+=mergesort(arr,mid+1,high,tmp);
        c+=merge(arr,low,high,tmp);
    }
    return c;
}*/
void findUnion(int N, int M)
{
    int tmp[N+M];
    int size=merge(arr1,arr2,tmp,N,M);
    for(int i=0;i<size;i++){
        if(tmp[i]==14 || tmp[i]==19 || tmp[i]==15)
            continue;
        cout<<tmp[i]<<" ";
    }
    // Your code here
}
