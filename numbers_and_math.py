print("I have a class of 33 students.")
print("There are 11 girls, so that means..")
# 33 minus 11
print(f"there are {33-11}boys.")
print()
# divide number of girls (11) by total students (33), then multiply by 100 to get the percentage, then round to 2 decimal places
print(f"That means {round(100 * 11/33, 2)} % are girls...")
# subtract 11 girls from 33 students to get # of boys, divide by number of students (33) then multiply by 100 to get percentage, round to 2 dec places
print(f"and {round(100 * (33 - 11)/33, 2)} % are boys.")
print()
print("If we made groups of six...")
# divide number of students (33) by number of people in a group (6)
print(f"There would be {33 // 6} groups of six.")
# get the remainder of 33 students divided by groups of 6
print(f"And then a smaller group of {33% 6} people.")
print("-" * 30)
print("If we had 17 apples and 3 people...")
# divide number of apples (17) by number of people (3)
print(f"Each person would get {17 // 3} whole apples.")
# get remainder of 17 apples divided by 3 people
print(f"There would be {17 % 3} apples remaining.")
print()
print("If we charged each person $2 each for their 5 apples..")
# multiply $2 price by 5 apples
print(f"they would each pay ${2*5}.")
