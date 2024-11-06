#include <iostream>
#include <climits> 
#include <vector>

using namespace std;
/*
int main()
{
    int num1;
    int num2;
    double num3;
    
    cout << "Enter the first intiger: ";
    cin >> num1;
    cout << "Enter the secound intiger: ";
    cin >> num2;
    cout << "You entered: " << num1 << " and "<< num2 << endl;
    return 0;
}
*/

/*
int main()
{
    int num1;
    double num2;
    cout << "Introdu un intiger: ";
    cin >> num1;
    cout << "Introdu un double: ";
    cin >> num2;
    cout << "Intigerul este: " << num1 << " iar double este: " << num2 << endl;
    return 0;
}
*/
/*
int main() 
{
    int length {0};
    int width {0};
    
    cout << "Introdu lungimea camerei: ";
    cin >> length;
    cout << "Introdu latimea camerei: ";
    cin >> width;
    cout << "Aria camerei este: " << length * width << endl;
    return 0;
}
*/

/*
int main()
{
    string name;
    int age {0};
    double hourly_wage {23.50};
    
    cin >> name;
    cin >> age;
     return 0;
}
*/







//int main()
//{
//    
///**********************************************
// *  Character type
// * ********************************************/ 
//    
//    char middle_initial {'M'};
//    cout << "My middle initial is: " << middle_initial << endl;
//    
///**********************************************
// *  Intiger type
// * ********************************************/     
//    
//    unsigned short int exam_score {55};
//    cout << "my exam score was: " << exam_score << endl;
//    
//    int countries_represented {65};
//    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
//    
//    long people_in_florida {20610000};
//    cout << "There are about " << people_in_florida << " people in Florida" << endl;
//    
//    long long people_on_earth {7'600'000'000};
//    cout << "There are about " << people_on_earth << " people on earth" << endl;
//    
//    long long distance_to_alpha_centauri {9'461'000'000'000};
//    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
//    
// /**********************************************
// *  Floating point type
// * ********************************************/ 
// 
//    float car_payment {401.23};
//    cout << "My car payment is " << car_payment << endl;
//    
//    double pi {3.14159};
//    cout << "Pi is " << pi << endl;
//    
//    long double large_amount {2.7e120};
//    cout << large_amount << " is a very big number." << endl;
//    
///**********************************************
// *  Boolean type
// * ********************************************/ 
//
//    bool game_over {false};
//    cout << "The value of game over is " << game_over << endl;  
//
///**********************************************
// *  Overflow exemple
// * ********************************************/   
// 
//     short value1 {30000};
//     short value2 {1000};
//     short product {value1 * value2};
//     cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
//     
//    return 0;
//}
//






//int main()
//{
//    cout << "sizeof information" << endl;
//    cout << "==================================" << endl;
//    
//    cout << "char " << sizeof(char) << " bytes." << endl;
//    cout << "int " << sizeof(int) << " bytes." << endl;
//    cout << "unsigned int " << sizeof(unsigned int) << " bytes." << endl;
//    cout << "short " << sizeof(short) << " bytes." << endl;
//    cout << "long " << sizeof(long) << " bytes." << endl;
//    cout << "long long " << sizeof(long long) << " bytes." << endl;
//    
//    cout << "==================================" << endl;
//    
//    cout << "float " << sizeof(float) << " bytes." << endl;
//    cout << "double " << sizeof(double) << " bytes." << endl;
//    cout << "long double " << sizeof(long double) << " bytes." << endl;
//    
//// use values defined in <climits>    
//    
//    cout << "==================================" << endl;
//    cout << "Minimum values: " << endl;
//    
//    cout << "char " << CHAR_MIN << endl;
//    cout << "int " << INT_MIN << endl;
//    cout << "short " << SHRT_MIN << endl;
//    cout << "long " << LONG_MIN << endl;
//    cout << "long long " << LLONG_MIN << endl;
//    
//    cout << "==================================" << endl;
//    cout << "Maximum values: " << endl;
//    
//    cout << "char " << CHAR_MAX << endl;
//    cout << "int " << INT_MAX << endl;
//    cout << "short " << SHRT_MAX << endl;
//    cout << "long " << LONG_MAX << endl;
//    cout << "long long " << LLONG_MAX << endl;
//    
//// use values defined in <climits>
//
//    cout << "==================================" << endl;
//    cout << "sizeof using variable names" << endl;
//    int age {21};
//    cout << "Age is: " << sizeof(age) << " bytes" << endl; 
//// or    
//    cout << "Age is: " << sizeof age << " bytes" << endl;
//    
//    double wage {22.24};
//    cout << "Wage is: " << sizeof(wage) << " bytes" << endl;
//// or    
//    cout << "Wage is: " << sizeof wage << " bytes" << endl;
//    
//    return 0;
//    
//
//}


