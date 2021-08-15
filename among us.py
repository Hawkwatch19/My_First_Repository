import random
players="blue grey cyan pink green red black white".split()
crew=players.copy()
imposter=[]
print(players)
for x in range(2):
 if crew[random.randint(0,len(crew)-1)] not in imposter:
  imposter.append(crew[random.randint(0,len(crew)-1)])
  crew.remove(imposter[x])
 else:
  continue
while True:
 if len(imposter)==len(crew):
  print("defeated")
  break
 elif len(imposter)==0:
  print("victory")
  break
 else:
  user=input(str(len(imposter))+" imposter\n"+str(len(crew)+len(imposter))+" players\n")
  players.remove(user)
  if user in imposter:
   imposter.remove(user)
  else:
   crew.remove(user)
  print(players)