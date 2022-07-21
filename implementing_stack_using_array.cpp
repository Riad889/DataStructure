#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int top=-1;
ll a[5];
// implementing stack using array 
void push(int number)
{
	top++;
	a[top]=number;
}
void pop()
{
	top--;
}
void  top1()
{
	cout<< a[top]<<endl;
}
bool isEmpty()
{
	return top==-1;
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	pop();
	display();
	top1();
	bool a=isEmpty();
	cout<<a<<endl;

	

	

}
    
    