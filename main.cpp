#include <iostream>
#include <string.h>
#include <assert.h>

using namespace std;


char * reverse_return(const char * c){
    if(!c)
        return NULL;
    size_t length = strlen(c);
    char * rev_c= new char[length + 1];
    char * rec_c_end = rev_c;
    const char * end_p = c + length - 1;

    while (end_p >= c){
        *rec_c_end++ = *end_p--;
    }
    *rec_c_end = '\0';
    return rev_c;
}
void reverse(const char * c){
    size_t length = strlen(c);
    const char * end_p = c + length - 1;
    while (end_p >= c){
        cout << *end_p--;
    }
    cout << std::endl << "End" << std::endl;
}

int main() {
    const char * c =  "Hello, World!";
    std::cout << c << std::endl;
    reverse(c);


    char * rev_c  = reverse_return(c);
    assert(rev_c != nullptr);

    cout << rev_c << endl;

    delete[] rev_c;
    return 0;
}

