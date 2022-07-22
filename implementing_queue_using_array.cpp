#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int top=-1;
int cnt=0;
int front=0;
int rear=0;
int n=5;
ll a[5];
// implementing stack using array 
void push(int number)
{
	
	a[rear%n]=number;
	rear++;
	cnt++;
}
void pop()
{
	a[front%n]=-1;
	front++;
	cnt--;
}
void  top1()
{
	cout<< a[front%n]<<endl;
}
bool isEmpty()
{
	return cnt==0;
}
void display()
{
	int i;
	for(i=front;i<rear;i++)
	{
		cout<<a[i%n]<<" ";
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
	pop();
	push(5);
	display();
	bool a=isEmpty();
	cout<<a<<endl;

	

	

}
    
    