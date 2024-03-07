//перегрузить операторы >,<,>=,<=,!=,==,~,++,--,++,--
#include <iostream>
#include <cstdint>

class Fraction{
private:
    int32_t _num; 
    uint32_t _denom;
    void Reduce();
    
public:
    Fraction(double realFract);
    Fraction(int32_t num,uint32_t denom);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& tmp){ 
        os << tmp._num << "/" << tmp._denom << std::endl;
    }
    Fraction operator+(const Fraction& tmp)const{
        int32_t new_num = tmp._num * static_cast<int32_t>(_denom) + _num * static_cast<int32_t>(tmp._denom);
        uint32_t new_denom = _denom * tmp._denom;
        return Fraction(new_num, new_denom);
    }
    bool operator<(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) < (_num * static_cast<int32_t>(tmp._denom));
    }
    bool operator<=(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) <= (_num * static_cast<int32_t>(tmp._denom));
    }
    bool operator>(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) > (_num * static_cast<int32_t>(tmp._denom));
    }
    bool operator>=(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) >= (_num * static_cast<int32_t>(tmp._denom));
    }
    bool operator==(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) == (_num * static_cast<int32_t>(tmp._denom));
    }
    bool operator!=(const Fraction& tmp)const{
        return (tmp._num * static_cast<int32_t>(_denom)) != (_num * static_cast<int32_t>(tmp._denom));
    }

    Fraction& operator++(int){ //prefix
        _num += _denom;
        return *this;
    }
    Fraction operator++(){ //postfix
        int32_t old_num = _num;
        _num += _denom;
        return(Fraction(old_num,_denom));
    }

    Fraction& operator--(int){ //prefix
        _num -= _denom;
        return *this;
    }
    Fraction operator--(){ //postfix
        int32_t old_num = _num;
        _num -= _denom;
        return(Fraction(old_num,_denom));
    }
    Fraction operator~(){
        _num = -(_num);
        return *this;
    }
};