/*


int main()
{
    cout << "Hello, welcome to Maria's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?" << endl;
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    int estimate_expiry {30}; // days
    
    cout <<"\nEstimate for carpet cleaning service" << endl;
    cout <<"Number of rooms: " << number_of_rooms << endl;
    cout <<"Price per room: $" << price_per_room << endl;
    cout <<"Cost: $" << price_per_room * number_of_rooms << endl;
    cout <<"Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout <<"============================" << endl;
    cout <<"Total estimate: $" << ( price_per_room * number_of_rooms ) + ( price_per_room * number_of_rooms * sales_tax ) << endl;
    cout <<"This estimate is valid for: " << estimate_expiry << " days" << endl;
}

*/



//
//int main()
//{
//    cout << "Bine ati venit la serviciile de curatenie ale Mariei!" << endl;
//    cout << "Introduceti numarul camerelor mici: " << endl;
//    int camere_mici {0};
//    cin >> camere_mici;
//    int camere_mari {0};
//    cout << "Introduceti numarul camerelor mari: " << endl;
//    cin >> camere_mari;
//    
//    const double pretul_camerei_mici {25};
//    const double pretul_camerei_mari {35};
//    const double taxa {0.06};
//    const int valabil {30};
//    
//    cout << "Camere mici: " << camere_mici << endl;
//    cout << "Camere mari: " << camere_mari << endl;
//    cout << "Pretul camerelor mici: " << pretul_camerei_mici << endl;
//    cout << "Pretul camerelor mari: " << pretul_camerei_mari << endl;
//    cout << "Costul: " << (pretul_camerei_mici * camere_mici) + (pretul_camerei_mari * camere_mari) << endl;
//    cout << "Taxe: " << (pretul_camerei_mici * camere_mici) + (pretul_camerei_mari * camere_mari) * taxa << endl;
//    cout << "Costul total: " << ((pretul_camerei_mici * camere_mici) + (pretul_camerei_mari * camere_mari)) + (((pretul_camerei_mici * camere_mici) + (pretul_camerei_mari * camere_mari)) * taxa) << endl;
//    
//    cout << "Aceasta oferta este valabila pentru: " << valabil << endl; 
//    
//    return 0 ; 
//}
//



//
//int main()
//{
//    
//   char vowels[] {'a','e','i','o','u'};
//   cout << "Prima valoare este: " << vowels[0] << endl;
//   cout << "A doua valoare este: " << vowels[4] << endl; 
//   cin >> vowels[4];
//   cout << "Ultima valoare este: " << vowels[4] << endl;
//
//   return 0;  
//
//}

//
//
//int main(){
//    double temperaturi[] {10.5, 4.6, 25.7, 31.2};
//    cout << "Prima temperatura este: " << temperaturi[0] << endl;
//    temperaturi[0] = 33;
//    cout << "Noua temperatura este: " << temperaturi[0] << endl;
//    return 0;
//}



//int main(){
//    int test[5]{};
//    cout << "index 0: " << test[0] << endl;
//    cout << "index 1: " << test[1] << endl;
//    cout << "index 2: " << test[2] << endl;
//    cout << "index 3: " << test[3] << endl;
//    cout << "index 4: " << test[4] << endl;
//    test[2] = 5;
//    cout << "index 2: " << test[2] << endl;
//    
//    return 0;
//}


//int main(){
//    int movie_rating[3][4] = {
//    {0, 1, 2, 3},
//    {4, 5, 6, 7},
//    {8, 9, 10, 11},
//};
//
//    cout << "valoare array: " << movie_rating[2] [2]<< endl;
//    movie_rating[2] [2] = 12;
//    cout << "noua valoare array: " << movie_rating[2] [2]<< endl;
//    return 0;
//}





int main(){
    vector <int> vec {10,20,30,40,50};
    cout << vec.size() << endl;
    vec.at(0) = 100;
    vec.at(4) = 1000;
    
    cout << "\nValorile sunt: " << endl;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(3) << endl;
    cout << vec.at(4) << endl;
    cout << endl;
    return 0;
}

