#pragma once

namespace shapes
{
    class Square
    {
    public:
        Square();
        explicit Square(double side);
        ~Square();

        void   SetSide(double side);
        double GetSide() const;

    private:
        double mSide;
    };
}
