#include <iostream>
using namespace std;
int main() {
	string str;
	cin>>str;
	int x=0,y=0;
	for(int i=0;i<str.length();i++){
          if(str[i]=='z'){
			  x++;
		  }
		  else if (str[i]=='o'){
			  y++;
		  }
		  else continue;
	}
		  if(2*x==y){
			  cout<<"Yes";
		  }
		  else{
			  cout<<"No";
		  }
	
}