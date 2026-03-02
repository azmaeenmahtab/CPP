#include<bits/stdc++.h>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main(){

    int n;

    cin >> n;

    vector<Book> books(n);

    for(int i = 0; i < n; i++){

        string title, author;
        int year;

        cin >> title >> author >> year;

        books[i].title = title;
        books[i].author = author;
        books[i].year = year;
    }

        for(int i = 0; i < n; i++){

        cout << "title " << books[i].title << " author " << books[i].author << " year " <<  books[i].year << endl;

    }
















    return 0;
}

