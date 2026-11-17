#pragma once

namespace shapes
{
    class Circle
    {
    public:
        Circle();
        explicit Circle(double radius);
        ~Circle();

        void   SetRadius(double radius);
        double GetRadius() const;

    private:
        double mRadius;
    };
}
