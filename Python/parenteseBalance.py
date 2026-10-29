n = int(input())

for _ in range(n):
    string = input()
    stack = []
    balenciado = True
    pares = {")":"(", "]":"["}
    for car in string:
        if car in "([":
            stack.append(car)
        else:
            if not stack or stack[-1] != pares[car]:
                balenciado = False
                break
            else:
                stack.pop()
    if balenciado and not stack:
        print("Yes")
    else:
        print("No")
