
// Taking two inputs and comparing the values...

#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	
	cout<<(a<b);
	return 0;
}



// Taking 4 inputs and using (&&), (||) operators../ 
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	cout<<"Enter the value of d:";
	cin>>d;
	cout<<(a<b && c>d);
	return 0;
}



#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	cout<<"Enter the value of d:";
	cin>>d;
	cout<<(a<b || c>d);
	return 0;
}
