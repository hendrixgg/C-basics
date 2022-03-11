#ifndef SAM_H
#define SAM_H


class Sam
{
    public:
        Sam(int a, int b);
        void printShiz();
        void printShiz2() const;
        void print();
    private:
        int regVar;
        const int constVar;

};

#endif // SAM_H
