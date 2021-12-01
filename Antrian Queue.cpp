#include <iostream>
#include <conio.h>

using namespace std;

class Linked_list_Queue
{
	private:
	struct node{
		int data;
		node *next;
		};
		
		node *rear;
		node *entry;
		node *print;
		node *front;
		
		public:
			Linked_list_Queue();
		
		void Delete();
		void Insert();
		void print_list();
		void show_working();	
	};
	Linked_list_Queue::Linked_list_Queue(){
		rear=NULL;
		front=NULL;
	}
	
void Linked_list_Queue::Insert(){
	int num;
		
	cout << "\n\n\n\n\tMasukkan angka dalam queue : ";
	cin >> num;
		
	entry= new node;
		
	if (rear==NULL){
		entry->data=num;
		entry->next=NULL;
		rear=entry;
		front=rear;
	}else{
		entry->data=num;
		entry->next=NULL;
		rear->next=entry;
		rear=entry;
	}cout << "\n\n\t *** " << num << " sudah masuk dalam queue." << endl;
	cout << "\n\n\n\t\t Press any key to return Menu";
	
	getch();
}
	
void Linked_list_Queue::print_list(){
	print=front;
	
	if (print != NULL){
	cout << "\n\n\n\n\n\t Angka-angka yang ada dalam queue adalah : \n"<< endl;
	}else{
		cout << "\n\n\n\n\n\t *** Tidak ada yang ditampilkan. " << endl;
	}
	while (print!=NULL){
		cout << "\t" << print->data << endl;
		
		print = print->next;
	}
	cout << "\n\n\n\t\t Press any key to return Menu. ";
	getch();
}
	
void gotoxy(int x, int y);
	
void Linked_list_Queue::show_working(){
	char Key=NULL;
	do{
			
			
		gotoxy(5,5);
		cout << "Implementation of Linked List as a Queue" << endl;
			
		gotoxy(10,8);
		cout << "pilih salah satu menu :" << endl;
			
			gotoxy(15,10);
			cout << "- Press \ 'I\' to Masukkan data dalam Queue" << endl;
				
			gotoxy(15,12);
			cout << "- Press \ 'D\' to Hapus data dari Queue" << endl;
				
			gotoxy(15,14);
			cout << "- Press \ 'P\' to Tampilkan data dari Queue" << endl;
				
			gotoxy(15,16);
			cout << "- Press \ 'E\' to Exit" << endl;
				
			Input:
					
				gotoxy(10,20);
				cout << "                       ";
					
				gotoxy(10,20);
				cout << "Masukkan Pilihan : ";
					
				Key=getche();
					
				if(int (Key)==27 || Key == 'e' || Key == 'E'){
					break;
				}else if(Key == 'i' || Key == 'I'){
					Insert();
				}else if(Key == 'd' || Key == 'D'){
					Delete();
				}else if(Key == 'p' || Key == 'P'){
					print_list();
				}else{
					goto Input;
				}
		while(1);
	}
}

int main()
{
	Linked_list_Queue  obj;
	obj.show_working()
	return 0;
}
