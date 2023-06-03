#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

vector<Book> library;

void addBook() {
    Book book;
    cout << "Enter book title: ";
    getline(cin.ignore(), book.title);
    cout << "Enter book author: ";
    getline(cin, book.author);
    cout << "Enter publication year: ";
    cin >> book.year;

    library.push_back(book);
    cout << "Book added successfully!" << endl;
}

void displayBooks() {
    if (library.empty()) {
        cout << "The library is empty." << endl;
    } else {
        cout << "Library books:" << endl;
        for (const Book& book : library) {
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Year: " << book.year << endl;
            cout << "-------------------" << endl;
        }
    }
}

void searchBook() {
    string title;
    cout << "Enter book title to search: ";
    getline(cin.ignore(), title);

    vector<Book> foundBooks;
    for (const Book& book : library) {
        if (book.title == title) {
            foundBooks.push_back(book);
        }
    }

    if (foundBooks.empty()) {
        cout << "Book not found." << endl;
    } else {
        cout << "Found books:" << endl;
        for (const Book& book : foundBooks) {
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Year: " << book.year << endl;
            cout << "-------------------" << endl;
        }
    }
}

int main() {
    int choice;

    do {
        cout << "Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                cin.ignore();
                searchBook();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
