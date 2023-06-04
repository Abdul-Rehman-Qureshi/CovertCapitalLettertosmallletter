#include<iostream>
using namespace std;
char toUpper(int);
char toLower(int);
int main(){
	char character;
	cout<<"Please Enter a Character: ";
	cin>>character;
	int x=character;
	if(x>=97 && x<=122){
	cout<<"You Entered Small Letter: "<<character<<endl;
	cout<<"Letter is Capitalized "<<toUpper(x);
}
	else if(x>=65 && x<=90){
	cout<<"You Entered Capital Letter: "<<character<<endl;
	cout<<"Letter is Small "<<toLower(x);
	}
	else
	cout<<character;
}
char toUpper(int a){
	a=a-32;
	char x=a;
	return a;
}
char toLower(int a){
	a=a+32;
	char x=a;
	return a;
}
