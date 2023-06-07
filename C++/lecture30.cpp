#include <iostream>
using namespace std;

//OOPS example
// class Car {
//   private:
//     string brand;
//     string model;
//     int year;

//   public:
//     // Constructor
//     Car(string b, string m, int y) {
//       brand = b;
//       model = m;
//       year = y;
//     }

//     // Method to display car information
//     void displayInfo() {
//       cout << "Brand: " << brand << endl;
//       cout << "Model: " << model << endl;
//       cout << "Year: " << year << endl;
//     }
// };

// int main() {
//   // Create car objects
//   Car car1("Toyota", "Camry", 2020);
//   Car car2("Honda", "Accord", 2019);

//   // Display car information
//   cout << "Car 1 Information:\n";
//   car1.displayInfo();
//   cout << endl;

//   cout << "Car 2 Information:\n";
//   car2.displayInfo();
//   cout << endl;

//   return 0;
// }


//Real world problem with OOPS
// #include <string>
// #include <vector>


// // Book class
// class Book {
// private:
//     string title;
//     string author;
//     bool isAvailable;

// public:
//     Book(string t, string a) {
//         title = t;
//         author = a;
//         isAvailable = true;
//     }

//     string getTitle() {
//         return title;
//     }

//     string getAuthor() {
//         return author;
//     }

//     bool getAvailability() {
//         return isAvailable;
//     }

//     void borrowBook() {
//         if (isAvailable) {
//             isAvailable = false;
//             cout << "Book '" << title << "' by " << author << " has been borrowed.\n";
//         } else {
//             cout << "Book is not available for borrowing.\n";
//         }
//     }

//     void returnBook() {
//         if (!isAvailable) {
//             isAvailable = true;
//             cout << "Book '" << title << "' by " << author << " has been returned.\n";
//         } else {
//             cout << "Invalid operation. Book was already available.\n";
//         }
//     }
// };

// // LibraryMember class
// class LibraryMember {
// private:
//     string name;
//     vector<Book*> borrowedBooks;

// public:
//     LibraryMember(string n) {
//         name = n;
//     }

//     string getName() {
//         return name;
//     }

//     void borrow(Book* book) {
//         if (book->getAvailability()) {
//             book->borrowBook();
//             borrowedBooks.push_back(book);
//         } else {
//             cout << "Book is not available for borrowing.\n";
//         }
//     }

//     void returnBook(Book* book) {
//         bool found = false;
//         for (size_t i = 0; i < borrowedBooks.size(); i++) {
//             if (borrowedBooks[i] == book) {
//                 found = true;
//                 borrowedBooks.erase(borrowedBooks.begin() + i);
//                 break;
//             }
//         }

//         if (found) {
//             book->returnBook();
//         } else {
//             cout << "You have not borrowed this book.\n";
//         }
//     }
// };

// int main() {
//     // Create books
//     Book book1("The Great Gatsby", "F. Scott Fitzgerald");
//     Book book2("To Kill a Mockingbird", "Harper Lee");

//     // Create library members
//     LibraryMember member1("John");
//     LibraryMember member2("Emily");

//     // Perform library operations
//     member1.borrow(&book1);
//     member2.borrow(&book2);
//     member1.returnBook(&book1);
//     member2.returnBook(&book1);

//     return 0;
// }


//Linked List implementation
// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at the beginning of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    // Create a linked list
    LinkedList myList;

    // Insert elements
    myList.insert(5);
    myList.insert(10);
    myList.insert(15);
    myList.insert(20);

    // Display the linked list
    myList.display();

    return 0;
}
