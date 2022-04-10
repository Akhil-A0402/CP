# Given the names and grades for each student in a class of  students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.

# Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.

# Link https://www.hackerrank.com/challenges/nested-list/

if __name__ == '__main__':
    records = []
    minimum=9999
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])
        if(score<minimum):
            minimum=score
    
    value=9999
    for _ in records:
        if(value>_[1] and _[1]!=minimum):
            value=_[1]
        
    rel = []
    def name(e):
        return e[1]
    
    for _ in records:
        if(_[1]==value):
            rel.append(_)

    rel.sort(key=name, reverse=True)
    for _ in rel:
        print(_[0])