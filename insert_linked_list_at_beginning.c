#include <stdlib.h>
#include <stdio.h>

// inserting a node at the beginning 


// create custom data type node
struct Node {
    int data;
    struct Node* next;
};

// create a global variable pointer to the Node

struct Node* head;

// function definiton for insert and print

void instert(int x);
void print();

// lets implement the functions;

void insert(int x)
{
    // at first allocate the memory for the Node and hold it to a temp variable;
    
   struct Node* temp = malloc(sizeof(struct Node));//allocating memory as the size of the Node then typecasting because it return void;
    
    //dereferencing to access the data
    temp->data = x;//putting x to the data field; 
    temp->next = head;//because this is the first and last node;
    
    head = temp;//inserting at the beginning of the list;
}


void print(){
    struct Node* temp = head;
    printf("List is :");
    
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    
    printf("\n"); 
}


int main()
{
    
    //begin head with a null value;
    // so the list is empty;
    head = NULL;
    
    // now, ask the user for input which we will put on the list
    
    printf("How many numbers you want to put ??\n");
    
    
    int n,x,i;//where, n is total number,x is for loop input,and i is for loop
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        printf("enter the number you like");
        scanf("%d", &x);
        
        // now it's time to enter to list
        insert(x);
        print(x);// now print all the numbers on the list;
        
    }
    
    
    
    
    
    
}