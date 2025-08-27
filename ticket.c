//Ticket Management System
#include<stdio.h>
#include<stdlib.h>  

struct Node{
    int fare;
    int priority;
    struct Node* next;
};

int main() {
    printf("This is CST Online Ticket Booking System for harbour line ^_^\nDo you want to book a ticket? (Y/N)\n");
    char ans;
    struct Node* head = 0;  
    scanf(" %c", &ans);

    while (ans == 'Y' || ans == 'y') {  
        //Ticket booking from harbour line
   
        printf("Where do you want to go?\n1. Masjid\n2. Sandhurst Road\n3. Dockyard Road\n4. Reay Road\n5. Cotton Green\n6. Sewri\n7. Vadala Road\n8. GTB Road\n9. Chunabhatti\n10. Kurla\n11. Tilak Nagar\n12. Chembur\n13. Govandi\n14. Mankhurd\n15. Vashi\n16. Sanpada\n17. Jui Nagar\n18. Nerul\n19. Seawood\n20. Belapur\n21. Kharghar\n22. Khandeshwar\n23. Panvel\n");
       
        int dest, fare;
        scanf("%d", &dest);

        printf("1. First class\n2. Second Class\n");
        int option;
        scanf("%d", &option);

        //Storing to keep data for government and final ticket booking
       
        //Creating node
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
       
        //Checking for node memory allocation
        if (newNode == 0) {
            printf("Memory allocation failed\n");
            return 1;
        }

        //Assigning priorities for Firt class tickets
        if (option == 1) {
            newNode -> priority = 1;  //Higher priority for first class
        }
        else {
            newNode -> priority = 2;  
        }

        if (dest >= 1 && dest <= 6) {
            if (option == 1) {
                newNode -> fare = 25;
            }
            else {
                newNode -> fare = 5;
            }
        }
       
        else if (dest == 7 || dest == 8) {
            if (option == 1) {
                newNode -> fare = 40;
            }
            else {
                newNode -> fare = 10;
            }
        }
       
        else if (dest >= 9 && dest <= 13) {
            if (option == 1) {
                newNode -> fare = 60;
            }
            else {
                newNode -> fare = 10;
            }
        }
       
        else if (dest == 14 || dest == 15) {
            if (option == 1) {
                newNode -> fare = 90;
            }
            else {
                newNode -> fare = 15;
            }
        }
       
        else if (dest == 18 || dest == 19) {
            if (option == 1) {
                newNode -> fare = 95;
            }
            else {
                newNode -> fare = 15;
            }
        }
       
        else if (dest == 20) {
            if (option == 1) {
                newNode -> fare = 95;
            }
            else {
                newNode -> fare = 20;
            }
        }
       
        else if (dest == 21 || dest == 22) {
            if (option == 1) {
                newNode -> fare = 100;
            }
            else {
                newNode -> fare = 20;
            }
        }
       
        else {
            printf("Invalid destination.\n");
            free(newNode);
            continue;
        }

        printf("Ticket Type:- \n1. One way ticket\n2. Return ticket\n");
        int type;
        scanf("%d", &type);
        if (type == 2) {
            newNode -> fare *= 2;  
        }

        //Insert node according to priority
        if (head == 0 || head->priority > newNode->priority) {
            newNode -> next = head;
            head = newNode;
        }
        else {
            struct Node* temp2 = head;
            while (temp2 -> next != 0 && temp2 -> next -> priority <= newNode -> priority) {
                temp2 = temp2 -> next;
            }
            newNode->next = temp2->next;
            temp2 -> next = newNode;
        }

        printf("Ticket booked with fare: %d and priority: %d\n", newNode -> fare, newNode -> priority);

        printf("Do you want to book another ticket? (Y/N)\n");
        scanf(" %c", &ans);
    }

    //Printing tickets sorted by priority
    printf("\\n-_- Printing the Tickets:\\n");
    struct Node* temp2 = head;
    while (temp2 != 0) {
        printf("Fare: %d, Priority: %d\\n", temp2 -> fare, temp2 -> priority);
        temp2 = temp2 -> next;
    }
   
    return 0;
}
