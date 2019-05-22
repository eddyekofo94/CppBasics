class vector
{
        double x, y, z;
        static int total;
public :
        ~vector();
        vector();
        vector(double);
        vector(double,double,double);
        void display();
        void multiply(int);
        int multiply(vector&);
        vector sum(vector&);
        static int nbvect();
};
