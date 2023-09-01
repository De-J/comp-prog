#include <iostream>
#include <cstring>

using namespace std;

char* moveToFront(char str[], int n) {
    int count=0;
    char words[n];
    for (int i=0, j=0; i<n; i++) {
        if (int(str[i])==32) count++; 
        else    words[j++]=str[i];
    }
    for (int i=0; i<count; i++) str[i]=' ';
    int i=count, j=0;
    while(i<n)  str[i++]=words[j++];
    return str;
}

int main() {
    char str[]={"geeks for geeks"};
    cout << moveToFront(str, strlen(str));
}
