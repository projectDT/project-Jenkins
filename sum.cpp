#include<iostream>
using namespace std;
int main()
{
	int n = 5,sum=0;
	cout<<"Number of terms to add -> "<<n;
	int arr[n];
	cout<<"\nThose Numbers are :- "<<endl<<"100"<<endl<<"200"<<endl<<"300"<<endl<<"400"<<endl<<"500";
	arr[0] = 100; arr[1] = 200; arr[2] = 300;
    arr[3] = 400; arr[4] = 500;
	
	for(int i=0;i<n;i++)
		sum+=arr[i];
	
	cout<<"\nTotal Sum is = "<<sum;
    cout<<"\n\n\n\nProgram ends here ........"<<"\n\n";

	return 0;
}
