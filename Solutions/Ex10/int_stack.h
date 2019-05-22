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
	void operator<(int);
	int operator>(int &);
	int_stack(int_stack&);

};
