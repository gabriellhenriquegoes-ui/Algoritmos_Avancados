string = input()
pilha = []

for car in string:
    if car.lower() in "aeiouy":
        pass
    else:
        pilha.append("."+car.lower())

print("".join(pilha))