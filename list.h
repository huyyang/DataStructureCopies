//list.h
#include <iostream>
#include <cstring>
#include <cctype>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

/* These functions are already written and can be called to test out your code */
void build(node * & head);  //supplied
void display(node * head);  //supplied
void destroy(node * &head); //supplied

/* *****************YOUR TURN! ******************************** */
//Write your function prototype here:
int get_length(node * list);
bool is_selected_before(int position1, int position2);
void get_in_position(int num1, int num2, int index, node *& src, node * pos1, node * pos2);
void swap(int position1, int position2, node *& src);
void randomize(node *& list);
void copy_inorder(node * src, node *& dest);
void copy_randomorder(node * src, node *& dest);

