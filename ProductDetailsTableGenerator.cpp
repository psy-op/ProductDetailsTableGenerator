// ProductDetailsTableGenerator
// TITLE: Product Details Table Generator

#include <iostream>
#include <string>
using namespace std;

// Structure with the three variables we will use in an array
struct product {
    string name;
    int model;
    float price;
};

// Function to print the answers in a table
// According to the number of products the user input
void details(product pro[], int size) {
    cout << "Name\t Model\t Price\n";
    cout << "------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << pro[i].name << "\t" << pro[i].model << "\t" << pro[i].price << "\n";
    }
}

// Function main where we define the variables
// Then a for loop to ask the user for input
// for the products and model and price
// When the user inputs "quit" as the name, it stops the program
// Then we call the function to print the table
int main() {
    product p[10];
    int count = 0;
    string n;

    for (int i = 0; i < 10; i++) {
        cout << "Enter product name: ";
        cin >> n;
        if (n == "quit") {
            break;
        }
        p[i].name = n;
        cout << "Enter product model number: ";
        cin >> p[i].model;
        cout << "Enter product price:";
        cin >> p[i].price;
        count++;
    }
    details(p, count);
    return 0;
}
