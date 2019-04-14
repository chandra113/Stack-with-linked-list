// Achmad Kurnia Chandra -- 1817051070

#include <iostream>
#define BATAS_STACK 10
using namespace std;

struct node {
	int data;
	node *next;
};

node *head = NULL;

//class Bool {
	
	//public:
	bool isEmpty (){
		return head == NULL;
	}

	bool isFull (){
		node *asisst;
		int b;
		asisst = head;
	
		while (asisst != NULL){
			b++;
			asisst = asisst->next;
		}		
	return b > BATAS_STACK-1;
	}
	
//};	


class MyStack {
	
	public:
		
	int getTop(){
    	return head->data;
	}
	
    void push(int NewData){
		node *baru;
		baru = new node;
			baru->data = NewData;
			baru->next = head;
			head=baru;
		cout << "Data "<< getTop() <<" disimpan\n";
	}
	
    void pop(){
    	node *erase;
		erase = head;
		cout << endl << "Data "<< erase->data <<" dihapuskan\n";
	    head = head->next;
		delete erase;
    }

};


void printStackList() {
	
	node *asisst = head;
	if (isEmpty()) {
		cout<<"Stack tak berisi"<<endl;
	}
	
	else {
		cout<<"Data dalam stack: "<<endl;
		while (asisst != NULL) {
			cout << asisst->data << endl;
			asisst = asisst->next;
		}
	}
}


int main (){

	int choice, x;
    	char repetition;
    	MyStack s;
    
	do {	
		system ("cls");
		cout <<"===PROGRAM STACK using LINKED LIST===" << endl << endl;
		//s.printStackList();
		printStackList();
		cout << "\nMenu :" << endl;	
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Exit" << endl << endl;
		cout << "Pilih Menu: "; cin >> choice;
		
		switch (choice) {
			case 1:
				if(!isFull()) {
					cout << "Input Angka : ";
					cin >> x;
					s.push(x);
            	}
				else {
					cout << "\nStack Penuh!"<<endl;
				}
				break;
		
			case 2:
				s.pop();
				break;
			
			case 3:
				cout<<"\nThank You!";
				exit(0);
				break;
		
			default:
				cout<<"\n Pilihan Tak Tersedia.\n";		
		}
		cout<<"\n Ingin Melanjutkan? (Y/N)\n";
      	cin >> repetition;
	} 
	
	while (repetition=='y' || repetition=='Y');
   
    return 0;
    
}
