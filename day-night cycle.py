time = input("what time is it (in 24 hour with 4 digits")
hour = int(time[:2])
if hour <= 6 or hour >= 22:
  print("night")
else:
  print("day")
