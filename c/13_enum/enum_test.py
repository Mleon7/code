#  2022-05-19
# Mleon
# learn: enum

from enum import Enum

Month = Enum('Month', ('Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'))

for name, member in Month.__members__.items():
	print('name: ', name, ', member: ', member, ', member.value: ', member.value)

print()

Day = Enum('Day', ('Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun'))
for name, member in Day.__members__.items():
	print('name: ', name, ', member: ', member, ', member.value: ', member.value)
