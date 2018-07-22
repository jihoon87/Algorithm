# cout 사용법 @ c++

## 1. K 자리까지 출력
header => #include <iomanip>
std::cout.setf(ios::showpoint);
std::cout.precision(5);

## 2. 올림, 반올림, 버림
header => #include <cmath>


### 올림 
ceil(number)
    
### 내림 
floor(number)
    
### 반올림 
floor(number + 0.5)
floor(number + 0.5)
