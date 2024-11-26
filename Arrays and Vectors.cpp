#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    int arr [10] {0};
    cout << "First element of the array is: " << arr [0]  <<endl;
    arr [0] = 100;
    cout << "First element of the array is: " << arr [0]  <<endl;
    cout << "The last element of the array is: " << arr [9] << endl;
    arr [9] = 1000;
    cout << "The last elemnt of the array is: " << arr [9] << endl;
    cout << "All elements of the array are: " << endl;
    for (int i=0; i<10; i++){            // i reprezinta indexul curent de la 0 la 9 
        cout << arr[i] << " ";           // ciclul for itereaza prin fiecare elemnt al array-ului
    }                                    // << " " <- separat prin spatii
    return 0;
}



//VECTORS

//Declaring : vector <char> vowels (5);   vector <int> test_scores (10); 
//Initializing : vector <char> {'a', 'e', 'i', 'o','u'}; vector <int> test_scores {100,98,89,85,93}; vector <double> hi_temperatures (365, 80.0);
//Accessing vector elements : test_scores.at(1)
//Changing the contents of vector elements : test_scores.at(0) = 90;
//Grow : vector <int> test_scores {100,95,99}; test_scores.push_back(80);



int main(){
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector <int> test_scores {100,98,89};
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are: " << test_scores.size() << " scores in the vector" << endl;
    cout << "Enter 3 test scores:";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    cout << "Updated test scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "Enter a test score to add to the vector: ";

    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "Enter one more test score to add to the vector: ";
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    cout << "Test scores are now: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are now: " << test_scores.size() << " scores in the vector" << endl;


//Declare a vector of integers named vec  and initialize the vector to 10,20,30,40, and 50 
//Modify the first element of the vector to be 100  and modify the last element of the vector to be 1000 .
//The final vector should then be 100, 20, 30, 40, and 1000.
    
    vector <int> vec {10,20,30,40,50};
    vec.at(0)=100;
    vec.at(4)=1000;
    cout << "Valorile modificate sunt: " << endl;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(3) << endl;
    cout << vec.at(4) << endl;


    return 0;
}


int main(){
    vector <int> vector1;
    vector <int> vector2;
    int valoarea_1_de_adaugat;
    int valoare_2_de_adaugat;
    cout << "Prima valoare de adaugat la vector1 este: " << endl;
    cin >> valoarea_1_de_adaugat;
    vector1.push_back(valoarea_1_de_adaugat);
    cout << "A doua valoare de adaugat la vector1 este: " << endl;
    cin >> valoare_2_de_adaugat;
    vector1.push_back(valoare_2_de_adaugat);
    cout << "Valorile vectorului 1 sunt:" << endl;
    cout << vector1.at(0) << " ";
    cout << vector1.at(1);
    cout << "\nsunt " << vector1.size() << " valori in vectorul1" << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Valorile vectorului 2 sunt:" << endl;
    cout << vector2.at(0) << " ";
    cout << vector2.at(1);
    cout << "\nsunt " << vector2.size() << " valori in vectorul2" << endl;

    vector<vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << "Vector2d:" << endl;
    cout << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "Elementele vectorului 2d: " << endl;
    cout << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;

    cout << "Elementele vectorului1 sunt: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
     


    return 0;
}