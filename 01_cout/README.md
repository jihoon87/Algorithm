# cout 사용법 @ c++

## 1. K 자리까지 출력

    #include <iomanip>;
    std::cout.setf(ios::showpoint);
    std::cout.precision(5);
## 2. 올림, 반올림, 버림
<code>
header => #include <cmath><br/>
</code>


### 올림 
<code>
ceil(number)<br/>
</code>
    
### 내림 
<code>
floor(number)<br/>
    
### 반올림 
<code>
floor(number + 0.5)<br/>
floor(number + 0.5)<br/>
</code>
