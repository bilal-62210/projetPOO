#pragma once

class A
{
    protected:
        int x;
    public:
         virtual void m(void);
        
};

class B : public A
{
    private:
        int z;
    public:
        void m(void);
};