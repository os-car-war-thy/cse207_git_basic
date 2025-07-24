#ifndef FACULTY_H
#define FACULTY_H


enum designation{
    LECUTERER,
    SENIOR_LECTURER,
    ASSISTANT_PROFESSOR,
    ASSOCIATE_PROFESSOR,
    PROFESSOR,

};

typedef struct faculty{
    char *name;
} faculty;

void add_faculty();
void remove_faculty();

#endif