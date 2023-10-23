#pragma once


#include<iostream>

using namespace std;

string isGreater(int n, int b) {
	int* p = new int(n);
	int* point = new int(b);
	if (*p > *point) {
		return "The first number is greater than the second one";
	}
	else {
		return "invalid!No conditions met";
	}
}


string isSmaller(int n, int b) {
	int* p = new int(n);
	int* point = new int(b);
	if (*p < *point) {
		return "The first number is smaller than the second one";
	}
	else {
		return "The second number is smaller than the first one";
	}

}
string isEqual(int n, int b) {
	int* p = new int(n);
	int* point = new int(b);
	if (*p == *point) {
		return "Both are equal";
	}
	else {
		return "invalid!No conditions met";
	}


}



/*Question 2*/



int itsMagic(int* ptr) {
	int sum = 0;
	cout << "The Array elements are" << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << endl;
	}

	for (int y = 0; y < 5; y++) {
		if (*(ptr + y) == 10){
		sum += 5;
		 }
		else {
			sum += (*(ptr + y)) / 2;
		}
	}

	return sum;

	}




/*question 3*/
int* splitBig(int* ptr, int n) {

	int* arr2 = new int[n + 1];
	int max = ptr[0];
	int second_max = ptr[0];
	int j = 0;
	for (int i = 0; i < 3; i++) {
		if (ptr[i] > max) {
			max = ptr[i];
			j = i;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (ptr[i] > second_max && ptr[i] < max) {
			second_max = ptr[i];
		}
	}
	for (int i = 0; i < j; i++) {
		arr2[i] = ptr[i];
	}
	arr2[j] = second_max;
	arr2[j + 1] = max - second_max;
	for (int i = j + 2; i < 4; i++) {
		arr2[i] = ptr[i - 1];
	}
	return arr2;
}





	/*Question 4*/


	int findMin(int *ptr){
		int min = ptr[0];
		for (int i = 1; i < 3; i++)
		{
			min = *(ptr + i) < min ? ptr[i] : min;
		}
		cout<<"minimum value is :";
		return min;
	}


	int findMax(int *ptr) {
		int max = 0;
		for (int i = 0; i < 4; i++)
		{
		//	cout << ptr[i] << endl;
			max = (ptr[i] > max) ? ptr[i] : max;
		}
		cout << "maximum value is";
		return max;
	}


