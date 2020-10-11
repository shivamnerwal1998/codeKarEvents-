def getMul(num,flag) :
    flag = flag+1
    num2 = 1
    for i in num:
        num2 = num2 * int(i) 
    num2 = str(num2)
    if(len(num2)==1) :
        print(flag)
        return 
    else:
        getMul(num2,flag)

num = input("")
getMul(num,0)
