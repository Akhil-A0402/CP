import os

try:
    input = open("input.txt","r")
    output = open("output.txt","w")
    
    input.close()
    output.close()
except Error:
    print("Error")