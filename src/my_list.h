namespace xi {


/** вар 4
 */
    class Node {

    public:
        // Constructors
        Node(int value);           ///<  constructor


    public:
        int _value;                         ///< Stack as a dynamic array
        Node* _next;
    };

    class List {

    public:
        // Constructors
        List();           ///< Default constructor

    public:
        void add(int value);
        void print();
        bool isEmpty();
        void createList(int length);
        void split();
        void printList(Node* head);
        Node* search(int index);
    public:
        Node* _head;
        Node* _head1;
        Node* _head2;
        int _length;
    };

} // namespace xi