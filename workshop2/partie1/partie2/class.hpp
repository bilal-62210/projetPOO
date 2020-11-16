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
    protected:
        int z;
    public:
        void m(void);
};

class stockage : public B
{
        protected:

        public: 
            void ajouter(void);

};