template <class T>
class sabkaStack{

	protected:
		int _top;
		int _arr[10];
	public:

		//template <class T>
		void top() const;
		
		//template <class T>
		void push(T);
		
		//template <class T>
		void pop();
		
		//template <class T>
		int isEmptyStack();

		//template <class T>
		sabkaStack();

		//template <class T>
		sabkaStack(int &size);

};

