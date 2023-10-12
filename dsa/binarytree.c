#include "binarytree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2329
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(Node** root, int data) {
    char direction[10];
    if (*root == NULL) {
        *root = createNode(data);
        return;
    }
    printf("Enter the direction (left/right) for node value %d: ", data);
    scanf("%s", direction);
    Node* current = *root;
    Node* parent = NULL;
    while(current != NULL) {
        parent = current;
        if (strcmp(direction, "left") == 0) {
            current = current->left;
            if (current == NULL) {
                parent->left = createNode(data);
                return;
            }
        } else if (strcmp(direction, "right") == 0) {
            current = current->right;
            if (current == NULL) {
                parent->right = createNode(data);
                return;
            }
        }
        printf("Direction already taken, enter again (left/right) for node value %d: ", data);
        scanf("%s", direction);
    }
}
//2323
void preorderTraversal(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}
