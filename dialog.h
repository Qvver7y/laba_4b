#ifndef DIALOG_H
#define DIALOG_H

typedef struct Knot Knot;
typedef struct Info Info;


char* enter_str();
int getInt(int* a);
int dialog(char** key, char** inf1, char** inf2, int* what, char** key2);
void print_tree(Knot* knot1, int i);
void check_ans(int res, Knot* help);
void entee_file(Knot** knot1);
void obhod_deep(Knot* knot1);
void show_tree(Knot* knot1);
int D_Timing();
void print_tree_mod(Knot* knot1, int i);

#endif