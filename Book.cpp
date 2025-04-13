#include "Book.h"
#include <iostream>

Book::Book() {
    title = "";
    author = "";
    ISBN = "";
    available = true;
    dateAdd = "";
}

void Book::setBookDetails(std::string t, std::string a, std::string i, bool av, std::string d) {
    title = t;
    author = a;
    ISBN = i;
    available = av;
    dateAdd = d;
}

void Book::displayBookDetails() const {
    std::cout << "Title: " << title << "\nAuthor: " << author
              << "\nISBN: " << ISBN
              << "\nAvailable: " << (available ? "Yes" : "No")
              << "\nDate Added: " << dateAdd << "\n";
}

void Book::borrowBook() {
    if (available) {
        available = false;
        std::cout << "Book borrowed successfully.\n";
    } else {
        std::cout << "Book is currently unavailable.\n";
    }
}

void Book::returnBook() {
    available = true;
    std::cout << "Book returned successfully.\n";
}

std::string Book::getISBN() const {
    return ISBN;
}

bool Book::isAvailable() const {
    return available;
}
