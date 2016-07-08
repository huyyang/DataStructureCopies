//
// Created by Iman Bilal on 7/1/16.
//

#include "list.h"

void copy_inorder(node * src, node *& dest){
    if(!src)
        return;
    dest = new node();
    dest -> data = src -> data;
    dest -> next = NULL;
    copy_inorder(src -> next, dest -> next);

}


void copy_randomorder(node * src, node *& dest){
    if(!src)
        return;
    copy_inorder(src, dest);
    randomize(dest);
}


int get_length(node * src){
    if(!src)
        return 0;
    return 1 + get_length(src->next);
}


void randomize(node *& src){
    if(!src)
        return;
    int list_length = get_length(src);
    if(list_length < 3){
        if(list_length == 1)
            return;
        int placeholder = src -> data;
        src -> data = src -> next -> data;
        src -> next -> data = placeholder;
        return;
    }
    time_t clock = time(0);
    srand(clock);
    int random = rand() % 100;
    int position1 = 0;
    int position2 = 0;

    for(int i = 0; i < random; ++i){
        position1 = rand() % list_length;
        do {
            position2 = rand() % list_length;
        } while (position2 == position1);
        swap(position1, position2, src);
    }
}

void swap(int position1, int position2, node *& src){
    int index = 0;
    node * ptr_pos_1 = NULL;
    node * ptr_pos_2 = NULL;
    get_in_position(position1, position2, index, src, ptr_pos_1, ptr_pos_2);
    int placeholder = ptr_pos_1 -> data;
    ptr_pos_1 -> data = ptr_pos_2 -> data;
    ptr_pos_2 -> data = placeholder;
}


void get_in_position (int position1, int position2, int index, node *& dest, node *& ptr_pos_1, node *& ptr_pos_2){
    if(!dest)
        return;
    if(position1 == index)
        ptr_pos_1 = dest;
    else if(position2 == index)
        ptr_pos_2 = dest;
    get_in_position(position1, position2, ++index, dest->next, ptr_pos_1, ptr_pos_2);
}
