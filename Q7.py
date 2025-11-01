f=open('batting.csv','r')
data1=f.readlines()
rbi1=[]
players1=[]
career_rbis={}
index=[]

#extract the targeted data from the file
for i in data1[1:]:
    j=i.strip().split(',')
    rbi1+=[j[12]]
    players1+=[j[0]]


#delete the invalid data
for i in range(len(rbi1)-1,-1,-1):#倒序删除
    if not rbi1[i].isdigit():
        index.append(i)
for i in index:
    del rbi1[i]
    del players1[i]
#merge the repeated data together->use the dictionary
for i in range(len(rbi1)):
    if players1[i] not in career_rbis.keys():
        career_rbis[players1[i]]=int(rbi1[i])

    else:
        career_rbis[players1[i]]+=int(rbi1[i])


max_rbi=max(career_rbis.values())
for i in career_rbis.keys():
    if career_rbis[i]==max_rbi:
        max_player=i
        break
print(max_player,max_rbi)


        

    


    
