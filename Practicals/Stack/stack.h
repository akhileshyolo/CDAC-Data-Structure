class sabkaStack{

	protected:
		int _top;
		int _arr[10];
	public:

		void top() const;
		void push(int);
		void pop();
		int isEmptyStack();

		sabkaStack();
		sabkaStack(int &size);

};
