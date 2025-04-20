"""
matches = [ 
    {"team1": "Brazil", "team2": "Argentina", "goals1": 2, "goals2": 1},
    {"team1": "Argentina", "team2": "France", "goals1": 1, "goals2": 1},
    {"team1": "Brazil", "team2": "France", "goals1": 1, "goals2": 0},
    {"team1": "Germany", "team2": "France", "goals1": 1, "goals2": 2}, 
    {"team1": "Brazil", "team2": "Germany", "goals1": 3, "goals2": 2}, 
    {"team1": "Argentina", "team2": "Germany", "goals1": 2, "goals2": 0},
    {"team1": "Germany", "team2": "France", "goals1": 0, "goals2": 1}]

teams={}

for match in matches:
    teams1, teams2 = match["team1"],match["team2"]
    goals1,goals2 = match["goals1"],match["goals2"]
    if teams1 not in teams:
        teams[teams1]={"points":0,"goals":0}
    if teams2 not in teams:
        teams[teams2]={"points":0,"goals":0}

    teams[teams1]["goals"]+=goals1
    teams[teams2]["goals"]+=goals2
    
    if goals1>goals2:
        teams[teams1]["points"]+=2
    if goals1<goals2:
        teams[teams2]["points"]+=2
    if goals1==goals2:
        teams[teams1]["points"]+=1
        teams[teams2]["points"]+=1

leaderboard=[]

for teams,stats in teams.items():
    leaderboard.append((teams,stats["points"], stats["goals"]))

leaderboard.sort(key = lambda x: (x[1],x[2]),reverse=True)

print(leaderboard)


s="flower flow flight"
l=s.split()
prefix=l[0]
for words in l:
    while not words.startswith(prefix) and prefix:
        prefix=prefix[:-1]

print(prefix)

import re
Shopping_csv=open("shopping_file.csv","r")
Price_csv=open("prices_file.csv","r")
data_shopping=Shopping_csv.read()
data_price=Price_csv.read()
clean_data_shopping=re.split(",|\n",data_shopping)
clean_data_price=re.split(",|\n",data_price)
total_price=0
for i in range(5,len(clean_data_price),3):
    total_price+=int(clean_data_price[i])*int(clean_data_shopping[i])

print(total_price)


import pandas as pd

price_csv=pd.read_csv("prices_file.csv")
shopping_csv=pd.read_csv("shopping_file.csv")

merge_df=pd.merge(price_csv,shopping_csv,on="ProductName")

merge_df["TotalCost"]=merge_df["Qty"]*merge_df["Price"]
total_price=merge_df["TotalCost"].sum()
print(total_price)


with open("data.txt") as f:
    data=f.read().lower()

clean_text=""

for char in data:
    if char.isalnum() or char.isspace():
        clean_text+=char
    else:
        clean_text+=" "

words= clean_text.split()

word_count={}
for word in words:
    word_count[word]=word_count.get(word,0) + 1

with open("ans.txt","w") as f:
    for word,count in sorted(word_count.items(),key=lambda x:x[1],reverse=True):
        f.write(f"{word}:{count}\n")
"""

str_inupt="""
2. Explicit is better than implicit.
4. Complex is better than complicated.
1. Beautiful is better than ugly.
5. Flat is better than nested.
3. Simple is better than complex.

shuffle="3,1,5,2,4"
list_input=str_inupt.split("\n")
clean_list=[i for i in list_input if i != ""]
list_shuffle=shuffle.split(",")
clean_shuffle=[int(i)-1 for i in list_shuffle]
print(clean_list)
for i in clean_shuffle:
    print(clean_list[i])
"""
mat_1=[[1,0,0],
   [0,1,0],
   [0,0,1]]
mat_2=[[9,8,7],
   [6,5,4],
   [3,2,1]]

zero_mat=[]

for _ in range(len(mat_1)):
    zero_mat.append([0]*len(mat_1))

print(zero_mat)

for r in range(len(mat_1)):
    for c in range(len(mat_2[0])):
        for k in range(len(mat_2)):
            zero_mat[r][c] += mat_1[r][k] * mat_2[k][c]

print(zero_mat)