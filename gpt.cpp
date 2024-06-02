#include <iostream>
#include <cstdlib>

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertAtPosition(Node*& head, int value, int position) {
    if (position < 0) {
        std::cout << "Invalid position." << std::endl;
        return;
    }

    if (position == 0) {
        insertAtBeginning(head, value);
    } else {
        Node* newNode = createNode(value);
        Node* current = head;
        int currentPosition = 0;

        while (current != nullptr && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        if (current == nullptr) {
            std::cout << "Invalid position." << std::endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot delete from beginning." << std::endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot delete from end." << std::endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}

void deleteAtPosition(Node*& head, int position) {
    if (position < 0) {
        std::cout << "Invalid position." << std::endl;
        return;
    }

    if (position == 0) {
        deleteAtBeginning(head);
    } else {
        Node* current = head;
        int currentPosition = 0;

        while (current != nullptr && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        if (current == nullptr || current->next == nullptr) {
            std::cout << "Invalid position." << std::endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

int length(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 1);
    insertAtBeginning(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtPosition(head, 5, 2);

    std::cout << "Linked List: ";
    display(head);

    std::cout << "Length of Linked List: " << length(head) << std::endl;

    deleteAtBeginning(head);
    deleteAtEnd(head);
    deleteAtPosition(head, 2);

    std::cout << "Linked List after Deletion: ";
    display(head);

    reverse(head);

    std::cout << "Reversed Linked List: ";
    display(head);

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
