namespace xi {


/** Declares a stack of integers.
 */
    class IntStack {

    public:
        // Constructors
        IntStack();           ///< Default constructor


    public:
        //----<Main ADT interface>----

        /** Pushes a given element onto the stack.
         *
         *  If no more elements can be placed onto the stack due to its overflow an std::logic_error is thrown.
         */
        void push(int el);


    public:
        // Non classic ADT helper methods

        /** Returns true if the stack is empty, false otherwise */
        bool isEmpty() const;

        /** Returns true if the stack is full, false otherwise */
        bool isFull() const;


    protected:
        int*    _stack;                         ///< Stack as a dynamic array

    }; // class IntStack


} // namespace xi