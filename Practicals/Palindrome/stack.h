// Header

template<class T>
class Stack{
        private:
                vector<T> elems;
        public:
                void push(T const&);
                void pop();
                T top() const;

                bool empty() const{
                        return elems.empty();
                }
};

