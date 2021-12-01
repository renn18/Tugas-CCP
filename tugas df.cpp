#include <iostream>
#include <conio.h>

using namespace std;

int maksimal = 3;
int topA, topB, topC = 0;
int arrayA[3];
int arrayB[3];
int arrayC[3];

void pushArrayA(int data){
	if (topA >= maksimal){
		cout << "Data Penuh" << endl;
	}else{
		arrayA[topA] = data;
		topA++;
	}
}

void pushArrayB(int data){
	if (topB >= maksimal){
		cout << "Data Penuh" << endl;
	}else{
		arrayB[topB] = data;
		topB++;
	}
}

void pushArrayC(int data){
	if (topC >= maksimal){
		cout << "Data Penuh" << endl;
	}else{
		arrayC[topC] = data;
		topC++;
	}
}


void watermark(string nama, string nim){
	cout << "Nama : " << nama << endl;
	cout << "Nim  : " << nim  << "\n\n" << endl;
}

void displayArray0(){
	cout << "Keadaan Awal" << endl;
	cout << "=================" << endl;
	cout << "Menara A : ";
	for (int i=0; i<topA; i++){
		if(arrayA[i] != 0){
			cout << arrayA[i];
		}
	}
	cout << endl;
	cout << "Menara B : ";
	for (int i=0; i <1; i++){
		if(arrayB[i] == 0){
			cout << "Kosong";
		}
	}
	cout << endl;
	cout << "Menara C : ";
	for (int i=0; i <1; i++){
		if(arrayC[i] == 0){
			cout << "Kosong\n" << endl;
		}
	}
}

void displayArray1(){
	cout << "Step 1" << endl;
	cout << "=================" << endl;
	cout << "Menara A : Kosong";
	cout << endl;
	cout << "Menara B : Kosong ";
	cout << endl;
	cout << "Menara C : ";
	for (int i=0; i<topC; i++){
		if(arrayC[i] != 0){
			cout << arrayC[i];
		}
	}
	cout << endl;
}

void displayArray2(){
	cout << "\nStep 2" << endl;
	cout << "=================" << endl;
	cout << "Menara A : Kosong";
	cout << endl;
	cout << "Menara B : ";
	for(int i =0; i <topB; i++){
		if (arrayB[i] != 0){
			cout << arrayB[i];
		}
	}
	cout << endl;
	cout << "Menara C : Kosong";
}

void destroyArray1(){
	for (int i =0; i<topA; i++){
		arrayA[i] = 0;
	}
	topA = 0;
}

void destroyArray2(){
	for (int i =0; i<topA; i++){
		arrayC[i] = 0;
	}
	topC = 0;
}

int main(){
	watermark("Muhammad Putra Pratama", "200204622034");
	pushArrayA(100);
	pushArrayA(75);
	pushArrayA(50);
	displayArray0();
	destroyArray1();
	pushArrayC(50);
	pushArrayC(75);
	pushArrayC(100);
	displayArray1();
	destroyArray2();
	pushArrayB(100);
	pushArrayB(75);
	pushArrayB(50);
	displayArray2();
	
}
