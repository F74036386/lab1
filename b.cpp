#include<iostream>

using namespace std;
int main (){
	int i=0;
	int k=0;

	cout<<"please input the number n"<<endl;
	cin>>i;

	while(i!=1){

		if(i==1)break;
		if((i%2)==1){
			i=(3*i+1);

		}
		else{
			i=i/2;
		}
		cout<<i<<endl;
	}
	return 0;
}


