#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int sequentialSearch(vector<int> &data, int query);
int sequentialSearchAll(vector<int> &data, int query);
int binarySearch(vector<int> &data, int query);
int binarySearchRecursive(vector<int> &data, int query);
int hashSearch(vector<int> &data, int query);

int dataLength; bool isManualInput = false;
int MAX_RAND = 100; //SET MAX VALUE FOR TO BE GENERATED IN RANDOM DATA

int main(int argc, char **argv)
{
	srand(time(NULL)); //SEED FOR RANDOM DATA
	
	cout << "How many data?: "; cin >> dataLength;
	
	vector<int> data(dataLength);
	
	cout << "0. Generate Data	1. Manual Input\n"; 
	cin >> isManualInput;
	
	if(isManualInput){
		for(int i = 0; i < dataLength; i++){
			cout << "Data: ";
			cin >> data[i];
		}
	} else { 
		for(int i = 0; i < dataLength; i++){
			data[i] = rand() % MAX_RAND; 
			cout << data[i] << " ";
		}
	}
	cout << endl;
	
	cout << "1. Sequential Search\n"
		 << "2. Sequential Search (Check All)\n"
		 << "3. Binary Search\n"
		 << "4. Binary Search (Recursively)\n"
		 << "5. Hash Table\n";
	
	//ask for user choice, valid input: 1-8
	int q; bool is_qValid = false;
	do {
		cout << "Choose searching method: ";
		cin >> q;
		if(q >= 1 && q <= 5){ 
			is_qValid = true; 
		} else {
			cout << "Invalid input.\n";
		}
	} while(is_qValid == false);
	
	int query = 0, indexResult;
	cout << "Input query: "; cin >> query;
	switch(q){
		case 1:
			indexResult = sequentialSearch(data, query);
			break;
		case 2:
			indexResult = sequentialSearchAll(data, query);
			break;
		case 3:
			indexResult = binarySearch(data, query);
			break;
		case 4:
			indexResult = binarySearchRecursive(data, query);
			break;
		case 5:
			indexResult = hashSearch(data, query);
			break;
		default:
			//nothing
			break;
	}
	
	cout << "Data " << data[indexResult] 
		 << " berada di index " << indexResult
		 << endl;
}

int sequentialSearch(vector<int> &data, int query){
	
}

int sequentialSearchAll(vector<int> &data, int query){
	
}

int binarySearch(vector<int> &data, int query){
	
}

int binarySearchRecursive(vector<int> &data, int query){
	
}

int hashSearch(vector<int> &data, int query){
	
}