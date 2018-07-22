# cout 사용법 @ c++

## 1. K 자리까지 출력
header => #include <iomanip><br/>
std::cout.setf(ios::showpoint);<br/>
std::cout.precision(5);<br/>

## 2. 올림, 반올림, 버림
<code>header => #include <cmath></code><br/>


### 올림 
<code>ceil(number)</code><br/>
    
### 내림 
<code>floor(number)</code><br/>
    
### 반올림 
<code>floor(number + 0.5)<br/>
floor(number + 0.5)</code><br/>
