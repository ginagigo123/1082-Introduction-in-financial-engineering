#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	float c, r, value = 0, Discount, duration = 0;
	cout<<"�п�J����:";
	cin>>n;
	cout<<"�п�J�Ů�(%):";
	cin>>c; 
	cout<<"�п�J�Q�v:";
	cin>>r;
	for(int i = 1 ; i <= n ; i ++){
		Discount = pow(1+r,-i);
		duration += i*Discount*c*100;
		value += Discount*c*100;
		if( i == n){
			duration += n*100*Discount;
			value += 100*Discount;
	
		}
	}
	duration = duration / value;
	float modified_duration = duration/(1+r);
	// a basis point = 0.01%
	cout<<"��ާQ�v�ܰʤ@��Basis point�� �Ũ�����ܰʡG"<< modified_duration*0.01<<"%";
	cout<<"\nModified Duration:"<<modified_duration<<endl;
	
	return 0;
}

