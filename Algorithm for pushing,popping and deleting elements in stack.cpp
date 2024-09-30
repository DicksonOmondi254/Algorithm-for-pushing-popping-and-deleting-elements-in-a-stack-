#include<iostream>
#include<vector>
using namespace std;
class Stack{
	private:
		vector<int>stack;
		public://pushes an element onto the stack
			void push(int value){
				stack.push_back(value);
				cout<<value<<"pushed onto the stack.\n";
			}
			//pops the top element from the stack
			void pop(){
				if(stack.empty()){
					cout<<"Stack is empty,nothing to pop.\n";
				}
				else{
					int value=stack.back();
					stack.pop_back();
					cout<<value<<"popped from the stack.\n";
				}
			} 
			//deletes (clears)all the elements in the stack
			void clear(){
				stack.clear();
				cout<<"All elements deleted,stack is now empty.\n";
			}
			//display the current state of the stack
			void display(){
				if(stack.empty()){
					cout<<"Stack is empty.\n";
				}
				else{
					cout<<"Stack elements(top to bottom):";
					for(int i=stack.size()-1;i>=0;i--){
						cout<<stack[i]<<"";
					}
					cout<<"\n";
				}
			}
};
int main(){
	Stack s;
	int choice,value;
	do{
		cout<<"\n---Stack Operations---\n";
		cout<<"1. push\n2. pop\n3,Delete(Clear Stack)\n4.Display\n5.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter value to push:";
				cin>>value;
				s.push(value);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.clear();
				break;
			case 4:
				s.display();
				break;
			case 5:
				cout<<"Exiting...\n";
				break;
			default:
				cout<<"Invalid choice,please try again.\n";
		}
	}
	while(choice!=5);
	return 0;
}
