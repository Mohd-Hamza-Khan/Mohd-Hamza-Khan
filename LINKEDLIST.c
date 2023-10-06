//----------- $ Learn LINKED LIST $ ------------------
// -------------------- in easy and simple way -------------------------------

// 1. header files
#include<stdio.h> //--------- for input/output ---------------
#include<stdlib.h> //-------- for memory allocation ---------
// 2. structure
struct node
{
    int data;
    struct node *add;
};
// 3. display function
void display(int info){
    struct node *ptr; // define temporary pointer "ptr" for traversing
    while (ptr!=NULL) // checking the condition 
    {
        ptr->data = info; // give integer in the data part of the node
        ptr->add = NULL; // set the address part of the node as NULL
        printf("%d->", ptr->data); // print the data part of the node
        ptr = ptr->add; // increament the pointer 
    }printf("NULL"); // print the NULL at the end of the condition
    
}
// 4. main fucntion
void main(){
    struct node *head; // declare the head pointer 
    head = malloc(sizeof(struct node)); // allocate memory for a node
    display(5); // calling display function give the integer as parameter
}

// ------------------- if you have any query related to this -------------------
// ----------------------------- feel free to ask ------------------------------
// ----------------------- here you can connect with me ------------------------
// ------------------- " @hierror_code " on instagram --------------------------
