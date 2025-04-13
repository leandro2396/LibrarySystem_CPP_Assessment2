#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool available;
    std::string dateAdd;

public:
    Book();
    void setBookDetails(std::string, std::string, std::string, bool, std::string);
    void displayBookDetails() const;
    void borrowBook();
    void returnBook();
    std::string getISBN() const;
    bool isAvailable() const;
};

#endif
