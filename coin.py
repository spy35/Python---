import random

    # 앞면과 뒷면의 횟수를 저장할 변수를 초기화합니다.
front = 0
back = 0

for _ in range(100):
    # 0 또는 1을 무작위로 생성
    coin = random.randint(0, 1)

    if coin == 0:
        front += 1
    else:
        back += 1

print("동전의 앞면은 %d번 나왔습니다."% front)
print("동전의 뒷면은 %d번 나왔습니다."% back)

