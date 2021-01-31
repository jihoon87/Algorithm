# cout 활용법

## 1. 소수점 출력

### 1.1 소수점 k자리까지 출력

```text
std::cout<<fixed;
std::cout.precision(k);
```

_cout&lt;&lt;fixed_ 해제하려면 cout.unsetf\(ios::fixed\);

> **Example** ₩₩₩ double a = 5.5555; std::cout&lt;&lt;fixed; std::cout.precision\(2\); ₩₩₩

### 1.2 소수점 포함하여 k자리 만큼 출력

```text
std::cout.precision(k);
```

### 1.3 소수점 포함하여 k자리 만큼 출력 + 소수점 이하 0으로 출력

```text
#include <iomanip>;
std::cout.setf(ios::showpoint);
std::cout.precision(k);
```

> **Example**
>
> ```text
>   double a = 5.55555;
>   std::cout.setf(ios::showpoint);
>   std::cout.precision(3);
>   std::cout<< a << std::cout;
> ```

## 2. 올림, 반올림, 버림

```text
#include <cmath>
```

### 올림

```text
ceil(number)
```

### 내림

```text
floor(number)
```

### 반올림

```text
floor(number + 0.5)
```

## 3. Output Formatting

```text
#include <iostream>

using std::cout;
using std::endl;
using std::scientific;
using std::fixed;
using std::ios;

int main()
{
  float small = 3.1415926535897932384626;
  float large = 6.0234567e17;
  float whole = 2.000000000;

  cout << "Some values in general format" << endl;
  cout << "small:  " << small << endl;
  cout << "large:  " << large << endl;
  cout << "whole:  " << whole << endl << endl;

  cout << scientific;

  cout << "The values in scientific format" << endl;
  cout << "small:  " << small << endl;
  cout << "large:  " << large << endl;
  cout << "whole:  " << whole << endl << endl;

  cout << fixed;

  cout << "The same values in fixed format" << endl;
  cout << "small:  " << small << endl;
  cout << "large:  " << large << endl;
  cout << "whole:  " << whole << endl << endl;

  // Doesn't work -- doesn't exist
  // cout << general;

  cout.unsetf(ios::fixed | ios::scientific);

  cout << "Back to general format" << endl;
  cout << "small:  " << small << endl;
  cout << "large:  " << large << endl;
  cout << "whole:  " << whole << endl << endl;

  return 0;
}
produces
Some values in general format
small:  3.14159
large:  6.02346e+17
whole:  2

The values in scientific format
small:  3.141593e+00
large:  6.023457e+17
whole:  2.000000e+00

The same values in fixed format
small:  3.141593
large:  602345661202956288.000000
whole:  2.000000

Back to general format
small:  3.14159
large:  6.02346e+17
whole:  2
```

