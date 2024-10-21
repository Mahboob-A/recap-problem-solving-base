import itertools


def can_form_d(a, b, c, d):
    numbers = [a, b, c]
    operators = ["+", "-", "*"]

    for perm in itertools.permutations(numbers):
        # print(perm)
        
        for op1 in operators:
            # print(op1)
            for op2 in operators:
                expressions = [
                    f"({perm[0]} {op1} {perm[1]}) {op2} {perm[2]}",
                    f"{perm[0]} {op1} ({perm[1]} {op2} {perm[2]})",
                ]
                # print(expressions)

                for expr in expressions:
                    # print(expr)
                    try:
                        if eval(expr) == d:
                            print("YES")
                    except ZeroDivisionError:
                        continue 
    print("NO")


if __name__ == '__main__':
    a, b, c, d = map(int, input().split())
    # a , b, c, d = 3, 4, 5, 23 
    print(can_form_d(a, b, c, d))
