#include <iostream>
#include <vector>

using namespace std;

void displayMin(vector <int> vec);
void displayMax(vector <int> vec);
void displayMean(vector <int> vec);
void displayList(vector <int> vec);
void addNumber(vector <int> &vec);

int main(){

    vector <int> vec {};
    char selection{};

    do{
        cout << '\n';
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n"; 
        cout << "M - Display mean of the numbers\n"; 
        cout << "S - Display the smallest number\n"; 
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n\n";
        cout << "Enter your choice: "; 
        cin >> selection;

        switch (selection){
            case 'p':
            case 'P': displayList(vec); break;

            case 'a':
            case 'A': addNumber(vec); break;

            case 'm':
            case 'M': displayMean(vec); break;

            case 's':
            case 'S': displayMin(vec); break;

            case 'l':
            case 'L': displayMax(vec); break;

            case 'q':
            case 'Q': cout << "Goodbye"; return 0;
        
            default: cout << "\nUnknown selection, please try again"; break;
        } 
    } while(selection != 'q' && selection != 'Q');
}

void displayMin (vector <int> vec){
    
    int len = vec.size();
    if (len == 0){
        cout <<  "Unable to determine the smallest number - list is empty";
        return;
    }

    int min = vec.at(0);

    for(int i {0}; i < len; i++)
        (vec.at(i) < min) ? min = vec.at(i) : true;

    cout <<  "The smallest number is " << min << '\n';
}

void displayMax (vector <int> vec){

    int len = vec.size();
    if (len == 0){
        cout <<  "Unable to determine the largest number - list is empty";
        return;
    }

    int max = vec.at(0);

    for(int i {0}; i < len; i++)
        (vec.at(i) > max) ? max = vec.at(i) : true;

    cout <<  "The largest number is " << max << '\n';
}

void displayMean (vector <int> vec){

    int len = vec.size();
    if (len == 0){
        cout <<  "Unable to calculate the mean - no data";
        return;
    } 

    double sum{};

    for(int i {0}; i < len; i++) sum += vec.at(i);

    cout << sum / len << '\n';
}

void displayList(vector <int> vec){

    if(vec.empty()){
        cout <<  "[] - the list is empty\n";
        return;
    } 

    cout << "[ ";

    for(auto item: vec)
        cout << item << " ";

    cout << "]" << '\n';
}

void addNumber(vector <int> &vec){

    int num_to_add {};
    cout << "Choose an integer to add: ";
    cin >> num_to_add;
    vec.push_back(num_to_add);
    cout << num_to_add << " added\n";
}