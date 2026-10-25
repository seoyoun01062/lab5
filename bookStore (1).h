#pragma once
#include "book.h"
namespace jangseoyeon2649035
{
    class bookStore
    {
    //private: 맴버 변수 선언 : book형 객체,bool 멤버변수1개
        book b;
        bool available;
    public:
        bookStore(int d = 1, int p = 0, bool a = false): b(d, p), available(a) {}

        //bookStore(book b0 =book(1,0), bool a0 = false)
        //    : b{b0},available{a0}{}
           // bookStore(int d=1, int p =0, bool a=false):b{d,p},available{a}{}
        void print() const //bookStore::print()
        {
            b.print();
            if(available) std::cout << "available\n";
            else std::cout << "not available\n";
        }
        const book& getBook() const { return b;}
        void setBook(const book& b0){b=b0;}
    };
}