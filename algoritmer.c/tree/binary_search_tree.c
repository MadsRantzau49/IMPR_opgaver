#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure definition for a binary tree node
typedef struct treenode {
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

// Function prototypes
treenode *createnode(int value);
void printInorder(treenode* root);
void scanInsertNumber(treenode **rootptr);
void scanSearchNumber(treenode *root);
bool insertNumber(treenode **rootptr, int value);
bool findNumber(treenode *root, int value);
void startMenu(treenode **rootptr);
void insertList(treenode **rootptr);

// Main function
int main() {
    treenode *root = NULL;

    // Continuously display the menu for user interaction
    while (1) {
        startMenu(&root);
    }

    return 0;
}

// Function to create a new tree node with the given value
treenode *createnode(int value) {
    treenode* result = malloc(sizeof(treenode));
    if(result != NULL){
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

// Function to print a binary tree in inorder traversal
void printInorder(treenode* root) {
    if (root != NULL) {
        printInorder(root->left);
        printf("%d ", root->value);
        printInorder(root->right);
    }
}

// Function to prompt the user to insert a number and insert it into the binary tree
void scanInsertNumber(treenode **rootptr) {
    int value;
    printf("Insert number: ");
    scanf("%d", &value);
    insertNumber(rootptr, value);
}

// Function to insert a number into the binary tree
bool insertNumber(treenode **rootptr, int value) {
    treenode *root = *rootptr;
    if (root == NULL) {
        // The tree is empty, create a new node and set it as the root
        (*rootptr) = createnode(value);
        return true;
    }
    if (value == root->value) {
        // The value already exists in the tree, do nothing
        return false;
    }
    if (value < root->value) {
        // Recursively insert into the left subtree
        return insertNumber(&(root->left), value);
    } else {
        // Recursively insert into the right subtree
        return insertNumber(&(root->right), value);
    }
}

// Function to prompt the user to search for a number in the binary tree
void scanSearchNumber(treenode *root) {
    int value;
    printf("Insert number:\n> ");
    scanf("%d", &value);
    printf("%d, %s\n", value, findNumber(root, value) ? "Er i listen" : "Er IKKE i listen");
}

// Function to search for a number in the binary tree
bool findNumber(treenode *root, int value) {
    if (root == NULL) {
        // The number is not found in the tree
        return false;
    }
    if (root->value == value) {
        // The number is found in the tree
        return true;
    }
    if (value < root->value) {
        // Recursively search in the left subtree
        return findNumber(root->left, value);
    } else {
        // Recursively search in the right subtree
        return findNumber(root->right, value);
    }
}

// Function to display the main menu and perform actions based on user input
void startMenu(treenode **rootptr) {
    printf("Select one of the below options\n");

    printf("1) insert number\n");
    printf("2) search number\n");
    printf("3) print number\n");
    printf("4) exit\n");
    printf("5) insert list\n");
    printf("> ");
    int option;
    scanf("%d", &option);

    switch (option) {
        case 1:
            // Insert a number into the binary tree
            scanInsertNumber(rootptr);
            break;
        case 2:
            // Search for a number in the binary tree
            scanSearchNumber(*rootptr);
            break;
        case 3: 
            // Print the binary tree in inorder traversal
            printInorder(*rootptr);
            printf("\n");
            break;
        case 4:
            // Exit the program
            exit(EXIT_SUCCESS);
            break;
        case 5:
            insertList(rootptr);
            break;
        default:
            // Invalid option, prompt the user to try again
            printf("Not a valid option. Try again.\n");
            startMenu(rootptr);
            break;
    }
}

void insertList(treenode **rootptr){
    FILE* file = fopen("number.txt","r");
    int number;
    char c;
    while((c = fgetc(file)) != EOF){
        fscanf(file,"%d",&number);
        insertNumber(rootptr,number);
    }
}