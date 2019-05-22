class int_stack
{
	int size;
	int *adr;
	int nelem;
public:
	int_stack(int=20);
	~int_stack();
	int full();
	int empty();
	void push(int);
	int pop(int &);
	//	int_stack(int_stack&);

};
