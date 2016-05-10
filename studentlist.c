/**********************************************************************
48430 Embedded C - Assignment 2
Name: Michael Codner
Student ID: 11989668
Date of submission:
A brief statement on what you could achieve (less than 50 words):


A brief statement on what you could NOT achieve (less than 50 words):


**********************************************************************/

/**********************************************************************
List of header files - you may use any standard C libraries.
List preprocessing directives - you may define your own.
List structs - you may define struct date and struct student only.
**********************************************************************/
#include <stdlib.h>
#include <stdio.h>

/* Maximum number of students in the class */
#define MAX_CLASS_SIZE 5
/* Maximum length of the string - student name. Note that all strings
in C are NULL terminated i.e. '\0' at the end of the string. Hence the
length of the actual name can be 10 characters at most*/
#define MAX_NAME_SIZE 11
/* Static file name of the text file where student list is stored */
#define DB_FILE_NAME "database"


/* struct date - contains
	day - unsigned integer between 1 and 31 (inclusive)
	month - unsigned integer between 1 and 12
	year - unsigned integer between 1800 and 2016
Note: do not worry about some months not having dates 29-31. That means
30-02-1900 is a real date, although the month of Feb does not have a
day30.
*/
struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[MAX_NAME_SIZE];
    float gpa;
    struct date birthday;
};

typedef struct student student_t;

/**********************************************************************
Function prototypes - do NOT change the given prototypes. However you
may define your own functions if required.
**********************************************************************/
void printmenu(void);

void addStudent(student_t[], int*);
void deleteLastStudent(student_t[], int*);
void displayList(student_t[], int*);
void save(student_t[], int*);
void read(student_t[], int*);

/**********************************************************************
Main
**********************************************************************/
int main(void) {
    student_t studentlist[MAX_CLASS_SIZE];
    int listSize = 0;
    char choice;
    do {
        printmenu();
        scanf(" %c", &choice);
        switch (choice){
            case '1':
                addStudent(studentlist, &listSize);
                break;
            case '2':
                deleteLastStudent(studentlist, &listSize);
                break;
            case '3':
                displayList(studentlist, &listSize);
                break;
            case '4':
                save(studentlist, &listSize);
                break;
            case '5':
                read(studentlist, &listSize);
                break;
            case '6':
                exit(0);
            default:
                printf("Invalid choice.");
                break;
        }
    }
    while (choice != '6');
    return 1;
}

/**********************************************************************
Print 2 empty lines followed by the choices menu.
**********************************************************************/
void printmenu(void) {
    printf("\n\n"
                   "1. add student\n"
                   "2. delete last student\n"
                   "3. display student list\n"
                   "4. save the student list to the database\n"
                   "5. read the student list from the database\n"
                   "6. exit the program\n");
}

void addStudent(student_t list[], int* listSize) {

}

void deleteLastStudent(student_t list[], int* listSize) {

}

void displayList(student_t list[], int* listSize) {

}
void save(student_t list[], int* listSize) {

}

void read(student_t list[], int* listSize) {

}