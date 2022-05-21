# 2022-05-19
# Mleon
# learn: 表驱动法；判断某年某月有多少天。

def is_leap(year):
	if (((year%4 == 0) and (year%100 != 0)) or (year%400 == 0)):
		return True
	else:
		return False

def days_of_month(year, month):
	days = (31, 29 if is_leap(year) else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
	return days[month - 1]


year = input("please input year: ")
year = int(year)
month = input("please input month: ")
month = int(month)

print(year, "年", month, "月有", days_of_month(year, month), "天")
