# include<iostream>
# include<climits>
using namespace std;

int secondLargestElement(int *input, int size){
    int max = INT_MIN, secondMax = INT_MIN;
    int num;
    int i = 0;
    while(i < size){
        num = input[i];
        if(num > max) { 
            secondMax = max;
            max = num;
        } 
        else if(num > secondMax && num != max) {
            secondMax = num;
        }
        i++;
    }
    return secondMax;
}

int main() {
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> input[i];
    }
    int secondLargest = secondLargestElement(input, size);
    cout << secondLargest << endl;
    delete[] input;
}

