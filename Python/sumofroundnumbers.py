t = int(input())


res = []
qtds = []
for i in range(t):
    ent = input()
    qtds.append(len(ent) - ent.count('0'))
    adicionar = []
    for i in range(len(ent)):
        if ent[i] != '0':
            adicionar.append(ent[i]+'0'*(len(ent)-1-i))
    res.append(" ".join(adicionar))

for i in range(len(qtds)):
    print(qtds[i])
    print(res[i])