# cout 활용법

## 1. 소수점 출력

### 1.1 소수점 k자리까지 출력
    std::cout<<fixed;
    std::cout.precision(k);
    
_cout<<fixed_ 해제하려면 
    cout.unsetf(ios::fixed);
>**Example**
>   ₩₩₩
>   double a = 5.5555;
>   std::cout<<fixed;
>   std::cout.precision(2);
>   ₩₩₩


### 1.2 소수점 포함하여 k자리 만큼 출력
    std::cout.precision(k);

### 1.3 소수점 포함하여 k자리 만큼 출력 + 소수점 이하 0으로 출력
    #include <iomanip>;
    std::cout.setf(ios::showpoint);
    std::cout.precision(k);
    
>**Example**
>   ```
>   double a = 5.55555;
>   std::cout.setf(ios::showpoint);
>   std::cout.precision(3);
>   std::cout<< a << std::cout;
>   ```
    
    
## 2. 올림, 반올림, 버림
    #include <cmath>

### 올림 
    ceil(number)
    
### 내림 
    floor(number)
    
### 반올림 
    floor(number + 0.5)


