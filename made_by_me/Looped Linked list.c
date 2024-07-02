#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *link;
};

void chacking_the_element_number(int *how_many_elements, int *element_number)
{
    while(*how_many_elements < 0){
        printf("Please enter a positive number: ");
        scanf("%d",how_many_elements);
        *element_number = *how_many_elements;
        if(*how_many_elements >= 0){
            break;
        }
    }
    *element_number = *how_many_elements;
}

void taking_input_of_elements(int element_number,struct node *head, struct node *next, struct node *point)
{
    if(element_number == 0){
        printf("There are no elements in the list");
    }
    else if(element_number == 1){
        printf("Enter your that one element: ");
        scanf("%d",&head->data);
        head->link = NULL;
    }
    else{
        printf("Enter your elements:");
        scanf("%d",&head->data);

        head->link = NULL;
        point = head;

        for(int i = 1; i < element_number; i++){
            struct node *next = (struct node*) malloc (sizeof(struct node));

            scanf("%d",&next->data);

            point->link = next;
            next->link = NULL;
            point = point->link;
        }
    }
}

void printing_the_elements(int element_number,struct node *head, struct node *next, struct node *point)
{
    if(element_number > 0){
        printf("Your elements are: ");
        point = head;

        while (point != NULL){
           printf("%d ",point->data);
            point = point->link;
        }
    }
}

void add_more_elements(int more_number_of_elements,struct node *head, struct node *point)
{
    point = head;
    printf("Enter the new elements:");

    while(point->link != NULL){
        point = point->link;

        if(point->link == NULL){
            for(int i = 0; i < more_number_of_elements; i++){
                struct node *temp=(struct node*) malloc (sizeof(struct node));
                scanf("%d",&temp->data);

                temp->link = NULL;
                point->link = temp;
                point = temp;
            }
            break;
        }
    }
}

void delete_an_element(int position, struct node *head)
{
    struct node *back;
    struct node *current;
    back = head;

        // If the position is one then this happens:
    if(position == 1){
        for(int i = 0; i < 1; i++){
            current = head->link;
        }
        head->data = current->data;
        head->link = current->link;
    }

    else{
    for(int i = 1; i < position-1; i++){
            back = back->link;
        }
       current = back->link;
        back->link = current->link;
    }
}



int main ()
{
    int how_many_elements,element_number, more_number_of_elements;
    printf("How many elements do you want to enter:");
    scanf("%d",&how_many_elements);

        // The nodes:
    struct node *head = (struct node*) malloc (sizeof(struct node));
    struct node *next = (struct node*) malloc (sizeof(struct node));
    struct node *point = NULL;


        //CALLING THE FUNCTIONS:
    // chacking the elements are they positive or not
    chacking_the_element_number(&how_many_elements, &element_number);
    //taking input of elements:
    taking_input_of_elements(element_number,head,next,point);
    //printing the basic elements:
    printing_the_elements(element_number,head,next,point);

        //ADDING MORE ELEMENTS:
    if(element_number != 0){
        char what_do_you_want[10];
        char yes[5] = "YES";
        printf("\n");
        printf("\nAdding more elements:\nIf You want to enter more elements then type YES or NO (All in capital latter)\n");
        printf("So do you want to enter more elements YES or NO: ");
        scanf("%s",what_do_you_want);
        if(strcmp(what_do_you_want , yes) == 0){
            printf("How many elements do you want to enter: ");
            scanf("%d",&more_number_of_elements);
            if(more_number_of_elements < 0){
                printf("No more elements will be added due to invalid input");
            }
            else if(more_number_of_elements != 0){
                //calling function:
                add_more_elements(more_number_of_elements, head, point);
                printf("After adding your elements:\n");
                    //calling function:
                printing_the_elements(element_number, head, next, point);
            }

        }
    }

        //DELETING AN ELEMENT:
    if(element_number != 0){
        printf("\n");
        printf("\nDeleting an element:\nIf you want to delete any element from your list then type YES or NO (All in capital latter)\n");
        printf("So do you want to Delete any elements YES or NO: ");
        point = head; // point is pointing to head
            //counting the number of total elements:
        int count = 0;
        while (point != NULL){
            count++;
            point = point->link; // point is now on the second element and so on
        }

            //taking the position:
        int position;

        char want_to_delete[10];
        char yes[5] = "YES";
        scanf("%s",want_to_delete);
            //YES or NO
        if(strcmp(want_to_delete,yes) == 0){
            printf("Enter the *position(start from 1)* of the element:");
            scanf("%d",&position);
            // check the position is not bigger then element number:
            if(position > count){
                while(position > count){
                printf("(your wanted position is bigger then the size of the list) please enter a valid position :");
                scanf("%d",&position);
                if(position < 0){
                    while(position < 0){
                    printf("please enter a valid position:");
                    scanf("%d",&position);
                    if(position >= 0){
                        position = position;
                        break;
                }
                }
                if(position <= count){
                    position = position;
                    break;
                }
                }
                }

                //check the position is not a negetive number:
            }
            while(position < 0){
                printf("please enter a valid position:");
                scanf("%d",&position);
                while(position > count){
                printf("(your wanted position is bigger then the size of the list) please enter a valid position :");
                scanf("%d",&position);
                if(position <= count){
                    position = position;
                    break;
                }
                }
                if(position >= 0){
                    position = position;
                    break;
                }

            }

                //calling function:
            delete_an_element(position, head);
            printf("\n");
            printf("After deleting your final list is:\n");
                //calling function:
            printing_the_elements(element_number,head,next,point);
        }
    }

printf("\nTHANK YOU\n");
return 0;

}
