namespace xi {


/** Declares a stack of integers.
 */
    class Node {

    public:
        // Constructors
        Node(int value);           ///< Default constructor


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
        bool isEmpty();
        Node* findByValue(int value);
        void insertByValue(int value, Node* node);
        void deleteByValue(int value);
        void print();
    public:
        Node* _head;
        Node* _tail;
    };

} // namespace xi