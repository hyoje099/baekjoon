import sys

n = int(input())
dp = [0] * 11  # 최대 입력값인 N=10까지 고려하여 배열 생성
dp[1], dp[2], dp[3] = 1, 2, 4  # 초기값 설정

for i in range(4, 11):
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]

for _ in range(n):
    testNum = int(sys.stdin.readline())
    print(dp[testNum])