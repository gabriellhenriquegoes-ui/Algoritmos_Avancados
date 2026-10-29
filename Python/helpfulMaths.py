import bisect

string = input()
pilha = []

for car in string:
    if car != "+":
        bisect.insort(pilha, car)

print("+".join(pilha))