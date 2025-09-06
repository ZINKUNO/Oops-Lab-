#include <iostream>
#include <climits>
using namespace std;

void processMarks(int **arr, int rows, int *cols) {
    int overallMax = INT_MIN; 
    
    for (int i = 0; i < rows; i++) {
        int max = INT_MIN;
        cout << "\nEnter marks for Class " << i+1 << " (" << *(cols+i) << " students):" << endl;
        
        for (int j = 0; j < *(cols+i); j++) {
            cout << "Student " << j+1 << ": ";
            cin >> *(*(arr+i) + j);   
            
            if (*(*(arr+i) + j) > max)
                max = *(*(arr+i) + j);
        }
        
        cout << "Maximum marks in Class " << i+1 << ": " << max << endl;
        if (max > overallMax)
            overallMax = max;
    }
    
    cout << "\nOverall maximum marks: " << overallMax << endl;
}

int main() {
    int rows = 3; 
    int cols[3] = {5, 3, 7}; 
    
    
    int **classes = new int*[rows];
    for (int i = 0; i < rows; i++) {
        *(classes+i) = new int[*(cols+i)];  
    }
    

    processMarks(classes, rows, cols);
    

    for (int i = 0; i < rows; i++) {
        delete[] *(classes+i);  
    }
    delete[] classes;
    
    return 0;
}
