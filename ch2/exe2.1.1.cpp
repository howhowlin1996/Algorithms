#include<iostream>
/*Using Figure 2.2 as a model, illustrate the operation of INSERTION-SORT on the array A <31; 41; 59; 26; 41; 58>.*/
/*Rewrite the INSERTION-SORT procedure to sort into nonincreasing instead of nondecreasing
order.*/


void InsertionSort_increasing(int a[],int size){
	for(int i=0;i!=size;++i){
		int key =a[i];
		int j=i-1;
		
		while(j>=0&&key<a[j]){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
	}
	

}

void InsertionSort_decreasing(int a[],int size){
	for(int i=0;i!=size;++i){
		int key =a[i];
		int j=i-1;
		
		while(j>=0&&key>a[j]){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=key;
	}
	

}



int main(){
	int a[]={31,41,59,26,41,58};
	InsertionSort_increasing(a,6);
	for(int i=0;i!=6;++i)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
	InsertionSort_decreasing(a,6);
	for(int i=0;i!=6;++i)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;


}
