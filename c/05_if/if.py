# 2022-05-15
# mleon
# learn: if

age = input("please input your age :");
age = int(age);

score = input("please input your score : ");
score = int(score);

IQ = input("please input your IQ : ");
IQ = int(IQ);


if ((age >= 18) and (score > 90 or  IQ > 120)) :
	print("你已成年，且成绩大于90或者IQ大于120，可以玩游戏了");
else : 
	print("不满足条件");
