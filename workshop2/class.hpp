class A
{
    protected:
        int x;
    public:
         void m(void);
        
};

class B : public A
{
    private:
        int z;
    public:
        void m(void);
};