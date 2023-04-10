# 시스템 프로그래밍


## Report 1: 16진수를 입력받아 2진수로 출력
### <a href="https://github.com/cottonrose1011/SysP/blob/main/report1.c">작성한 코드</a>

### 16진수를 받아 바로 2진수로 변환할 수 없기 때문에 먼저 10진수로 변환 후 2진수로 변환한다.

* decimalToBinary
  * 10진수로 인자를 받아 2진수로 변환한다.

* main
  * 16진수를 문자열로 받고, strtol 함수를 써서 10진수로 변환한다. (stdlib 필요)
  * 변환한 10진수 값을 decimalToBinary에 넘겨준다.
