#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct node{
    char character;
    struct node *next;
}Node;

void push(Node **head, char character){
    Node *tmp =(Node*)malloc(sizeof(Node));
    tmp -> character = character;
    tmp -> next = (*head);
    (*head) = tmp;
}

void printList(Node *head){
    while(head){
        printf("%c ",head -> character);
        head = head -> next;
    }
}

void deleteList(Node **head){
    Node* tmp;
    while(*head) {
        tmp = (*head);
        (*head) = (*head) -> next;
        free(tmp);
    }
}

int length(Node *head){
    int length = 0;
    while(head){
        length++;
        head = head -> next;
    }
    return length;
}

void fillingIn(Node *head,char* A){
    int i = 0;
    while(head){
        A[i] = head->character;
        i++;
        head = head->next;
    }
}

 void fillingOut(Node *head,char* A){
   int i = 0;
   while(head){
     head->character = A[i];
     i++;
     head = head->next;
   }
 }


int main(int argc, char const *argv[]) {
    Node *head = NULL;
    Node *head2 = NULL;
    Node *tmp;
    int n,n2;
    char character;
    printf("How many elements will be in the first list: ");
    scanf("%d",&n );

    for (size_t i = 0; i < n; i++) {
        printf("Print %d character\n",i + 1);
        scanf("%s",&character);
        push(&head,character);
    }
    int kostili = 0;
    printf("How many elements will be in the second list: ");
    scanf("%d",&n2);
    tmp = head;
    Node *tmp2 = head;
    int k = n2;
    for (size_t i = 1; i <= n2; i++) {
        head = tmp;
        kostili = 0;
        printf("\nPrint %d character\n",i);
        scanf("%s",&character);
        while(head){
            if(head->character == character){
                printf("The first list contains this character, please enter another one");
                i--;
                kostili++;
                break;
            }
            head = head->next;
        }
        if(kostili == 0){
            push(&head2,character);
        }
        n2 = k;
    }

     tmp = head2;
     int len = length(tmp);
     char str[len];
     tmp = head2;
     char buffer;

     fillingIn(tmp,str);

     tmp = head2;

     for (size_t i = 0; i < strlen(str); i++) {
       for (size_t j = 0; j< strlen(str) - 1; j++){
         if (str[j] > str[j+1]){
           buffer = str[j];
           str[j] = str[j + 1];
           str[j + 1] = buffer;
         }
       }
     }

    fillingOut(tmp,str);
    printf("\nThe first list\n");
    printList(tmp2);
    printf("\nThe second list\n");
    printList(head2);
    deleteList(&head);
    deleteList(&head2);
    free(tmp);
    free(tmp2);
    return 0;
}
