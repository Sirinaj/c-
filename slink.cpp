#include <iostream>

struct Node {
  int value;
  Node *next;
};

int main() {
  Node *head = NULL;  // head of the linked list
  Node *current = NULL;  // current node we are processing
  int value;  // value to store in the current node

  std::cout << "Enter a series of integers (0 to stop):" << std::endl;
  while (1) {
    std::cin >> value;
    if (value == 0) {
      break;
    }

    // create a new node and store the value
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL) {
      // this is the first node in the list
      head = new_node;
      current = new_node;
    } else {
      // add the new node to the end of the list
      current->next = new_node;
      current = new_node;
    }
  }

  // print the values in the linked list
  std::cout << "Values in the linked list:" << std::endl;
  current = head;
  while (current != NULL) {
    std::cout << current->value << " ";
    current = current->next;
  }
  std::cout << std::endl;

  return 0;
}

