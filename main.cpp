#include "Book.h"
#include <iostream>

int main() {
    Book library[5];

    library[0].setBookDetails("1984", "George Orwell", "111", true, "01-01-2020");
    library[1].setBookDetails("Brave New World", "Aldous Huxley", "222", true, "02-01-2020");
    library[2].setBookDetails("The Hobbit", "J.R.R. Tolkien", "333", true, "03-01-2020");
    library[3].setBookDetails("Dune", "Frank Herbert", "444", true, "04-01-2020");
    library[4].setBookDetails("Fahrenheit 451", "Ray Bradbury", "555", true, "05-01-2020");

    std::string inputISBN;

    while (true) {
        std::cout << "\nEnter ISBN to borrow (0 to exit): ";
        std::cin >> inputISBN;

        if (inputISBN == "0") break;

        bool found = false;

        for (int i = 0; i < 5; i++) {
            if (library[i].getISBN() == inputISBN) {
                found = true;
                if (library[i].isAvailable()) {
                    library[i].borrowBook();
                } else {
                    std::cout << "Book is unavailable.\n";
                }
                break;
            }
        }

        if (!found) {
            std::cout << "Book not found.\n";
        }
    }

    return 0;
}
