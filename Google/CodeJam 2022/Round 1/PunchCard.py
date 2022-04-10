t= int(input(""))
ts=t

while t>0:
    print("Case #"+str(ts-t+1)+":")
    s=input("")
    [r,c]=s.split(" ")
    r=int(r)
    c=int(c)
    for i in range(r+1):
        if i==0:
            print("..+"+("-+"*(c-1)))
            print("..|"+(".|"*(c-1)))
        else:
            print("+"+("-+"*c))
            if(i!=r):
                print("|"+(".|"*c))
    t=t-1