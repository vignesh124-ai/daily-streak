class MyLinkedList {
public:
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* head;

    MyLinkedList() { head = nullptr; }

    int get(int index) {
        if (index < 0)
            return -1;

        Node* temp = head;

        for (int i = 0; i < index && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr)
            return -1;

        return temp->data;
    }

    void addAtHead(int val) {
        Node* n1 = new Node(val);

        n1->next = head;
        head = n1;
    }

    void addAtTail(int val) {
        Node* n2 = new Node(val);

        if (head == nullptr) {
            head = n2;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = n2;
    }

    void addAtIndex(int index, int val) {
        if (index < 0)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr)
            return;

        Node* n2 = new Node(val);

        n2->next = temp->next;
        temp->next = n2;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr)
            return;

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr)
            return;

        Node* del = temp->next;

        temp->next = del->next;

        delete del;
    }
};