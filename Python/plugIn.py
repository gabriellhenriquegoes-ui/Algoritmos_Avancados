string = input()

verificadas = []

for car in string:
    if verificadas and verificadas[-1] == car:
        verificadas.pop()
    else:
        verificadas.append(car)
        
if verificadas:
    print(''.join(verificadas))