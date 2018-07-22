# cout 사용법 @ c++

## 1. K 자리까지 출력
header => #include <iomanip><br />
std::cout.setf(ios::showpoint);
std::cout.precision(5);

## 2. 올림, 반올림, 버림
<code>header => #include <cmath></code>


### 올림 
<code>ceil(number)
    
### 내림 
<code>floor(number)
    
### 반올림 
<code>floor(number + 0.5)
floor(number + 0.5)</code>
