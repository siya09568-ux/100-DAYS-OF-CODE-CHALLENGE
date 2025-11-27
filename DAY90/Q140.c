/*Define a struct with enum Gender and print person's gender.*/
#include <stdio.h>
enum Gender { MALE, FEMALE };
struct Person {
    char name[50];
    enum Gender gender;
};
int main(){
    struct Person p = {"Amit", MALE};
    if (p.gender == MALE)
        printf("%s is Male\n", p.name);
    else
        printf("%s is Female\n", p.name);
    return 0;
}
