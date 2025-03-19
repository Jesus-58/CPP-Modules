#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) 
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(num * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_value >> _fractionalBits;
}

bool Fixed::operator>(const Fixed &other) const { return this->_value > other._value; }
bool Fixed::operator<(const Fixed &other) const { return this->_value < other._value; }
bool Fixed::operator>=(const Fixed &other) const { return this->_value >= other._value; }
bool Fixed::operator<=(const Fixed &other) const { return this->_value <= other._value; }
bool Fixed::operator==(const Fixed &other) const { return this->_value == other._value; }
bool Fixed::operator!=(const Fixed &other) const { return this->_value != other._value; }

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result._value = this->_value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result._value = this->_value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result._value = (this->_value * other._value) >> _fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result._value = (this->_value << _fractionalBits) / other._value;
    return result;
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_value++;
    return temp;
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_value--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
