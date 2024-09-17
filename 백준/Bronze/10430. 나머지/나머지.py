# 입력 받기
A, B, C = map(int, input().split())

# 각 식 계산하기
result_1 = (A + B) % C
result_2 = ((A % C) + (B % C)) % C
result_3 = (A * B) % C
result_4 = ((A % C) * (B % C)) % C

# 결과 출력하기
print(result_1)
print(result_2)
print(result_3)
print(result_4)
