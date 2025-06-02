#ifndef LinkedList_hpp
#define LinkedList_hpp

class LinkedList{
    public:
        LinkedList();
        ~LinkedList();

        void append(int value);
        void deleteValue(int value);
        void print() const;
        void run();

    private:
        struct Node{
            int data;
            Node* next;
        };

        Node* head;
};

#endif