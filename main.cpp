#include "list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display(head);


    display(head); //redisplay the list after your function
    destroy(head); 
    return 0;
}
