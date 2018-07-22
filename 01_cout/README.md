# cout 사용법 @ c++

## 1. K 자리까지 출력

    #include <iomanip>;
    std::cout.setf(ios::showpoint);
    std::cout.precision(5);
    
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
    floor(number + 0.5)



<!DOCTYPE html>
<html>
  <head>
    <title>Title</title>
    <meta charset="utf-8">
<style>
.theBlackBackground {background-color:#000;color: red;}
</style>
     </head>
  <body>

<textarea id="source">

class: middle, center, theBlackBackground
# Title
</textarea>

 <script src="http://gnab.github.io/remark/downloads/remark-latest.min.js" type="text/javascript">
</script>
 <script type="text/javascript">
      var slideshow = remark.create();
 </script>
  </body>
</html>
