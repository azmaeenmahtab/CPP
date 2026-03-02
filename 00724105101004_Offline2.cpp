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
    cin.ignore();

    vector<Book> books(n);

    for(int i = 0; i < n; i++){

        string title, author;
        int year;

        getline(cin, title);
        getline(cin, author);
        cin >> year;

        cin.ignore();

        books[i].title = title;
        books[i].author = author;
        books[i].year = year;
    }

    for(int i = 0; i < n-1; i++){

        int bigIdx = i;

        for(int j = i + 1; j < n; j++){

            if(books[j].year > books[bigIdx].year){

                bigIdx = j;
            }
            else if(books[j].year == books[bigIdx].year && books[j].author != books[bigIdx].author){
                
                 if(books[j].author < books[bigIdx].author){

                    bigIdx = j;

                 }

            }
            else if(books[j].year == books[bigIdx].year && books[j].author == books[bigIdx].author){

                    if(books[j].title < books[bigIdx].title){

                        bigIdx = j;
                    }
                
            }
        }
        
 
            swap(books[i], books[bigIdx]);
        
    }

    for(int i = 0; i < n; i++){

        cout << books[i].title << ", " << books[i].author << ", " <<  books[i].year << endl;

    }

    return 0;
    
}


