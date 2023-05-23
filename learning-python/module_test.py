def sum_numbers (x, y):
    return x + y


if __name__ == "__main__":
    import sys

    if len(sys.argv) != 3:
        print('usage: python -m sum_module <number1> <number2>')
    else:
        try:
            number1 = int(sys.argv[1])
            number2 = int(sys.argv[2])
            result = sum_numbers(number1, number2)
            print(f'The sum of {number1} and {number2} is {result}')
        except ValueError:
            print("Invalid input. Please enter value integer number")
