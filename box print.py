def box_pattern(width, height, symbol):
    for i in range(height): 
        for j in range(width):
            if(i == 0 or i == height-1 or j == 0 or j == width-1):
                print(symbol,end="")
            else:
                print(" ",end="")
        print("")
    return "==END OF THE PROGRAM=="

width = int(input("Enter your width."))
height = int(input("Enter your height. "))
symbol = input ("Enter the symbol u want to print.")
print(box_pattern(width, height, symbol))