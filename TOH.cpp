//Tower Of hanoi
#include<iostream>
using namespace std;
void TOH(int,char,char,char);
int main()     // beg=A, Aux=B, End=C
{
	int n;
	cout<<"enter the number of discs  ";
	cin>>n;
		TOH(n,'A','B','C');
	
}
	void TOH(int n,char Beg,char Aux,char End)
	{
		if(n==1)
	{
		cout<<"move disc from "<<Beg<< " to "<<End<<endl;
		return;
	}
		TOH(n-1,Beg,End,Aux);
		cout<<"move disc from "<<Beg<< " to "<< End<<endl;
		TOH(n-1,Aux,Beg,End);
	}
	
