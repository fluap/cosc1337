#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct s_playlist{
    string artist, title;
};

void get_user_input(s_playlist (&arr)[10], const int &size); //Dealing with array of objects so pass by reference.
void print_user_playlist(s_playlist (&arr)[10]);
void sort_the_list(s_playlist (&arr)[10], int n);

// void get_user_input(&s_playlist array, int size)
//void display_the_list(s_playlist [], int size);



int main(){
    const int size = 10;
    s_playlist user_playlist[size];

    int n = sizeof(user_playlist) / sizeof(user_playlist[0].artist);

    get_user_input(user_playlist, size);
    //sort_the_list(user_playlist, n);
    //print_user_playlist(user_playlist);
    sort_the_list(user_playlist, 10);
    print_user_playlist(user_playlist);

}

void get_user_input(s_playlist (&arr)[10], const int &x){

    string user_input;

    for (int i = 0; i < x; i++){
        cout << "Enter the Artist's name: ";
        getline(cin, user_input);
        arr[i].artist = user_input;

        cout << "Enter the song Title: ";
        getline(cin, user_input);
        arr[i].title = user_input;
    };
};

void sort_the_list(s_playlist (&arr)[10], int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].artist < arr[minIndex].artist) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
   }

void print_user_playlist(s_playlist (&arr)[10]){
    cout << "User Playlist\n";
    cout << "============================\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i].artist << " | " << arr[i].title << "\n";
    }   
}