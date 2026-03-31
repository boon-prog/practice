#include <stdio.h>
#include <string.h>


int main(){
struct book{
    char title[20];
    char author[20];
    int page;
};

struct book b[]{
    {"C++ Programming", "John Doe", 300},
    {"Data Structures", "Jane Smith", 250},
    {"Algorithms", "Alice Johnson", 400}
}

struct book c[1]{
    strcpy(c[0].title, "ABC");
    strcpy(c[0].author, "XYZ");
    c[0].page=5;)
}

for (int i=0,i<b,i++){
    printf(%s,%s,%d\n,b(i).title,b(i).author,b(i).page);
})
return 0;
}