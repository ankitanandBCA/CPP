#include <iostream>
using namespace std;

// Define the Book class
class Book {
private:
    string title;
    string author;
    int year;

public:
    // Method to input book details
    void input() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter year of publication: ";
        cin >> year;
        cin.ignore(); // to clear newline character from input buffer
    }

    // Method to display book details
    void display() const {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};

int main() {
    int n;

    cout << "How many books do you want to enter? ";
    cin >> n;
    cin.ignore(); // clear newline from input buffer

    Book books[n]; // Create array of Book objects

    // Input details for each book
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].input();
    }

    // Display details of all books
    cout << "\n--- Book Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ": ";
        books[i].display();
    }

    return 0;
}
