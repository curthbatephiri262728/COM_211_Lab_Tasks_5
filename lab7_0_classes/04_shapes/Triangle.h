#pragma once

namespace shapes
{
    class Triangle
    {
    public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();

        void   SetBase(double base);
        void   SetHeight(double height);
        double GetBase() const;
        double GetHeight() const;

    private:
        double mBase;
        double mHeight;
    };
}
