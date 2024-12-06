party = {}
score = {}
n = int(input())
for i in range(n):
    cond = input()
    part = input()
    party[cond] = part
    score[cond] = 1
n = int(input())
for i in range(n):
    vote = input()
    if vote in score:
        score[vote] += 1
max1 = 0
max2 = 0
i1 = ""
i2 = ""
for i in score:
    if score[i] > max1:
        max1 = score[i]
        i1 = i
for i in score:
    if i == i1:
        continue
    if score[i] > max2:
        max2 = score[i]
        i2 = i
if max1 == max2:
    print("tie")
else:
    print(party[i1])