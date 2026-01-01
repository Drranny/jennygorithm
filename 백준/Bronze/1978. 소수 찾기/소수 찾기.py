# 1. 입력 받기
n = int(input()) # 수의 개수 N
numbers = list(map(int, input().split())) # N개의 수들을 리스트로 받기

# 2. 소수의 개수를 셀 변수
prime_count = 0

# 3. 리스트에 있는 숫자들을 하나씩 꺼내서 확인
for num in numbers:
    if num < 2: # 1은 소수가 아니므로 제외
        continue
    
    # 약수가 있는지 확인하기 위한 변수
    error = 0
    
    # 2부터 해당 숫자 이전까지 나누어떨어지는지 확인
    for i in range(2, num):
        if num % i == 0:
            error += 1 # 나누어떨어지면 소수가 아님
            break # 더 이상 확인할 필요 없으므로 멈춤

    if error == 0:
        prime_count += 1

# 4. 결과 출력
print(prime_count)