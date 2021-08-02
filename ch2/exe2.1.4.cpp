#include<iostream>
#include<vector>
/*Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B. The sum of the two integers should be stored in binary form in an .n C 1/-element array C. State the problem formally and write pseudocode for adding the two integers.*/


void bitAdd(const std::vector<int> &a,const std::vector<int>&b,std::vector<int>&c){
	
	int nextbit=0;
	for(auto i=0;i!=a.size();++i){
		int bithere=a[i]+b[i]+nextbit;
		if(bithere>1){
			nextbit=1;
			c[i]=bithere%2;
		}
		else{
			nextbit=0;
			c[i]=bithere;
		}
	}
	
	c[c.size()-1]=nextbit;



}

int main(){
	std::vector<int>a,b,c;
	std::cout<<"Please enter how long do the bit arrays you need?"<<std::endl;
	int len=0,bitA=0,bitB=0;
	std::cin>>len;
	std::cout<<"Please enter array a and b"<<std::endl;
	std::cin>>bitA>>bitB;
	for(int i=0;i!=len;++i){
		int ele=bitA%10;
		a.push_back(ele);
		ele=bitB%10;
		b.push_back(ele);
		bitA/=10;
		bitB/=10;
		c.push_back(0);
	}
	c.push_back(0);
	//std::cout<<c.size()<<std::endl;
	bitAdd(a,b,c);
	//std::cout<<c.size()<<std::endl;
	for(int i=c.size()-1;i>=0;--i)
		std::cout<<c[i];
	return 0;

}






